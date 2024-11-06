#include "pch.h"
#include "CppUnitTest.h"

#include "../9.2.1/9.2.1.cpp"

using namespace Microsoft::VisualStudio::CppUnitTestFramework;


#define MAX(a, b) ((a) > (b) ? (a) : (b))
#define MIN(a, b) ((a) < (b) ? (a) : (b))
#define ABS(a) ((a) < 0 ? -(a) : (a))
#define SQUARE(a) ((a) * (a))

namespace UnitTest1
{
    TEST_CLASS(UnitTest1)
    {
    public:

        TEST_METHOD(TestFormula1)
        {
           
            double x = 6.0, z = 7.0;
            double expected = MAX(x, z) * MIN(x + z, x * z);
            Assert::AreEqual(expected, calculateWFormula1(x, z), 0.001);
        }

        TEST_METHOD(TestFormula2)
        {
           
            double x = 4.0, z = 5.0;
            double expected = SQUARE(MIN(ABS(x - z), z));
            Assert::AreEqual(expected, calculateWFormula2(x, z), 0.001);
        }

        TEST_METHOD(TestCalculateW_Formula1)
        {
            
            double x = 6.0, z = 7.0;
            double expected = calculateWFormula1(x, z);
            Assert::AreEqual(expected, calculateW(x, z), 0.001);  
        }

        TEST_METHOD(TestCalculateW_Formula2_LowZ)
        {
            
            double x = 4.0, z = 5.0;
            double expected = calculateWFormula2(x, z);
            Assert::AreEqual(expected, calculateW(x, z), 0.001);  
        }

        TEST_METHOD(TestCalculateW_Formula2_HighZ)
        {
            
            double x = 4.0, z = 10.0;
            double expected = calculateWFormula2(x, z);
            Assert::AreEqual(expected, calculateW(x, z), 0.001);  
        }
    };
}
