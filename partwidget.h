#ifndef PARTWIDGET_H
#define PARTWIDGET_H

#include <QWidget>
#include <QSqlRecord>
#include <QSqlRelationalTableModel>
#include "models/include/part.h"
#include "classes/include/connection.h"
#include <QSqlError>

namespace Ui {
class PartWidget;
}

class PartWidget : public QWidget
{
    Q_OBJECT

public:
    explicit PartWidget(QWidget *parent = nullptr, const Part& part = Part(), const QModelIndex& index = QModelIndex());
    ~PartWidget();

private slots:
    void on_savePushButton_clicked();

private:
    Ui::PartWidget *ui;
    Part part;
    //int row;
    QModelIndex index;
};

#endif // PARTWIDGET_H
