#ifndef PARTSLISTWIDGET_H
#define PARTSLISTWIDGET_H

#include <QWidget>
#include "classes/include/connection.h"
#include <QSqlRelationalTableModel>
#include "models/include/part.h"
#include "partwidget.h"

QT_BEGIN_NAMESPACE
namespace Ui {
class PartsListWidget;
}
QT_END_NAMESPACE

class PartsListWidget : public QWidget
{
    Q_OBJECT

public:
    PartsListWidget(QWidget *parent = nullptr);
    ~PartsListWidget();

private slots:
    void on_deletePartPushButton_clicked();

    void on_addPartPushButton_clicked();

    void on_editPartPushButton_clicked();

private:
    Ui::PartsListWidget *ui;
    Connection con;
    QSqlRelationalTableModel* model;
    Part part;
    PartWidget* partWidget;
};
#endif // PARTSLISTWIDGET_H
