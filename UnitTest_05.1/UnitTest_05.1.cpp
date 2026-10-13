#include "pch.h"
#include "CppUnitTest.h"
#include "../PR_05.1.cpp" // Підключаю мій файл проекту

using namespace Microsoft::VisualStudio::CppUnitTestFramework;

namespace UnitTest2
{
	TEST_CLASS(UnitTest2)
	{
	public:

		TEST_METHOD(TestMethod1)
		{
			// Вхідні дані: a = 0, b = 0, c = 2
			// Очікуваний результат: 0 * sin(0) + 0 * sin(0) + 2^2 = 4
			double a = 0, b = 0, c = 2;
			double expected = 4.0;

			double actual = f(a, b, c);

			// Перевіряємо відповідність з точністю 0.0001
			Assert::AreEqual(expected, actual, 0.0001);
		}
	};
}