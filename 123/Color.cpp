// Библиотека выбора цвета
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

    throw std::runtime_error("Ошибка чтении цвета");
}
Color SetColor(const std::string& fractional2)
{
    Color MyColor{};
    if (fractional2 == "red")
        MyColor = Color::red;
    else if (fractional2 == "green")
        MyColor = Color::green;
    else if (fractional2 == "blue")
        MyColor = Color::blue;
    return MyColor;
    throw std::runtime_error("Ошибка записи цвета");
}
void PrintColor(Color color, std::ostream& out)
{
    switch (color)
    {
    case Color::red:
        std::cout << "Красный" << std::endl;
        break;
    case Color::green:
        std::cout << "Зелёный" << std::endl;
        break;
    case Color::blue:
        std::cout << "Голубой" << std::endl;
        break;

    default:
        std::cerr << "Ошибка: Неизвестный цвет" << std::endl;
        break;
    }
}