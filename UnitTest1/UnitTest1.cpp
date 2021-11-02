#include "pch.h"
#include "CppUnitTest.h"
#include "../Lab_6.3 rekur/Source.cpp"

using namespace Microsoft::VisualStudio::CppUnitTestFramework;

namespace UnitTest1
{
	TEST_CLASS(UnitTest1)
	{
	public:
		
		TEST_METHOD(TestMethod1)
		{
			int actual;
			int expected = 5;
			int a[] = { 5, 3 };
			int i = 0;
			int max = a[0];
			if (a[i] < max)
				max = a[i];
			actual = max;
			Assert::AreEqual(actual, expected);
		}
	};
}
