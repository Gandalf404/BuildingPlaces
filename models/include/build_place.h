#ifndef BUILD_PLACE_H
#define BUILD_PLACE_H

class BuildPlace
{
private:
    int buildPlaceId;
    int partId;
    int kitId;
public:
    int getBuildPlaceId() const;
    void setBuildPlaceId(int buildPlaceId);
    int getPartId() const;
    void setPartId(int partId);
    int getKitId() const;
    void setKitId(int kitId);

    BuildPlace();
    BuildPlace(int buildPlaceId, int partId, int kitId);
};
#endif //BUILD_PLACE_H
