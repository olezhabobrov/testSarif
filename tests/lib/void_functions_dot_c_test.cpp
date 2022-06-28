/*
 * This file is automatically generated by UnitTestBot. For further information seehttps://unittestbot.org
 */

#include "void_functions_dot_c_test.h"

#include "gtest/gtest.h"
namespace UTBot {
static const float utbot_abs_error = 1e-6;


#pragma region regression
TEST(regression, print_sign_test_1)
{
    print_sign(2);
}

TEST(regression, print_sign_test_2)
{
    print_sign(-1);
}

TEST(regression, print_sign_test_3)
{
    print_sign(0);
}

TEST(regression, print_signs_for_two_structs_test_1)
{
    print_signs_for_two_structs({
        .a = 3}, {
        .a = -2});
}

TEST(regression, print_signs_for_two_structs_test_2)
{
    print_signs_for_two_structs({
        .a = 1}, {
        .a = 1});
}

TEST(regression, print_signs_for_two_structs_test_3)
{
    print_signs_for_two_structs({
        .a = 0}, {
        .a = 0});
}

TEST(regression, print_value_test_1)
{
    print_value(21);
}

TEST(regression, print_value_test_2)
{
    print_value(1);
}

TEST(regression, print_value_test_3)
{
    print_value(42);
}

TEST(regression, print_value_test_4)
{
    print_value(31);
}

TEST(regression, print_value_test_5)
{
    print_value(11);
}

TEST(regression, print_value_test_6)
{
    print_value(0);
}

#pragma endregion
}
