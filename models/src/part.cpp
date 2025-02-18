#include "../include/part.h"

int Part::getPartId() { return this->partId; }

void Part::setPartId(int& partId) { this->partId = partId; }

int Part::getKitId() { return this->kitId; }

void Part::setKitId(int& kitId) { this->kitId = kitId; }

QString Part::getPartName() { return this->partName; }

void Part::setPartName(QString& partName) { this->partName; }

int Part::getPartCount() { return this->partCount; }

void Part::setPartCount(int& partCount) { this->partCount; }

QDate Part::getPartFinishDate() { return this->partFinishDate; }

void Part::setPartFinishDate(QDate& partFinishDate) { this->partFinishDate = partFinishDate; }

Part::Part(int& partId, int& kitId, QString& partName, int& partCount, QDate& partFinishDate)
    : partId(partId)
    , kitId(kitId)
    , partName(partName)
    , partCount(partCount)
    , partFinishDate(partFinishDate)
{}
