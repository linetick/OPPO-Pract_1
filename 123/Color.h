#pragma once
#include <iostream>
#include <vector>
#include <fstream>
#include <string>

enum class Color
{
    green,
    red,
    blue
};
Color ReadColor(std::istream& in);
Color SetColor(const std::string& fractional2);
void PrintColor(Color color, std::ostream& out);