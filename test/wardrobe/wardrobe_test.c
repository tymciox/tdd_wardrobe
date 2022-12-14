#include "unity/fixture/unity_fixture.h"

#include "assert.h"
#include "wardrobe.h"

TEST_GROUP(wardrobe);

TEST_SETUP(wardrobe)
{
    /* Init before every test */
}

TEST_TEAR_DOWN(wardrobe)
{
    /* Cleanup after every test */
}

TEST(wardrobe, FirstTest)
{
    TEST_ASSERT_EQUAL_STRING("000:000", getScore());
}
