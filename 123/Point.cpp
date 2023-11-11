#include "Point.h"
#include "Color.h"

std::vector<Point> read_points(std::istream& in)
{
    std::vector<Point> arr;
    Color color;
    while (!in.eof())
    {
        arr.push_back(Point::create(in));
    }
    return arr;

}

Point Point::create(std::istream& in)
{
    Double coordinates = Double::ReadCoordinate(in);
    double a = coordinates.a;
    double b = coordinates.b;

    return Point(ReadColor(in), Double(a, b));
}

void Point::print(std::ostream& out) const
{
    std::cout << "Координаты: " << coordinate.a << " " << coordinate.b << std::endl;
    std::cout << "Цвет: ";
    PrintColor(color, std::cout);
}