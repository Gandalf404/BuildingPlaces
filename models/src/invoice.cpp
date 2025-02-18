#include "../include/invoice.h"

int Invoice::getInvoiceId() { return this->invoiceId; }

void Invoice::setInvoiceId(int& invoiceId) { this->invoiceId = invoiceId; }

QDate Invoice::getInvoiceDate() { return this->invoiceDate; }

void Invoice::setInvoiceDate(QDate& invoiceDate) { this->invoiceDate = invoiceDate; }

int Invoice::getPartId() { return this->partId; }

void Invoice::setPartId(int& partId) { this->partId = partId; }

int Invoice::getKitId() { return this->kitId; }

void Invoice::setKitId(int& kitId) { this->kitId = kitId; }

QString Invoice::getInvoiceStatus() { return this->invoiceStatus; }

void Invoice::setInvoiceStatus(QString& invoiceStatus) { this->invoiceStatus = invoiceStatus; }

int Invoice::getPartCount() { return this->partCount; }

void Invoice::setPartCount(int& partCount) { this->partCount = partCount; }

int Invoice::getKitCount() { return this->kitCount; }

void Invoice::setKitCount(int& kitCount) { this->kitCount = kitCount; }

Invoice::Invoice(int& invoiceId, QDate& invoiceDate, int& partId, int& kitId, QString& invoiceStatus,
                 int& partCount, int& kitCount)
    : invoiceId(invoiceId)
    , invoiceDate(invoiceDate)
    , partId(partId)
    , kitId(kitId)
    , invoiceStatus(invoiceStatus)
    , partCount(partCount)
    , kitCount(kitCount)
{}
