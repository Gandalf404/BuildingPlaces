#include "../include/part.h"

int Part::getPartId() const { return partId; }

void Part::setPartId(int partId) { this->partId = partId; }

int Part::getKitId() const { return kitId; }

void Part::setKitId(int kitId) { this->kitId = kitId; }

QString Part::getPartName() const { return partName; }

void Part::setPartName(const QString& partName) { this->partName = partName; }

int Part::getPartCount() const { return partCount; }

void Part::setPartCount(int partCount) { this->partCount = partCount; }

QDate Part::getPartFinishDate() const { return partFinishDate; }

void Part::setPartFinishDate(const QDate& partFinishDate) { this->partFinishDate = partFinishDate; }

Part::Part() {}

Part::Part(int partId, int kitId, const QString& partName, int partCount, const QDate& partFinishDate)
    : partId(partId)
    , kitId(kitId)
    , partName(partName)
    , partCount(partCount)
    , partFinishDate(partFinishDate)
{}
