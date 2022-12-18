#include "unity/fixture/unity_fixture.h"

#include "assert.h"
#include "wardrobe.h"

TEST_GROUP(wardrobe);

TEST_SETUP(wardrobe)
{
    /* Init before every test */
    init();
}

TEST_TEAR_DOWN(wardrobe)
{
    /* Cleanup after every test */
}

TEST(wardrobe, InitTest)
{
    TEST_ASSERT_EQUAL_INT(0, add(""));
}

TEST(wardrobe, FirstTest)
{
    TEST_ASSERT_EQUAL_INT(1, add("1"));
}

TEST(wardrobe, AddTwoNumber)
{
    TEST_ASSERT_EQUAL_INT(3, add("1,2"));
}

TEST(wardrobe, AddManyNumber)
{
    TEST_ASSERT_EQUAL_INT(1202, add("1,2,200,222,777"));
}

TEST(wardrobe, NewLineInstedComma)
{
    TEST_ASSERT_EQUAL_INT(245+8+200+222+0, add("245\n8,200\n222,0"));
}

