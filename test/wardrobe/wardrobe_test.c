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

TEST(wardrobe, Number5)
{
    TEST_ASSERT_EQUAL_STRING("V", convert(5));
}

TEST(wardrobe, Number8)
{
    TEST_ASSERT_EQUAL_STRING("VIII", convert(8));
}

TEST(wardrobe, Number10)
{
    TEST_ASSERT_EQUAL_STRING("X", convert(10));
}

TEST(wardrobe, Number9)
{
    TEST_ASSERT_EQUAL_STRING("IX", convert(9));
}
