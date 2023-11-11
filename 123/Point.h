#pragma once

#include <istream>

#include "Color.h"
#include "Double.h"

struct Point
{
    Color color;
    Double coordinate;
    Point(Color c, const Double& p) 
        : color(c), coordinate(p) {}

    static Point create(std::istream& in);
    void print(std::ostream& out) const;
};

std::vector<Point> read_points(std::istream& in);

