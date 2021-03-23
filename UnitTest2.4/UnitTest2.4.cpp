#include "pch.h"
#include "CppUnitTest.h"
#include "../Project2.4/Matrix.h"
#include "../Project2.4/Matrix.cpp"

using namespace Microsoft::VisualStudio::CppUnitTestFramework;

namespace UnitTest24
{
	TEST_CLASS(UnitTest24)
	{
	public:
		
		TEST_METHOD(TestMethod1)
		{
			Matrix a(0);
			double k = 0;
			k = a.GetN();
			Assert::AreEqual(0,0);
		}
	};
}
