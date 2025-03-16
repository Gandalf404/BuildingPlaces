#ifndef KIT_H
#define KIT_H

#include <QDate>

class Kit
{
private:
    int kitId;
    QString kitName;
    int kitCount;
    QDate kitFinishDate;
public:
    int getKitId() const;
    void setKitId(int kitId);
    QString getKitName() const;
    void setKitName(const QString& kitName);
    int getKitCount() const;
    void setKitCount(int kitCount);
    QDate getKitFinishDate() const;
    void setKitFinishDate(const QDate& kitFinishDate);

    Kit();
    Kit(int kitId, const QString& kitName, int kitCount, const QDate& kitFinishDate);
};
#endif //KIT_H
