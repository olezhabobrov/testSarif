/*
 * This file is automatically generated by UnitTestBot. For further information see https://github.com/UnitTestBot/UTBotCpp
 * Copyright (c) Huawei Technologies Co., Ltd. 2012-2021. All rights reserved.
 */

#include "complex_structs_test.h"

#include "gtest/gtest.h"
namespace UTBot {
static const float utbot_abs_error = 1e-6;


#pragma region regression

TEST(regression, struct_has_alphabet_test_1)
{
    int actual = struct_has_alphabet({0, {'A', 'B', 'C', 'D', 'E', 'F', 'G', 'H', 'I', 'J', 'K', 'L'}});
    EXPECT_EQ(1, actual);
}

TEST(regression, struct_has_alphabet_test_2)
{
    int actual = struct_has_alphabet({0, {'c', 'c', 'c', 'c', 'c', 'c', 'c', 'c', 'a', 'c', 'a', 'c'}});
    EXPECT_EQ(0, actual);
}

TEST(regression, struct_has_alphabet_test_3)
{
    int actual = struct_has_alphabet({0, {'A', 'c', 'c', 'c', 'c', 'c', 'c', 'c', 'a', 'c', 'a', 'c'}});
    EXPECT_EQ(0, actual);
}

TEST(regression, struct_has_alphabet_test_4)
{
    int actual = struct_has_alphabet({1, {'c', 'c', 'c', 'c', 'c', 'c', 'c', 'c', 'a', 'c', 'a', 'c'}});
    EXPECT_EQ(0, actual);
}


TEST(regression, arrays_in_inner_structs_test_1)
{
    char actual = arrays_in_inner_structs({{'c', 'c'}, 2, {{0, 0, 0, 0, 0}}});
    EXPECT_EQ('2', actual);
}

TEST(regression, arrays_in_inner_structs_test_2)
{
    char actual = arrays_in_inner_structs({{'k', 'c'}, 2, {{0, 0, 0, 0, 0}}});
    EXPECT_EQ('1', actual);
}

TEST(regression, arrays_in_inner_structs_test_3)
{
    char actual = arrays_in_inner_structs({{'c', 'c'}, 2, {{65, 65, 65, 65, 65}}});
    EXPECT_EQ('3', actual);
}

TEST(regression, arrays_in_inner_structs_test_4)
{
    char actual = arrays_in_inner_structs({{'c', 'c'}, 2, {{65, 0, 0, 0, 0}}});
    EXPECT_EQ('2', actual);
}

TEST(regression, arrays_in_inner_structs_test_5)
{
    char actual = arrays_in_inner_structs({{'c', 'k'}, 2, {{0, 0, 0, 0, 0}}});
    EXPECT_EQ('1', actual);
}

TEST(regression, arrays_in_inner_structs_test_6)
{
    char actual = arrays_in_inner_structs({{'c', 'c'}, 0, {{0, 0, 0, 0, 0}}});
    EXPECT_EQ('0', actual);
}


TEST(regression, alphabet_test_1)
{
    struct One actual = alphabet(0);
    struct One expected = {1, {'A', 'B', 'C', 'D', 'E', 'F', 'G', 'H', 'I', 'J', 'K', 'L'}};
    EXPECT_EQ(actual.a, expected.a);
    for (int it_4_0 = 0; it_4_0 < 12; it_4_0 ++) {
        EXPECT_EQ(expected.str[it_4_0], actual.str[it_4_0]);
    }
}

TEST(regression, alphabet_test_2)
{
    struct One actual = alphabet(-1);
    struct One expected = {-1, {'a', 'b', 'c', 'd', 'e', 'f', 'g', 'h', 'i', 'j', 'k', 'l'}};
    EXPECT_EQ(actual.a, expected.a);
    for (int it_4_0 = 0; it_4_0 < 12; it_4_0 ++) {
        EXPECT_EQ(expected.str[it_4_0], actual.str[it_4_0]);
    }
}

#pragma endregion
}
