#include "pch.h"
#include "CppUnitTest.h"
#include "../6.3/6.3.cpp"
using namespace Microsoft::VisualStudio::CppUnitTestFramework;

namespace UnitTest1
{
    TEST_CLASS(UnitTest1)
    {
    public:

        TEST_METHOD(TestSumArray)
        {
            int arr[] = { 1, 2, 3, 4, 5 };
            int expectedSum = 15;
            int actualSum = sumArray(arr, 5);
            Assert::IsTrue(expectedSum == actualSum);
        }

        TEST_METHOD(TestFindMax)
        {
            int arr[] = { 1, 3, 5, 2, 4 };
            int expectedMax = 5;
            int actualMax = findMax(arr, 5);
            Assert::IsTrue(expectedMax == actualMax);
        }

        TEST_METHOD(TestIncrementArrayElements)
        {
            int arr[] = { 1, 2, 3 };
            int expectedArr[] = { 2, 3, 4 };
            incrementArrayElements(arr, 3);
            for (int i = 0; i < 3; i++) {
                Assert::IsTrue(expectedArr[i] == arr[i]);
            }
        }

        TEST_METHOD(TestInputArray)
        {
        }
    };
}
