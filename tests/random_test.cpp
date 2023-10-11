#include "gtest/gtest.h"

TEST(CustomTestGroup, CustomTestName)
{
    ASSERT_EQ(2+2, 4);
}

TEST(CustomTestGroup2, CustomTestName2)
{
    ASSERT_EQ(2+3, 6);
}