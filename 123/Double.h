#pragma once
#include <iostream>
#include <vector>
#include <fstream>
#include <string>
//Структура чисел с плавающей запятой
struct Double
{
    double a;
    double b;
    Double(double a, double b) : a(a), b(b) {}
    static Double ReadCoordinate(std::istream& in);
}; 



