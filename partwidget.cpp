#include "partwidget.h"
#include "ui_partwidget.h"

PartWidget::PartWidget(QWidget* parent, const Part& part, const QModelIndex& index)
    : QWidget(parent)
    , ui(new Ui::PartWidget)
    , part(part)
    , index(index)
{
    ui->setupUi(this);
    if (index.row() != -1)
    {
        ui->partIdLineEdit->setText(QString::number(part.getPartId()));
        ui->kitIdComboBox->setEditText(QString::number(part.getKitId()));
        ui->partNameLineEdit->setText(part.getPartName());
        ui->partCountLineEdit->setText(QString::number(part.getPartCount()));
        ui->partFinishDateEdit->setDate(part.getPartFinishDate());
    }
}

PartWidget::~PartWidget()
{
    delete ui;
}

void PartWidget::on_savePushButton_clicked()
{
    Connection con;
    con.connect();

    QSqlRelationalTableModel* model = new QSqlRelationalTableModel(nullptr, con.getDatabaseConnection());
    model->setTable("part");
    model->setEditStrategy(QSqlRelationalTableModel::OnManualSubmit);
    model->select();
    QSqlRecord partRecord = model->record();

    if (index.row() == -1)
    {
        this->part = Part(ui->partIdLineEdit->text().toInt(),
                          ui->kitIdComboBox->currentText().toInt(),
                          ui->partNameLineEdit->text(),
                          ui->partCountLineEdit->text().toInt(),
                          ui->partFinishDateEdit->date());
    }

    partRecord.setValue(0, part.getPartId());
    partRecord.setValue(1, part.getKitId());
    partRecord.setValue(2, part.getPartName());
    partRecord.setValue(3, part.getPartCount());
    partRecord.setValue(4, part.getPartFinishDate());

    con.getDatabaseConnection().transaction();
    model->insertRecord(index.row(), partRecord);
    if (!model->submitAll())
    {
        con.getDatabaseConnection().rollback();
        qDebug() << model->lastError().text();
        QMessageBox::critical(this, "Ошибка", "При добавлении/изменении запчасти произошла ошибка");
        return;
    }
    con.getDatabaseConnection().commit();
    // try
    // {
    //     model->insertRecord(row, partRecord);
    //     model->submitAll();
    // }
    // catch (const QSqlError& e)
    // {
    //     con.getDatabaseConnection().rollback();
    //     qDebug() << e.text() << '\n' << e.databaseText();;
    //     QMessageBox::critical(this, "Ошибка", "При добавлении/изменении запчасти произошла ошибка");
    // }
    // con.getDatabaseConnection().commit();
}

