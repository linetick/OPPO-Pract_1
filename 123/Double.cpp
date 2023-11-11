#include "Double.h"

Double Double::ReadCoordinate(std::istream& in)
{
    double a, b;
    if (in >> a >> b)
    {
        return Double(a, b);
    }
}
