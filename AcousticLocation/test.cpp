#include <iostream>
#include "AcousticLocation.cpp"

int main(){

    float xCoordA, yCoordA, xCoordB, yCoordB, angleA, angleB;

    std::cout << "Enter the coordinates of Base A" << std::endl;
    std::cout << "X Coordinate: ";
    std::cin >> xCoordA;
    std::cout << "Y Coordinate: ";
    std::cin >> yCoordA;
    std::cout << "Angle of maximum amplification: ";
    std::cin >> angleA;
    std::cout << "Enter the coordinates of Base B" << std::endl;
    std::cout << "X Coordinate: ";
    std::cin >> xCoordB;
    std::cout << "Y Coordinate: ";
    std::cin >> yCoordB;
    std::cout << "Angle of maximum amplification: ";
    std::cin >> angleB;

    Station a(Location(xCoordA, yCoordA));
    Station b(Location(xCoordB, yCoordB));

    AcousticLocation oper(a, b);
    std::cout << oper.CalcAircraftLocation(angleA, angleB);

    return 0;
}
