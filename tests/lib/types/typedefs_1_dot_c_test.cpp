/*
 * This file is automatically generated by UnitTestBot. For further information seehttps://unittestbot.org
 */

#include "typedefs_1_dot_c_test.h"

#include "gtest/gtest.h"
namespace UTBot {
static const float utbot_abs_error = 1e-6;


#pragma region regression
TEST(regression, gid_to_name_test_1)
{
    int actual = gid_to_name(2U);
    EXPECT_EQ(2, actual);
}

TEST(regression, gid_to_name_test_2)
{
    int actual = gid_to_name(0U);
    EXPECT_EQ(3, actual);
}

TEST(regression, sign_of_typedef_struct_test_1)
{
    int actual = sign_of_typedef_struct({
        .a = -10});
    EXPECT_EQ(-1, actual);
}

TEST(regression, sign_of_typedef_struct_test_2)
{
    int actual = sign_of_typedef_struct({
        .a = 0});
    EXPECT_EQ(0, actual);
}

TEST(regression, sign_of_typedef_struct_test_3)
{
    int actual = sign_of_typedef_struct({
        .a = 1});
    EXPECT_EQ(1, actual);
}

TEST(regression, sign_of_typedef_struct2_test_1)
{
    int actual = sign_of_typedef_struct2({
        .a = -10});
    EXPECT_EQ(-1, actual);
}

TEST(regression, sign_of_typedef_struct2_test_2)
{
    int actual = sign_of_typedef_struct2({
        .a = 0});
    EXPECT_EQ(0, actual);
}

TEST(regression, sign_of_typedef_struct2_test_3)
{
    int actual = sign_of_typedef_struct2({
        .a = 1});
    EXPECT_EQ(1, actual);
}

TEST(regression, sign_of_typedef_union_test_1)
{
    int actual = sign_of_typedef_union(from_bytes<TypeDefUnion>({-10, -1, -1, -1}));
    EXPECT_EQ(-1, actual);
}

TEST(regression, sign_of_typedef_union_test_2)
{
    int actual = sign_of_typedef_union(from_bytes<TypeDefUnion>({0, 0, 0, 0}));
    EXPECT_EQ(0, actual);
}

TEST(regression, sign_of_typedef_union_test_3)
{
    int actual = sign_of_typedef_union(from_bytes<TypeDefUnion>({1, 0, 0, 0}));
    EXPECT_EQ(1, actual);
}

TEST(regression, sign_of_typedef_union2_test_1)
{
    int actual = sign_of_typedef_union2(from_bytes<_typeDefUnion>({-10, -1, -1, -1}));
    EXPECT_EQ(-1, actual);
}

TEST(regression, sign_of_typedef_union2_test_2)
{
    int actual = sign_of_typedef_union2(from_bytes<_typeDefUnion>({0, 0, 0, 0}));
    EXPECT_EQ(0, actual);
}

TEST(regression, sign_of_typedef_union2_test_3)
{
    int actual = sign_of_typedef_union2(from_bytes<_typeDefUnion>({1, 0, 0, 0}));
    EXPECT_EQ(1, actual);
}

TEST(regression, min_size_t_test_1)
{
    unsigned long actual = min_size_t(0UL, 1UL);
    EXPECT_EQ(0UL, actual);
}

TEST(regression, min_size_t_test_2)
{
    unsigned long actual = min_size_t(0UL, 0UL);
    EXPECT_EQ(0UL, actual);
}

TEST(regression, min_size_t_alias_test_1)
{
    unsigned long actual = min_size_t_alias(0UL, 1UL);
    EXPECT_EQ(0UL, actual);
}

TEST(regression, min_size_t_alias_test_2)
{
    unsigned long actual = min_size_t_alias(0UL, 0UL);
    EXPECT_EQ(0UL, actual);
}

#pragma endregion
}
