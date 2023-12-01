#include "Point.h"
#include "Color.h"
#include "Coordinate.h"
#include "PrintInfo.h"

void ReadFile(const std::string& text)
{
    std::ifstream in("text.txt");
    std::vector<Point> arr = read_points(in);
    PrintInfo(arr);
}

void PrintInfo(const std::vector<Point>& arr)
{
    for (const Point& ar : arr)
    {
        ar.print(std::cout);
    }
}