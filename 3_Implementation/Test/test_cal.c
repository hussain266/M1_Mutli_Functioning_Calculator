#include "../Unity/unity.h"
#include "library.h"

/* Required by the unity test framework */
void setUp(){}
/* Required by the unity test framework */
void tearDown(){}


void test_div(void)
{
  TEST_ASSERT_EQUAL(1, div(10, 10));
  TEST_ASSERT_EQUAL(0, div(10, 20));
}

int login(int username, int password)
{
    TEST_ASSERT_EQUAL(1, login(1, 1));
    TEST_ASSERT_EQUAL(0, login(0, 1));
}

int main()
{
/* Initiate the Unity Test Framework */
  UNITY_BEGIN();

/* Run Test functions */
  RUN_TEST(test_div);
 
  /* Close the Unity Test Framework */
  return UNITY_END(); 
}