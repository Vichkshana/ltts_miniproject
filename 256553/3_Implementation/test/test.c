#include "unity.h"
#include "pharmacy.h"

/* Modify these two lines according to the project */

#define PROJECT_NAME    "pharmacy"

/* Prototypes for all the test functions */
//void test_bill(void);
void test_display(void);
void test_checkstock(void);


/* Required by the unity test framework */
void setUp(){}
/* Required by the unity test framework */
void tearDown(){}

/* Start of the application test */
int main()
{
/* Initiate the Unity Test Framework */
  UNITY_BEGIN();

/* Run Test functions */
  //RUN_TEST(test_bill);
  RUN_TEST(test_display);
  RUN_TEST(test_checkstock);
  

  /* Close the Unity Test Framework */
  return UNITY_END();
}


void test_display() {
  TEST_ASSERT_EQUAL(0,display());
  
}

void test_checkstock() {
  TEST_ASSERT_EQUAL(0,checkstock());
  
}
