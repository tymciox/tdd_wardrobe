#include "unity/fixture/unity_fixture.h"

TEST_GROUP_RUNNER(wardrobe)
{
   /* Test cases to run */
   RUN_TEST_CASE(wardrobe, InitTest);
   RUN_TEST_CASE(wardrobe, FirstTest);
   RUN_TEST_CASE(wardrobe, AddTwoNumber);
   RUN_TEST_CASE(wardrobe, AddManyNumber);
   RUN_TEST_CASE(wardrobe, NewLineInstedComma);
   RUN_TEST_CASE(wardrobe, SupportDiffrentDelimiters);
   RUN_TEST_CASE(wardrobe, SupportDiffrentDelimitersWithoutEndLine);
   RUN_TEST_CASE(wardrobe, NegativeNumber);
}
