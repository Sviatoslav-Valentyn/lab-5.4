#include "pch.h"
#include "CppUnitTest.h"
#include "../lab 5.4/Source.cpp"

using namespace Microsoft::VisualStudio::CppUnitTestFramework;

namespace UnitTest1
{
	TEST_CLASS(UnitTest1)
	{
	public:
		
		TEST_METHOD(TestMethod1)
		{
			double r = P0(19);
			Assert::AreEqual(1., r);
		}
	};
}
