#include "../include/kit.h"

int Kit::getKitId() { return this->kitId; }

void Kit::setKitId(int& kitId) { this->kitId = kitId; }

QString Kit::getKitName() { return this->kitName; }

void Kit::setKitName(QString& kitName) { this->kitName = kitName; }

int Kit::getKitCount() { return this->kitCount; }

void Kit::setKitCount(int& kitCount) { this->kitCount = kitCount; }

QDate Kit::getKitFinishDate() { return this->kitFinishDate; }

void Kit::setKitFinishDate(QDate& kitFinishDate) { this->kitFinishDate = kitFinishDate; }

Kit::Kit(int& kitId, QString& kitName, int& kitCount, QDate& kitFinishDate)
    : kitId(kitId)
    , kitName(kitName)
    , kitCount(kitCount)
    , kitFinishDate(kitFinishDate)
{}
