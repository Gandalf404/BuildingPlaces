#ifndef CONNECTION_H
#define CONNECTION_H

#include <QSqlDatabase>
#include <QFile>
#include <QMessageBox>

class Connection
{
private:
    QFile file;
    QList<QString> lines;
    QTextStream text;
    QSqlDatabase db;
public:
    bool connect();
    QSqlDatabase getDatabaseConnection();
};
#endif //CONNECTION_H
