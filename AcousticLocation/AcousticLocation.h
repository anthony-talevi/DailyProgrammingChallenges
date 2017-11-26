#ifndef ACOUSTICLOCATION_H
#define ACOUSTICLOCATION_H

#include "Station.h"
#include "Location.h"


class AcousticLocation{
    Station baseA;
    Station baseB;
    public:
        AcousticLocation(Station, Station);
        Location CalcAircraftLocation(float, float);
};

#endif
