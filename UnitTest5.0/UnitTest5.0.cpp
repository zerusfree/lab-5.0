#include "pch.h"
#include "CppUnitTest.h"
#include "../Source.cpp"

using namespace Microsoft::VisualStudio::CppUnitTestFramework;

namespace UnitTest50
{
	TEST_CLASS(UnitTest50)
	{
	public:
		
		TEST_METHOD(TestMethod1)
		{
			double t;
			t = f(1.);
			Assert::AreEqual(t, 2, 7080734);
		}
	};
}
