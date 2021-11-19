#include "pch.h"
#include "CppUnitTest.h"
#include "../Lab_7.1/7.1.cpp"

using namespace Microsoft::VisualStudio::CppUnitTestFramework;

namespace UnitTest1
{
	TEST_CLASS(UnitTest1)
	{
	public:
		
		TEST_METHOD(TestMethod1)
		{
			int s;

			s=Calc(s, rowCount, colCount, Sum, k);
				Assert::AreEqual(1445, Sum);
		}
	};
}
