#include "../include/build_place.h"

int BuildPlace::getBuildPlaceId() { return this->buildPlaceId; }

void BuildPlace::setBuildPlaceId(int& buildPlaceId) { this->buildPlaceId = buildPlaceId; }

int BuildPlace::getPartId() { return this->partId; }

void BuildPlace::setPartId(int& partId) { this->partId = partId; }

int BuildPlace::getKitId() { this->kitId; }

void BuildPlace::setKitId(int& kitId) { this->kitId = kitId; }

BuildPlace::BuildPlace(int& buildPlaceId, int& partId, int& kitId)
    : buildPlaceId(buildPlaceId)
    , partId(partId)
    , kitId(kitId)
{}
