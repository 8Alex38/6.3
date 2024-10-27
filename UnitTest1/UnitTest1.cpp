#include "pch.h"
#include "CppUnitTest.h"
#include "../6.3/6.3.cpp"
using namespace Microsoft::VisualStudio::CppUnitTestFramework;

namespace UnitTest1
{
    TEST_CLASS(SumOfOddElementsTest)
    {
    public:

        TEST_METHOD(TestEmptyVector)
        {
            vector<int> emptyVector;
            int result = sumOfOddElements(emptyVector);
            Assert::AreEqual(0, result);
        }

        TEST_METHOD(TestAllEvenVector)
        {
            vector<int> allEvenVector = { 2, 4, 6, 8 };
            int result = sumOfOddElements(allEvenVector);
            Assert::AreEqual(0, result);
        }

        TEST_METHOD(TestAllOddVector)
        {
            vector<int> allOddVector = { 1, 3, 5, 7 };
            int result = sumOfOddElements(allOddVector);
            Assert::AreEqual(16, result);
        }

        TEST_METHOD(TestMixedVector)
        {
            vector<int> mixedVector = { 1, 2, 3, 4, 5 };
            int result = sumOfOddElements(mixedVector);
            Assert::AreEqual(9, result);
        }
    };
}