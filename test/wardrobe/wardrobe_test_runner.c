#include "unity/fixture/unity_fixture.h"

TEST_GROUP_RUNNER(wardrobe)
{
   /* Test cases to run */
   RUN_TEST_CASE(wardrobe, InitTest);
   RUN_TEST_CASE(wardrobe, Number3);
   RUN_TEST_CASE(wardrobe, Number4);
   RUN_TEST_CASE(wardrobe, Number5);
   RUN_TEST_CASE(wardrobe, Number8);
   RUN_TEST_CASE(wardrobe, Number9);
   RUN_TEST_CASE(wardrobe, Number10);
   RUN_TEST_CASE(wardrobe, Number30);
   RUN_TEST_CASE(wardrobe, Number45);
   RUN_TEST_CASE(wardrobe, Number57);
}
