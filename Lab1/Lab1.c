#include <stdio.h>
#include "unity.h"

void setUp()
{

}
void tearDown()
{

}
int function(int a, int b)
{
    if(a >0)
        return a + b;
    else if(a == b)
        return a*b;
    else
        return a-b;
}

void Test_function2()
{
    
    TEST_ASSERT_EQUAL(2, function(1,1));



}
void Test_function()
{
    TEST_ASSERT_EQUAL(10, function(5,5));
    TEST_ASSERT_EQUAL(10, function(5,5));
    TEST_ASSERT_EQUAL(0, function(5,-5));




}

int main()
{
    UNITY_BEGIN();
    RUN_TEST(Test_function);
      RUN_TEST(Test_function2);
    return UNITY_END();
}