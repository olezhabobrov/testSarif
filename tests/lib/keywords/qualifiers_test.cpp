/*
 * This file is automatically generated by UnitTestBot. For further information see https://github.com/UnitTestBot/UTBotCpp
 * Copyright (c) Huawei Technologies Co., Ltd. 2012-2021. All rights reserved.
 */

#include "qualifiers_test.h"

#include "gtest/gtest.h"
namespace UTBot {
static const float utbot_abs_error = 1e-6;


#pragma region regression

TEST(regression, c_strcmp_2_test_1)
{
    char a[] = "abccccccca";
    char b[] = "accccbcbca";
    int actual = c_strcmp_2(a, b);
    EXPECT_EQ(0, actual);
}

TEST(regression, c_strcmp_2_test_2)
{
    char a[] = "";
    char b[] = "";
    int actual = c_strcmp_2(a, b);
    EXPECT_EQ(1, actual);
}

TEST(regression, c_strcmp_2_test_3)
{
    char a[] = "rccccccccr";
    char b[] = "bccccbcbcb";
    int actual = c_strcmp_2(a, b);
    EXPECT_EQ(0, actual);
}


TEST(regression, ishello_2_test_1)
{
    char a[] = "hcacccccch";
    int actual = ishello_2(a);
    EXPECT_EQ(0, actual);
    char expected_a[] = {'h', 'c', 'a', 'c', 'c', 'c', 'c', 'c', 'c', '\0'};
    for (int it_1_0 = 0; it_1_0 < 10; it_1_0 ++) {
        EXPECT_EQ(expected_a[it_1_0], a[it_1_0]);
    }
}

TEST(regression, ishello_2_test_2)
{
    char a[] = "hello";
    int actual = ishello_2(a);
    EXPECT_EQ(1, actual);
    char expected_a[] = {'h', 'e', 'l', 'l', 'o', '\0', 'c', 'c', 'c', '\0'};
    for (int it_1_0 = 0; it_1_0 < 10; it_1_0 ++) {
        EXPECT_EQ(expected_a[it_1_0], a[it_1_0]);
    }
}

TEST(regression, ishello_2_test_3)
{
    char a[] = "acacccccca";
    int actual = ishello_2(a);
    EXPECT_EQ(0, actual);
    char expected_a[] = {'a', 'c', 'a', 'c', 'c', 'c', 'c', 'c', 'c', '\0'};
    for (int it_1_0 = 0; it_1_0 < 10; it_1_0 ++) {
        EXPECT_EQ(expected_a[it_1_0], a[it_1_0]);
    }
}


TEST(regression, returns_pointer_with_min_modifier_test_1)
{
    const long long actual = *returns_pointer_with_min_modifier(0LL, 0LL);
    EXPECT_EQ(0LL, actual);
}

TEST(regression, returns_pointer_with_min_modifier_test_2)
{
    const long long actual = *returns_pointer_with_min_modifier(0LL, 1LL);
    EXPECT_EQ(0LL, actual);
}


TEST(regression, foo___test_1)
{
    char actual = *foo__(0);
    EXPECT_EQ('0', actual);
}

TEST(regression, foo___test_2)
{
    char actual = *foo__(1);
    EXPECT_EQ('1', actual);
}

TEST(regression, foo___test_3)
{
    char actual = *foo__(-1);
    EXPECT_EQ('-', actual);
}


TEST(regression, foo_bar_test_1)
{
    const char actual = *foo_bar(2);
    EXPECT_EQ('1', actual);
}

TEST(regression, foo_bar_test_2)
{
    const char actual = *foo_bar(0);
    EXPECT_EQ('0', actual);
}

TEST(regression, foo_bar_test_3)
{
    const char actual = *foo_bar(-1);
    EXPECT_EQ('-', actual);
}


TEST(regression, returns_struct_with_min_max_Q_test_1)
{
    const struct MinMaxQ actual = *returns_struct_with_min_max_Q(0, 0);
    struct MinMaxQ expected = {0, 0, {'b', 'a', '\0'}};
    EXPECT_EQ(actual.a, expected.a);
    EXPECT_EQ(actual.b, expected.b);
    for (int it_6_0 = 0; it_6_0 < 3; it_6_0 ++) {
        EXPECT_EQ(expected.chars[it_6_0], actual.chars[it_6_0]);
    }
}

TEST(regression, returns_struct_with_min_max_Q_test_2)
{
    const struct MinMaxQ actual = *returns_struct_with_min_max_Q(0, 1);
    struct MinMaxQ expected = {0, 1, {'a', 'b', '\0'}};
    EXPECT_EQ(actual.a, expected.a);
    EXPECT_EQ(actual.b, expected.b);
    for (int it_6_0 = 0; it_6_0 < 3; it_6_0 ++) {
        EXPECT_EQ(expected.chars[it_6_0], actual.chars[it_6_0]);
    }
}

#pragma endregion
}
