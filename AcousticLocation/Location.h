#ifndef LOCATION_H
#define LOCATION_H
#include <iostream>
#include <string>

class Location{
    float d_x;
    float d_y;

    public:
        Location(float _x, float _y);
        friend std::ostream& operator<<(std::ostream &output, const Location &lc);
        float getX() const;
        float getY() const;


};
#endif
