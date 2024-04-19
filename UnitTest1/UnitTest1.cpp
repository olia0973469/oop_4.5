#include "pch.h"
#include "CppUnitTest.h"
#include "../oop_4.5/Function.h"
#include "../oop_4.5/Function.cpp"
#include "../oop_4.5/Ellipse.h"
#include "../oop_4.5/Ellipse.cpp"

using namespace Microsoft::VisualStudio::CppUnitTestFramework;

namespace UnitTest1
{
	TEST_CLASS(UnitTest1)
	{
	public:

		TEST_METHOD(TestMethod1)
		{
			double a = 2.0;
			double b = 3.0;
			double x = 4.0;
			double expectedY = b * sqrt((x * x) / (a * a));

			Ellipse ellipse(a, b);
			double result = ellipse.count(4);
			Assert::AreEqual(expectedY, result);
		}
	};
}
