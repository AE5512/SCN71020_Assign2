#include "pch.h"
#include "CppUnitTest.h"

// Tell the compiler these are external and written in C

extern "C" void setLength(int input, int* length);
extern "C" void setWidth(int input, int* width);
extern "C" int getPerimeter(int* length, int* width);
extern "C" int getArea(int* length, int* width);
extern "C" void printWelcomeMenu();
extern "C" void printOptions();
extern "C" int getIntInput(char message[]);

using namespace Microsoft::VisualStudio::CppUnitTestFramework;

namespace UnitTest1
{
	TEST_CLASS(UnitTest1)
	{
	public:
		// Question one
		TEST_METHOD(GetArea)
		{
			// Had to make them variables to get this to work since it was expecting pointers not constants
			int a = 2;  
			int b = 13;
			
			int Result = getPerimeter(&a, &b);

			Assert::AreEqual(52, Result);

		}
		TEST_METHOD(GetPerimeter)
		{
			// Had to make them variables to get this to work since it was expecting pointers not constants
			int a = 2;
			int b = 13;

			int Result = getArea(&a, &b);

			Assert::AreEqual(26, Result);

		}

		// Question 2
	};
}
