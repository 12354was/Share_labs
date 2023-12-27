#include "pch.h"
#include "CppUnitTest.h"
#include <cmath>
#include "..\IDZ2_Makloren\IDZ2_Makloren.h"

using namespace Microsoft::VisualStudio::CppUnitTestFramework;

namespace TestsMthods
{
	TEST_CLASS(TestsMthods)
	{
	public:
		
		TEST_METHOD(TestMethod1) //дробное значение x
		{
			double x = 0.1;
			int n = 20;
			double answer = exp(x);

			Assert::IsTrue(abs(CaseA(x, n) - answer) < 10e-6);
		}

		TEST_METHOD(TestMethod2) //Большое значение x
		{
			double x = 30;
			int n = 20;
			double answer = exp(x);

			Assert::IsTrue(abs(CaseA(x, n) - answer) < 10e-6);
		}

		TEST_METHOD(TestMethod3) //отрицательное значение x
		{
			double x = -2;
			int n = 20;
			double answer = exp(x);

			Assert::IsTrue(abs(CaseA(x, n) - answer) < 10e-6);
		}

		TEST_METHOD(TestMethod4) //малое значение n
		{
			double x = 4;
			int n = 5;
			double answer = exp(x);

			Assert::IsTrue(abs(CaseA(x, n) - answer) < 10e-6);
		}

		TEST_METHOD(TestMethod5) //большое значение n
		{
			double x = 4;
			int n = 35;
			double answer = exp(x);

			Assert::IsTrue(abs(CaseA(x, n) - answer) < 10e-6);
		}


	};
}
