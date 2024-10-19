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
		TEST_METHOD(TestLength)
		{
			int Length = 50;

			setLength(-1, &Length);

			Assert::AreEqual(50, Length);

			setLength(100, &Length);

			Assert::AreEqual(50, Length);

			setLength(60, &Length);

			Assert::AreEqual(60, Length);

		}
		TEST_METHOD(TestWidth)
		{
			int Width = 50;

			setLength(-1, &Width);

			Assert::AreEqual(50, Width);

			setLength(100, &Width);

			Assert::AreEqual(50, Width);

			setLength(60, &Width);

			Assert::AreEqual(60, Width);

		}
	};
}
