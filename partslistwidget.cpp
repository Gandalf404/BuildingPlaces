#include "partslistwidget.h"
#include "ui_partslistwidget.h"

PartsListWidget::PartsListWidget(QWidget *parent)
    : QWidget(parent)
    , ui(new Ui::PartsListWidget)
{
    ui->setupUi(this);
    con.connect();
    model = new QSqlRelationalTableModel(parent, con.getDatabaseConnection());
    model->setTable("part");
    model->setRelation(0, QSqlRelation("kit", "kit_id", "Код комплекта"));
    model->select();
    model->setHeaderData(0, Qt::Horizontal, tr("part_id"));
    model->setHeaderData(1, Qt::Horizontal, tr("kit_id"));
    model->setHeaderData(2, Qt::Horizontal, tr("part_name"));
    model->setHeaderData(3, Qt::Horizontal, tr("part_count"));
    model->setHeaderData(4, Qt::Horizontal, tr("part_finish_date"));
    ui->partsListTableView->setModel(model);
}

PartsListWidget::~PartsListWidget()
{
    delete ui;
}
