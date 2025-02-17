#include "partslistwidget.h"
#include "ui_partslistwidget.h"

PartsListWidget::PartsListWidget(QWidget *parent)
    : QWidget(parent)
    , ui(new Ui::PartsListWidget)
{
    ui->setupUi(this);
}

PartsListWidget::~PartsListWidget()
{
    delete ui;
}
