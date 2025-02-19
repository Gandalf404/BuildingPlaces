#ifndef PARTSLISTWIDGET_H
#define PARTSLISTWIDGET_H

#include <QWidget>
#include "classes/include/connection.h"
#include <QSqlRelationalTableModel>

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

private:
    Ui::PartsListWidget *ui;
    Connection con;
    QSqlRelationalTableModel* model;
};
#endif // PARTSLISTWIDGET_H
