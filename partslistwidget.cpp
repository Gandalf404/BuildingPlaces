#include "partslistwidget.h"
#include "ui_partslistwidget.h"

#include <QSqlError>
#include <QMessageBox>

PartsListWidget::PartsListWidget(QWidget *parent)
    : QWidget(parent)
    , ui(new Ui::PartsListWidget)
{
    ui->setupUi(this);
    con.connect();
    model = new QSqlRelationalTableModel(parent, con.getDatabaseConnection());
    model->setEditStrategy(QSqlRelationalTableModel::OnManualSubmit);
    model->setTable("part");
    model->setRelation(1, QSqlRelation("kit", "kit_id", "kit_id"));
    model->select();
    model->setHeaderData(0, Qt::Horizontal, tr("Код запчасти"));
    model->setHeaderData(1, Qt::Horizontal, tr("Код комплекта"));
    model->setHeaderData(2, Qt::Horizontal, tr("Наименование запчасти"));
    model->setHeaderData(3, Qt::Horizontal, tr("Количество запчастей"));
    model->setHeaderData(4, Qt::Horizontal, tr("part_finish_date"));
    ui->partsListTableView->setModel(model);
}

PartsListWidget::~PartsListWidget()
{
    delete ui;
    delete model;
}

void PartsListWidget::on_addPartPushButton_clicked()
{
    this->hide();
    partWidget = new PartWidget(nullptr);
    partWidget->show();
}

void PartsListWidget::on_editPartPushButton_clicked()
{
    this->hide();

    //QMap<int, QVariant> a = ui->partsListTableView->model()->itemData(ui->partsListTableView->currentIndex());
    partWidget = new PartWidget(nullptr, part, ui->partsListTableView->currentIndex());
    partWidget->show();
}

void PartsListWidget::on_deletePartPushButton_clicked()
{
    if (QMessageBox::question(ui->partsListTableView, "Внимание", "Вы действительно хотите удалить данную запчасть ?") == QMessageBox::Yes)
    {
        int selectedRow = ui->partsListTableView->currentIndex().row();
        model->removeRow(selectedRow);
        model->submitAll();
        model->select();
    }
}

