#include "../include/invoice.h"

int Invoice::getInvoiceId() const { return invoiceId; }

void Invoice::setInvoiceId(int invoiceId) { this->invoiceId = invoiceId; }

QDate Invoice::getInvoiceDate() const { return invoiceDate; }

void Invoice::setInvoiceDate(const QDate& invoiceDate) { this->invoiceDate = invoiceDate; }

int Invoice::getPartId() const { return partId; }

void Invoice::setPartId(int partId) { this->partId = partId; }

int Invoice::getKitId() const { return kitId; }

void Invoice::setKitId(int kitId) { this->kitId = kitId; }

QString Invoice::getInvoiceStatus() const { return invoiceStatus; }

void Invoice::setInvoiceStatus(const QString& invoiceStatus) { this->invoiceStatus = invoiceStatus; }

int Invoice::getPartCount() const { return partCount; }

void Invoice::setPartCount(int partCount) { this->partCount = partCount; }

int Invoice::getKitCount() const { return kitCount; }

void Invoice::setKitCount(int kitCount) { this->kitCount = kitCount; }

Invoice::Invoice(int invoiceId, const QDate& invoiceDate, int partId, int kitId, const QString& invoiceStatus,
                 int partCount, int kitCount)
    : invoiceId(invoiceId)
    , invoiceDate(invoiceDate)
    , partId(partId)
    , kitId(kitId)
    , invoiceStatus(invoiceStatus)
    , partCount(partCount)
    , kitCount(kitCount)
{}
