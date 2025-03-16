#ifndef INVOICE_H
#define INVOICE_H

#include <QDate>

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
    int getInvoiceId() const;
    void setInvoiceId(int invoiceId);
    QDate getInvoiceDate() const;
    void setInvoiceDate(const QDate& invoiceDate);
    int getPartId() const;
    void setPartId(int partId);
    int getKitId() const;
    void setKitId(int kitId);
    QString getInvoiceStatus() const;
    void setInvoiceStatus(const QString& invoiceStatus);
    int getPartCount() const;
    void setPartCount(int partCount);
    int getKitCount() const;
    void setKitCount(int kitCount);

    Invoice();
    Invoice(int invoiceId, const QDate& invoiceDate, int partId, int kitId, const QString& invoiceStatus,
            int partCount, int kitCount);
};
#endif //INVOICE_H
