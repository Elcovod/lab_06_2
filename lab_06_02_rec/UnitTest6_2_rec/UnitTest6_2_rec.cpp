#include "pch.h"
#include "CppUnitTest.h"
#include "F:\Project\lab_06_02_rec\lab_06_02_rec\lab_06_02_rec.cpp"

using namespace Microsoft::VisualStudio::CppUnitTestFramework;

namespace UnitTest_RecursiveMinMax
{
    TEST_CLASS(RecursiveMinMaxTests)
    {
    public:

        TEST_METHOD(Test_FindMinNum_Recursive)
        {
            const int SIZE = 5;
            int arr[SIZE] = { 10, 5, 20, 2, 15 };

            int initial_min_seed = 30;

            int expected_min = 2;

            int actual_min = findMinNum(arr, SIZE, initial_min_seed, 0);

            Assert::AreEqual(expected_min, actual_min, L"Рекурсивний findMinNum знаходить невірне мінімальне значення.");
        }

        TEST_METHOD(Test_FindMaxNum_Recursive)
        {
            const int SIZE = 5;
            int arr[SIZE] = { 10, 5, 20, 2, 15 };

            int initial_max_seed = 1;

            int expected_max = 20;

            int actual_max = findMaxNum(arr, SIZE, initial_max_seed, 0);

            Assert::AreEqual(expected_max, actual_max, L"Рекурсивний findMaxNum знаходить невірне максимальне значення.");
        }
    };
}