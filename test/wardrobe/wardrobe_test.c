#include "unity/fixture/unity_fixture.h"

#include "assert.h"

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
    TEST_FAIL_MESSAGE("Implement your test!");
}
