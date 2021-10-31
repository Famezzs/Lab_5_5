#include "pch.h"
#include "CppUnitTest.h"
#include "C:\Users\Home\source\repos\Lab_5_5\Lab_5_5\Lab_5_5.cpp"

using namespace Microsoft::VisualStudio::CppUnitTestFramework;

namespace UnitTest55I
{
	TEST_CLASS(UnitTest55I)
	{
	public:
		
		TEST_METHOD(TestMethod1)
		{
			int depth = 0;
			double t = RecPow(0.5, -2, 1, depth);
			Assert::AreEqual(t, 4.);

		}
	};
}
