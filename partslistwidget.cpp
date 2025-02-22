#include "partslistwidget.h"
#include "ui_partslistwidget.h"

#include <QSqlError>

PartsListWidget::PartsListWidget(QWidget *parent)
    : QWidget(parent)
    , ui(new Ui::PartsListWidget)
{
    ui->setupUi(this);
    con.connect();
    model = new QSqlRelationalTableModel(parent, con.getDatabaseConnection());
    model->setTable("part");
    model->setRelation(1, QSqlRelation("kit", "kit_id", "kit_id"));
    model->select();
    model->setHeaderData(0, Qt::Horizontal, tr("Код запчасти"));
    model->setHeaderData(1, Qt::Horizontal, tr("Код комплекта"));
    model->setHeaderData(2, Qt::Horizontal, tr("Наименование запчасти"));
    model->setHeaderData(3, Qt::Horizontal, tr("Количество запчастей"));
    model->setHeaderData(4, Qt::Horizontal, tr("part_finish_date"));
    ui->partsListTableView->setModel(model);
    ui->partsListTableView->horizontalHeader()->setMinimumWidth(300);
}

PartsListWidget::~PartsListWidget()
{
    delete ui;
}
