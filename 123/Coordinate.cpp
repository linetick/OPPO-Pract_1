#include "Coordinate.h"
#include <sstream>

Coordinate Coordinate::ReadCoordinate(std::istream& in)
{
    double a, b;
    if (in >> a >> b)
    {
        return Coordinate(a, b);
    }
    throw std::runtime_error("Ошибка чтении координат");
}

bool Coordinate::validateCoordinates(const std::string& coordinates) {
    std::istringstream iss(coordinates);
    double x, y;
    iss >> x >> y;
    if (iss.fail() || x < -90.0 || x > 90.0 || y < -180.0 || y > 180.0) {
        return false; 
    }
    return true; 
}
void Coordinate::InvalidCoordinate(const std::string& coordinates)
{
    std::istringstream iss(coordinates);
    if (iss.fail())
    {
        throw std::runtime_error("Ошибка!");
    }
    validateCoordinates(coordinates);
}