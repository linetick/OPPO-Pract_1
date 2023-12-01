#pragma once

#include <istream>

#include "Color.h"
#include "Coordinate.h"

struct Point
{
    Color color;
    Coordinate coordinate;
    Point(Color c, const Coordinate& p) 
        : color(c), coordinate(p) {}

    static Point create(std::istream& in);
    void print(std::ostream& out) const;
};

std::vector<Point> read_points(std::istream& in);

