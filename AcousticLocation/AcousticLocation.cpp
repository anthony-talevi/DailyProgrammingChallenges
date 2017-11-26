#ifndef ACOUSTICLOCATION_CPP
#define ACOUSTICLOCATION_CPP
#include "AcousticLocation.h"
#include "Station.cpp"
#include "Location.cpp"
#include <cmath>
#define PI 3.141592654

using std::tan;

AcousticLocation::AcousticLocation(Station a, Station b): baseA(a), baseB(b){}

Location AcousticLocation::CalcAircraftLocation(float angA, float angB){
    //only being used for now while we have to manually input angles
    baseA.listen(angA);
    baseB.listen(angB);

    //Get locations
    Location locA = baseA.transmitLocation();
    Location locB = baseB.transmitLocation();

    //Get angles
    float angleA = baseA.transmitDetectAngle()*PI/180;
    float angleB = baseB.transmitDetectAngle()*PI/180;

    //Get tans
    float tanA = tan(1.5708-angleA);
    float tanB = tan(1.5708-angleB);

    float xpos = (tanA*locA.getX() - tanB*locB.getX() + locB.getY() - locA.getY())/(tanA - tanB);

    float ypos = tanA*xpos+ locA.getY();
    //if(angleA < 180){
    //    xpos = xpos*-1;
    //}

    Location aircraft(xpos, ypos);
    return aircraft;

}
#endif
