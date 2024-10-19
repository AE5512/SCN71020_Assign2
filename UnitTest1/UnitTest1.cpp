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
		
		TEST_METHOD(TestMethod1)
		{



		}
	};
}
