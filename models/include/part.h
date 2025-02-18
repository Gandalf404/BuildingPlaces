#ifndef PART_H
#define PART_H

#include <QDate>
#include <optional>

class Part
{
private:
    int partId;
    int kitId;
    QString partName;
    int partCount;
    QDate partFinishDate;
public:
    int getPartId();
    void setPartId(int& partId);
    int getKitId();
    void setKitId(int& kitId);
    QString getPartName();
    void setPartName(QString& partName);
    int getPartCount();
    void setPartCount(int& partCount);
    QDate getPartFinishDate();
    void setPartFinishDate(QDate& partFinishDate);

    Part(std::optional<Part&> part);
    Part(int& partId, int& kitId, QString& partName, int& partCount, QDate& partFinishDate);
};
#endif //PART_H
