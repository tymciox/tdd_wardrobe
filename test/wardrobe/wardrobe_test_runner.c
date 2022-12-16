#include "unity/fixture/unity_fixture.h"

TEST_GROUP_RUNNER(wardrobe)
{
   /* Test cases to run */
   RUN_TEST_CASE(wardrobe, InitTest);
   RUN_TEST_CASE(wardrobe, TeamAGetFirstPoint);
   RUN_TEST_CASE(wardrobe, TeamAGetTwoPointInRow);
   RUN_TEST_CASE(wardrobe, TeamAGetOneAndTwoPoint);
   RUN_TEST_CASE(wardrobe, TeamAGetTwoAndThreePoint);
   RUN_TEST_CASE(wardrobe, TeamBGetOneAndTwoPoint);
   RUN_TEST_CASE(wardrobe, TeamBGetThreeAndTwoPoint);
}
