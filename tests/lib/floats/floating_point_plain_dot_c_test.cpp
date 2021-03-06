/*
 * This file is automatically generated by UnitTestBot. For further information seehttps://unittestbot.org
 */

#include "floating_point_plain_dot_c_test.h"

#include "gtest/gtest.h"
#include "math.h"
namespace UTBot {
static const float utbot_abs_error = 1e-6;


#pragma region regression
TEST(regression, plain_isnan_test_1)
{
    int actual = plain_isnan(NAN);
    EXPECT_EQ(1, actual);
}

TEST(regression, plain_isnan_test_2)
{
    int actual = plain_isnan(0.000000e+00);
    EXPECT_EQ(0, actual);
}

#pragma endregion
}
