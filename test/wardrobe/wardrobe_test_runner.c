#include "unity/fixture/unity_fixture.h"

TEST_GROUP_RUNNER(wardrobe)
{
   /* Test cases to run */
   RUN_TEST_CASE(wardrobe, InitTest);
   RUN_TEST_CASE(wardrobe, ReturnTwoCombination);
}
