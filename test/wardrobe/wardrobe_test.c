#include "unity/fixture/unity_fixture.h"

#include "assert.h"
#include "wardrobe.h"

TEST_GROUP(wardrobe);

TEST_SETUP(wardrobe)
{
    /* Init before every test */
    scoreInit();
}

TEST_TEAR_DOWN(wardrobe)
{
    /* Cleanup after every test */
}

TEST(wardrobe, InitTest)
{
    TEST_ASSERT_EQUAL_STRING("000:000", getScore());
}

TEST(wardrobe, TeamAGetFirstPoint)
{
    scoreTeamA1();
    TEST_ASSERT_EQUAL_STRING("001:000", getScore());
}

TEST(wardrobe, TeamAGetTwoPointInRow)
{
    scoreTeamA1();
    scoreTeamA1();
    TEST_ASSERT_EQUAL_STRING("002:000", getScore());
}

TEST(wardrobe, TeamAGetOneAndTwoPoint)
{
    scoreTeamA1();
    scoreTeamA2();
    TEST_ASSERT_EQUAL_STRING("003:000", getScore());
}

TEST(wardrobe, TeamAGetTwoAndThreePoint)
{
    scoreTeamA2();
    scoreTeamA3();
    TEST_ASSERT_EQUAL_STRING("005:000", getScore());
}

TEST(wardrobe, TeamBGetOneAndTwoPoint)
{
    scoreTeamB1();
    scoreTeamB2();
    TEST_ASSERT_EQUAL_STRING("000:003", getScore());
}

TEST(wardrobe, TeamBGetThreeAndTwoPoint)
{
    scoreTeamB3();
    scoreTeamB2();
    TEST_ASSERT_EQUAL_STRING("000:005", getScore());
}