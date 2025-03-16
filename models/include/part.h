#ifndef PART_H
#define PART_H

#include <QDate>

class Part
{
private:
    int partId;
    int kitId;
    QString partName;
    int partCount;
    QDate partFinishDate;
public:
    int getPartId() const;
    void setPartId(int partId);
    int getKitId() const;
    void setKitId(int kitId);
    QString getPartName() const;
    void setPartName(const QString& partName);
    int getPartCount() const;
    void setPartCount(int partCount);
    QDate getPartFinishDate() const;
    void setPartFinishDate(const QDate& partFinishDate);

    Part();
    Part(int partId, int kitId, const QString& partName, int partCount, const QDate& partFinishDate);
};
#endif //PART_H
