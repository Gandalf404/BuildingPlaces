#ifndef BUILD_PLACE_H
#define BUILD_PLACE_H

#include <optional>

class BuildPlace
{
private:
    int buildPlaceId;
    int partId;
    int kitId;
public:
    int getBuildPlaceId();
    void setBuildPlaceId(int& buildPlaceId);
    int getPartId();
    void setPartId(int& partId);
    int getKitId();
    void setKitId(int& kitId);

    BuildPlace(std::optional<BuildPlace&> buildPlace);
    BuildPlace(int& buildPlaceId, int& partId, int& kitId);
};
#endif //BUILD_PLACE_H
