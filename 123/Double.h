#pragma once
#include <iostream>
#include <vector>
#include <fstream>
#include <string>
//��������� ����� � ��������� �������
struct Double
{
    double a;
    double b;
    Double(double a, double b) : a(a), b(b) {}
    static Double ReadCoordinate(std::istream& in);
}; 



