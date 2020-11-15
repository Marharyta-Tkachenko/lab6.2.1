#include "pch.h"
#include "CppUnitTest.h"
#include "../Project6.2.1/Source.cpp"

using namespace Microsoft::VisualStudio::CppUnitTestFramework;

namespace UnitTest1
{
	TEST_CLASS(UnitTest1)
	{
	public:
		
		TEST_METHOD(TestMethod1)
		{
			int t;
			int a[8] = { 1,10,13,-1,-2,11,6,1 };
			t = Inverse(a, 8);
			Assert::AreEqual(t, 0);
		}
	};
}
