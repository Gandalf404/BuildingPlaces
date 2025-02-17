#ifndef PARTSLISTWIDGET_H
#define PARTSLISTWIDGET_H

#include <QWidget>

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
};
#endif // PARTSLISTWIDGET_H
