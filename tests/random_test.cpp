#include "gtest/gtest.h"

TEST(CustomTestGroup, CustomTestName)
{
    ASSERT_EQ(2+2, 4);
    EXPECT_EQ(2+3, 5);
}