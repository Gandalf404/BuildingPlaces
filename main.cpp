#include "partslistwidget.h"

#include <QApplication>

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    PartsListWidget w;
    w.show();
    return a.exec();
}
