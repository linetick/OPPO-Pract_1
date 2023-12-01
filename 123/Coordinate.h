#pragma once
#include <iostream>
#include <vector>
#include <fstream>
#include <string>
//Структура чисел с плавающей запятой
struct Coordinate
{
    double a;
    double b;
    Coordinate(double a, double b) : a(a), b(b) {}
    static Coordinate ReadCoordinate(std::istream& in);
    static bool validateCoordinates(const std::string& coordinates);
    static void InvalidCoordinate(const std::string& coordinates);
}; 



