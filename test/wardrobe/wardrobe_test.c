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

TEST(wardrobe, SupportDiffrentDelimiters)
{
    TEST_ASSERT_EQUAL_INT(145+38+0+222+651, add("//;\n145;38\n0;222\n651"));
}

TEST(wardrobe, SupportDiffrentDelimitersWithoutEndLine)
{
    TEST_ASSERT_EQUAL_INT(0, add("//;2145;38\n0;222\n651"));
}

TEST(wardrobe, NegativeNumber)
{
    TEST_ASSERT_EQUAL_INT(0, add("//;\n-2145;38\n0;-222\n651"));
}

TEST(wardrobe, NumberBiggerThan1000)
{
    TEST_ASSERT_EQUAL_INT(38, add("2145,38"));
}

TEST(wardrobe, TwoDelimitersInRow)
{
    TEST_ASSERT_EQUAL_INT(0, add("2145,\n38"));
}

TEST(wardrobe, DelimitersCanBeOfAnyLenght)
{
    TEST_ASSERT_EQUAL_INT(6, add("//[***]\n1***2***3"));
}
