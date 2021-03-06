/*
 * This file is automatically generated by UnitTestBot. For further information seehttps://unittestbot.org
 */

#include "variadic_dot_c_test.h"

#include "gtest/gtest.h"
namespace UTBot {
static const float utbot_abs_error = 1e-6;


#pragma region regression
TEST(regression, variadic_function_test_1)
{
    char fmt[] = "";
    variadic_function(fmt);
}

#pragma endregion
#pragma region error
TEST(error, variadic_function_test_2)
{
    char fmt[] = "bdccccccb";
    variadic_function(fmt);
}

TEST(error, variadic_function_test_3)
{
    char fmt[] = "bcccccccb";
    variadic_function(fmt);
}

#pragma endregion
}
