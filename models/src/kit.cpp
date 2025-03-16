#include "../include/kit.h"

int Kit::getKitId() const { return kitId; }

void Kit::setKitId(int kitId) { this->kitId = kitId; }

QString Kit::getKitName() const { return kitName; }

void Kit::setKitName(const QString& kitName) { this->kitName = kitName; }

int Kit::getKitCount() const { return kitCount; }

void Kit::setKitCount(int kitCount) { this->kitCount = kitCount; }

QDate Kit::getKitFinishDate() const { return kitFinishDate; }

void Kit::setKitFinishDate(const QDate& kitFinishDate) { this->kitFinishDate = kitFinishDate; }

Kit::Kit(int kitId, const QString& kitName, int kitCount, const QDate& kitFinishDate)
    : kitId(kitId)
    , kitName(kitName)
    , kitCount(kitCount)
    , kitFinishDate(kitFinishDate)
{}
