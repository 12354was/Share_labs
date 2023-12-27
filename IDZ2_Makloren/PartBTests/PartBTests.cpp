#include "pch.h"
#include "CppUnitTest.h"
#include <cmath>
#include "..\IDZ2_Makloren\IDZ2_Makloren.h"

using namespace Microsoft::VisualStudio::CppUnitTestFramework;

namespace PartBTests
{
	TEST_CLASS(PartBTests)
	{
	public:
		
		TEST_METHOD(TestMethod1)
		{

			int n = 30;
			double start = -4;
			double end = 4;
			double step = 1;
			double answer;

			for (double i = start; i <= end; i += step)
			{
				answer = exp(i);
				Assert::IsTrue(abs(mclaurinSeries(i, n) - answer) < 10e-6);
			}


		}

		TEST_METHOD(TestMethod2) // дробный шаг
		{
			int n = 30;
			double start = 0;
			double end = 6;
			double step = 0.5;
			double answer;

			for (double i = start; i <= end; i += step)
			{
				answer = exp(i);
				Assert::IsTrue(abs(mclaurinSeries(i, n) - answer) < 10e-6);
			}
		}

		TEST_METHOD(TestMethod3) // очень большой интервал
		{
			int n = 30;
			double start = 0;
			double end = 600;
			double step = 1;
			double answer;

			for (double i = start; i <= end; i += step)
			{
				answer = exp(i);
				Assert::IsTrue(abs(mclaurinSeries(i, n) - answer) < 10e-6);
			}
		}
	};
}
