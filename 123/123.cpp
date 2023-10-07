#include<iostream>
#include<vector>
#include<string>
#include <fstream>
using namespace std;
enum Color
{
	green, red, blue
};

struct Double
{
	double a;
	double b;
	Double(double a, double b) : a(a) , b(b){}
};

struct Main
{
	Color color;
	Double coordinate;
	Main(Color c, const Double& p)
		: color(c), coordinate(p) {}
};

int main()
{
	setlocale(LC_ALL, "Russian");
	ifstream in("text.txt");
	vector<Main> arr;
	double num;
	while(in >> num)
	{
		double a = num;
		if (in >> num)
		{
			 double b = num;
			 string input;
			 in.ignore();
			if (getline(in, input))
			{
				string fractional2 = input;
				Color MyColor;
				if (fractional2 == "red") MyColor = red;
				else if (fractional2 == "green") MyColor = green;
				else if (fractional2 == "blue") MyColor = blue;
				arr.emplace_back(MyColor, Double(a, b));
				in.ignore();
			}
		}
	}
	for (Main& ar : arr) 
	{
		cout << "Координаты: " << ar.coordinate.a << " " << ar.coordinate.b<< endl;
		cout << "Цвет: ";
		switch (ar.color) {
		case red:
			cout << "Красный" << endl;
			break;
		case green:
			cout << "Зелёный" << endl;
			break;
		case blue:
			cout << "Голубой" << endl;
			break;
		}
	}
}