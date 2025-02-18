#ifndef KIT_H
#define KIT_H

#include <QDate>
#include <optional>

class Kit
{
private:
    int kitId;
    QString kitName;
    int kitCount;
    QDate kitFinishDate;
public:
    int getKitId();
    void setKitId(int& kitId);
    QString getKitName();
    void setKitName(QString& kitName);
    int getKitCount();
    void setKitCount(int& kitCount);
    QDate getKitFinishDate();
    void setKitFinishDate(QDate& kitFinishDate);

    Kit(std::optional<Kit&> kit);
    Kit(int& kitId, QString& kitName, int& kitCount, QDate& kitFinishDate);
};
#endif //KIT_H
