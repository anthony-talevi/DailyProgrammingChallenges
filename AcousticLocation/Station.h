#ifndef STATION_H
#define STATION_H

#include "Location.h"

class Station{
    float detectedObject;
    Location base;

    public:
        Station(Location);
        Location transmitLocation();
        float transmitDetectAngle();
        void listen();
        void listen(float);
};
#endif
