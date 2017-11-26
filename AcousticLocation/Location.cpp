#ifndef LOCATION_CPP
#define LOCATION_CPP
#include "Location.h"

using std::ostream;

Location::Location(float _x, float _y): d_x(_x), d_y(_y){};

float Location::getX() const{
    return d_x;
}

float Location::getY() const{
    return d_y;
}

ostream& operator<<(std::ostream &output, const Location &lc){
    output << "Aircraft Detected at " << lc.getX() << ", " << lc.getY() << std::endl;
    return output;
}
#endif
