#include "unity/fixture/unity_fixture.h"

#include "assert.h"
#include "wardrobe.h"

int expected_tab[5][10] = 
{
    {50, 50, 50, 50, 50},
};

TEST_GROUP(wardrobe);

TEST_SETUP(wardrobe)
{
    /* Init before every test */
}

TEST_TEAR_DOWN(wardrobe)
{
    /* Cleanup after every test */
}

TEST(wardrobe, InitTest)
{
    TEST_ASSERT_EQUAL_INT_ARRAY(expected_tab, combination(), sizeof(expected_tab));
}
