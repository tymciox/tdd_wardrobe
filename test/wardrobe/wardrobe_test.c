#include "unity/fixture/unity_fixture.h"

#include "assert.h"
#include "wardrobe.h"

TEST_GROUP(wardrobe);

TEST_SETUP(wardrobe)
{
    /* Init before every test */
    init_convert();
}

TEST_TEAR_DOWN(wardrobe)
{
    /* Cleanup after every test */
}

TEST(wardrobe, InitTest)
{
    TEST_ASSERT_EQUAL_STRING("I", convert(1));
}

TEST(wardrobe, Number3)
{
    TEST_ASSERT_EQUAL_STRING("III", convert(3));
}

TEST(wardrobe, Number4)
{
    TEST_ASSERT_EQUAL_STRING("IV", convert(4));
}
