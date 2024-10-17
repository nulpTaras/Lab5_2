



#include "pch.h"
#include "CppUnitTest.h"
#include "../Lab5_2/Lab5_2.cpp"


using namespace Microsoft::VisualStudio::CppUnitTestFramework;

namespace UnitTest1
{
	TEST_CLASS(UnitTest1)
	{
	public:

		TEST_METHOD(Test_S_Function)
		{
			double x = 1.0;
			double eps = 0.001;
			double sum = 0;
			int n = 0;

			double eS = exp(x * x);
			double rS = S(x, eps, n, sum);
			Assert::AreEqual(eS, rS, 0.01);
		}
		TEST_METHOD(Test_A_Function)
		{

			double x = 2.0;
			int n = 2;
			double a = 1.0;  

			double eA = a * (x * x) / n;
			double rA = A(x, n, a);
			Assert::AreEqual(eA, rA, 0.001);
		}
	};
}
