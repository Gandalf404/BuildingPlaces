#include "../include/connection.h"

bool Connection::connect()
{
    file.setFileName("../../conninfo.txt");
    if (!file.open(QIODevice::ReadOnly | QIODevice::Text)) { return false; }
    text.setDevice(&file);
    while (!text.atEnd()) { lines.append(text.readLine()); }\
    file.close();
    db.addDatabase(lines[0]);
    db.setHostName(lines[1]);
    db.setDatabaseName(lines[2]);
    db.setUserName(lines[3]);
    db.setPassword(lines[4]);
    if (!db.open()) { return false; }
    return true;
}

QSqlDatabase Connection::getDatabaseConnection() { if(db.isOpen()) return db; }
