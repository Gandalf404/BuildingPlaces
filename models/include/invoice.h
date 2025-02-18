#ifndef INVOICE_H
#define INVOICE_H

#include <QDate>
#include <optional>

class Invoice
{
private:
    int invoiceId;
    QDate invoiceDate;
    int partId;
    int kitId;
    QString invoiceStatus;
    int partCount;
    int kitCount;
public:
    int getInvoiceId();
    void setInvoiceId(int& invoiceId);
    QDate getInvoiceDate();
    void setInvoiceDate(QDate& invoiceDate);
    int getPartId();
    void setPartId(int& partId);
    int getKitId();
    void setKitId(int& kitId);
    QString getInvoiceStatus();
    void setInvoiceStatus(QString& invoiceStatus);
    int getPartCount();
    void setPartCount(int& partCount);
    int getKitCount();
    void setKitCount(int& kitCount);

    Invoice(std::optional<Invoice&> invoice);
    Invoice(int& invoiceId, QDate& invoiceDate, int& partId, int& kitId, QString& invoiceStatus,
            int& partCount, int& kitCount);
};
#endif //INVOICE_H
