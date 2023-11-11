// ���������� ������ �����
#include "Color.h"

Color ReadColor(std::istream& in)
{
    std::string input;
    in.ignore();
    if (std::getline(in, input))
    {
        Color mycolor = SetColor(input);
        return mycolor;
    }
}
Color SetColor(const std::string& fractional2)
{
    Color MyColor;
    if (fractional2 == "red")
        MyColor = Color::red;
    else if (fractional2 == "green")
        MyColor = Color::green;
    else if (fractional2 == "blue")
        MyColor = Color::blue;

    return Color::red;
}
void PrintColor(Color color, std::ostream& out)
{
    switch (color)
    {
    case Color::red:
        std::cout << "�������" << std::endl;
        break;
    case Color::green:
        std::cout << "������" << std::endl;
        break;
    case Color::blue:
        std::cout << "�������" << std::endl;
        break;
    }

}