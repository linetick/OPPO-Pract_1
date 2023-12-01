#include "pch.h"
#include "CppUnitTest.h"
#include "..\123\Coordinate.h"
#include "..\123\Color.h"
#include <sstream>
#include <iostream>
#include <utility>
#include "..\123\Point.h"
#include <vector>
#include"..\123\Point.cpp"
#include "..\123\Color.cpp"
#include "..\123\Coordinate.cpp"

using namespace Microsoft::VisualStudio::CppUnitTestFramework;

namespace UnitTest
{
	TEST_CLASS(UnitTest)
	{
	public:
		TEST_METHOD(ValidFormatCoordinate)
		{
			std::vector<std::string> Cases
			{
				"23.23 23.23",
				"23.23 23.23",
				"42.21 321.312"
			};
			for (int i = 0; i < Cases.size(); i++)
			{
				bool result = Coordinate::validateCoordinates(Cases[i]);
				Assert::IsTrue(result);
			}
		}
		TEST_METHOD(InvalidFormatCoordinate)
		{
			std::vector<std::string> Cases
			{
				"asd.213 ds.1231",
				"312 12321. 3123.3121"

			};
			for (int i = 0; i < Cases.size(); i++)
			{
				try
				{
					Coordinate::InvalidCoordinate(Cases[i]);
					Assert::Fail();
				}
				catch (std::runtime_error& e)
				{
					return;
				}
			}

		}
		TEST_METHOD(ValidColor)
		{
				std::istringstream input("red\n");
				Color color = ReadColor(input);
				Assert::AreEqual(static_cast<int>(Color::red), static_cast<int>(color));

				input.str("green\n");
				Color color2 = ReadColor(input);

				input.str("blue\n");
				Color color3 = ReadColor(input);
		}
		TEST_METHOD(InValidColor)
		{
			std::vector<std::string> cases
			{
				"redd",
				"noblue",
				"blue1"
			};
			for (const auto& str : cases) {

				std::istringstream input(str);
				try
				{
					Color color = ReadColor(input);
					
				}
				catch (const std::runtime_error& error)
				{
					return;
				}
			}
		}
		TEST_METHOD(InvalidTestPoint)
		{
			std::vector<std::string> cases
			{
				"1231 13123.1 3213 1 fadasd",
				"aaad 131 vdvs a1",
				"da312 das 123"
			};
			for(int i = 0; i < cases.size(); i++)
			{
				std::istringstream input(cases[i]);
				try
				{
					Point::create(input);
					throw std::runtime_error("Ошибка выполнения");
				}
				catch (const std::runtime_error& e)
				{
					std::cerr << "Сообщение ошибки: " << e.what() << std::endl;
				}
			}

		}
		TEST_METHOD(ValidTestPoint)
		{
				std::istringstream input("4.56 123.312 red");
				Point point = Point::create(input);
				Assert::AreEqual(static_cast<int>(Color::red), static_cast<int>(point.color));
				Assert::AreEqual(4.56, point.coordinate.a);
				Assert::AreEqual(123.312, point.coordinate.b);
		}
	};
}
