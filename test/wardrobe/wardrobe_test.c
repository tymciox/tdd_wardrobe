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
    int ExpectedTab[10][5] = {{50, 50, 50, 50, 50}};
    TEST_ASSERT_EQUAL_INT_ARRAY(ExpectedTab, combination(), NUM_OF_ELEMENT(ExpectedTab));
}

TEST(wardrobe, ReturnTwoCombination)
{
    int ExpectedTab[5][10] = 
    {
        {50, 50, 50, 50, 50},
        {100, 100, 50},
    };
    TEST_ASSERT_EQUAL_INT_ARRAY(ExpectedTab, combination(), NUM_OF_ELEMENT(ExpectedTab));
}
