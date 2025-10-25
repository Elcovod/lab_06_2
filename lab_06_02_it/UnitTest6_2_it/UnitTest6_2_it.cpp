#include "pch.h"
#include "CppUnitTest.h"
#include "F:\Project\lab_06_02_it\lab_06_02_it\lab_06_02_it.cpp" 

using namespace Microsoft::VisualStudio::CppUnitTestFramework;

namespace UnitTest_MinMax
{
    TEST_CLASS(MinMaxFunctionTests)
    {
    public:

        TEST_METHOD(Test_FindMinNum_CorrectlyFindsMin)
        {
            const int SIZE = 5;
            int arr[SIZE] = { 10, 5, 20, 2, 15 };

            int initial_max_value = 30;

            int expected_min = 2;

            int actual_min = findMinNum(arr, SIZE, initial_max_value);

            Assert::AreEqual(expected_min, actual_min, L"Функція findMinNum знаходить невірне мінімальне значення.");
        }

        TEST_METHOD(Test_FindMaxNum_CorrectlyFindsMax)
        {
            const int SIZE = 5;
            int arr[SIZE] = { 10, 5, 20, 2, 15 };

            int initial_min_value = 1;

            int expected_max = 20;

            int actual_max = findMaxNum(arr, SIZE, initial_min_value);

            Assert::AreEqual(expected_max, actual_max, L"Функція findMaxNum знаходить невірне максимальне значення.");
        }
    };
}