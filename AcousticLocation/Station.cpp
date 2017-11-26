//Make into interface
#ifndef  STATION_CPP
#define STATION_CPP
#include "Station.h"

Station::Station(Location _loc): base(_loc), detectedObject() {}

Location Station::transmitLocation(){return base;}

float Station::transmitDetectAngle(){return detectedObject;}

void Station::listen(){
    return;
}
//So we can set it from the main class
void Station::listen(float angle){
    detectedObject = angle;
}

#endif
