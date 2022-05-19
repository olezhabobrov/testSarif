/*
 * This file is automatically generated by UnitTestBot. For further information see https://github.com/UnitTestBot/UTBotCpp
 * Copyright (c) Huawei Technologies Co., Ltd. 2012-2021. All rights reserved.
 */

#include "simple_structs_test.h"

#include "gtest/gtest.h"
namespace UTBot {
static const float utbot_abs_error = 1e-6;


#pragma region regression

TEST(regression, get_sign_struct_test_1)
{
    int actual = get_sign_struct({0, -10});
    EXPECT_EQ(-1, actual);
}

TEST(regression, get_sign_struct_test_2)
{
    int actual = get_sign_struct({0, 2});
    EXPECT_EQ(1, actual);
}

TEST(regression, get_sign_struct_test_3)
{
    int actual = get_sign_struct({0, 0});
    EXPECT_EQ(0, actual);
}


TEST(regression, calculate_something_test_1)
{
    int actual = calculate_something({0, 0, 0LL});
    EXPECT_EQ(0, actual);
}

TEST(regression, calculate_something_test_2)
{
    int actual = calculate_something({0, 1, 0LL});
    EXPECT_EQ(1, actual);
}

TEST(regression, calculate_something_test_3)
{
    int actual = calculate_something({1, 1, 0LL});
    EXPECT_EQ(1, actual);
}

TEST(regression, calculate_something_test_4)
{
    int actual = calculate_something({7, 1, 0LL});
    EXPECT_EQ(1, actual);
}

TEST(regression, calculate_something_test_5)
{
    int actual = calculate_something({-1, 0, -2LL});
    EXPECT_EQ(-1, actual);
}

TEST(regression, calculate_something_test_6)
{
    int actual = calculate_something({7, 1, 2020LL});
    EXPECT_EQ(1, actual);
}

TEST(regression, calculate_something_test_7)
{
    int actual = calculate_something({1, 0, 10754LL});
    EXPECT_EQ(0, actual);
}


TEST(regression, get_symbol_by_struct_test_1)
{
    char actual = get_symbol_by_struct({'b', 'h', 99, 1});
    EXPECT_EQ('1', actual);
}

TEST(regression, get_symbol_by_struct_test_2)
{
    char actual = get_symbol_by_struct({'b', 'c', 99, 0});
    EXPECT_EQ('c', actual);
}

TEST(regression, get_symbol_by_struct_test_3)
{
    char actual = get_symbol_by_struct({'b', 'h', 99, 0});
    EXPECT_EQ('0', actual);
}

TEST(regression, get_symbol_by_struct_test_4)
{
    char actual = get_symbol_by_struct({'b', 'h', 117, 0});
    EXPECT_EQ('u', actual);
}

TEST(regression, get_symbol_by_struct_test_5)
{
    char actual = get_symbol_by_struct({'a', 'c', 99, 0});
    EXPECT_EQ('a', actual);
}


TEST(regression, operate_with_inner_structs_test_1)
{
    signed char actual = operate_with_inner_structs({{'c', {0U, 0LL}, 15}, 5, 101LL});
    EXPECT_EQ('c', actual);
}

TEST(regression, operate_with_inner_structs_test_2)
{
    signed char actual = operate_with_inner_structs({{'c', {1U, 0LL}, 0}, 0, 0LL});
    EXPECT_EQ('g', actual);
}

TEST(regression, operate_with_inner_structs_test_3)
{
    signed char actual = operate_with_inner_structs({{'5', {0U, 0LL}, 0}, 5, 5LL});
    EXPECT_EQ('e', actual);
}

TEST(regression, operate_with_inner_structs_test_4)
{
    signed char actual = operate_with_inner_structs({{'c', {0U, 0LL}, 0}, 5, 5LL});
    EXPECT_EQ('e', actual);
}

TEST(regression, operate_with_inner_structs_test_5)
{
    signed char actual = operate_with_inner_structs({{'5', {0U, 0LL}, 5}, 5, 5LL});
    EXPECT_EQ('e', actual);
}

TEST(regression, operate_with_inner_structs_test_6)
{
    signed char actual = operate_with_inner_structs({{'5', {5U, 5LL}, 5}, 5, 5LL});
    EXPECT_EQ('5', actual);
}

TEST(regression, operate_with_inner_structs_test_7)
{
    signed char actual = operate_with_inner_structs({{'5', {6U, 5LL}, 5}, 5, 5LL});
    EXPECT_EQ('g', actual);
}

TEST(regression, operate_with_inner_structs_test_8)
{
    signed char actual = operate_with_inner_structs({{'c', {0U, 0LL}, 0}, 5, 101LL});
    EXPECT_EQ('e', actual);
}

TEST(regression, operate_with_inner_structs_test_9)
{
    signed char actual = operate_with_inner_structs({{'c', {0U, 0LL}, 0}, 5, 0LL});
    EXPECT_EQ('e', actual);
}

TEST(regression, operate_with_inner_structs_test_10)
{
    signed char actual = operate_with_inner_structs({{'c', {0U, 4LL}, 0}, 0, 0LL});
    EXPECT_EQ('o', actual);
}

TEST(regression, operate_with_inner_structs_test_11)
{
    signed char actual = operate_with_inner_structs({{'c', {0U, 0LL}, 0}, 0, 0LL});
    EXPECT_EQ('e', actual);
}


TEST(regression, struct_as_return_type_test_1)
{
    struct MainStruct actual = struct_as_return_type(1);
    struct MainStruct expected = {{'1', {1U, 1LL}, 1}, 1, 1LL};
    EXPECT_EQ(actual.inner.c, expected.inner.c);
    EXPECT_EQ(actual.inner.ininner.u, expected.inner.ininner.u);
    EXPECT_EQ(actual.inner.ininner.l, expected.inner.ininner.l);
    EXPECT_EQ(actual.inner.s, expected.inner.s);
    EXPECT_EQ(actual.x, expected.x);
    EXPECT_EQ(actual.y, expected.y);
}

TEST(regression, struct_as_return_type_test_2)
{
    struct MainStruct actual = struct_as_return_type(9);
    struct MainStruct expected = {{'2', {2U, 2LL}, 2}, 2, 2LL};
    EXPECT_EQ(actual.inner.c, expected.inner.c);
    EXPECT_EQ(actual.inner.ininner.u, expected.inner.ininner.u);
    EXPECT_EQ(actual.inner.ininner.l, expected.inner.ininner.l);
    EXPECT_EQ(actual.inner.s, expected.inner.s);
    EXPECT_EQ(actual.x, expected.x);
    EXPECT_EQ(actual.y, expected.y);
}

TEST(regression, struct_as_return_type_test_3)
{
    struct MainStruct actual = struct_as_return_type(0);
    struct MainStruct expected = {{'0', {0U, 0LL}, 0}, 0, 0LL};
    EXPECT_EQ(actual.inner.c, expected.inner.c);
    EXPECT_EQ(actual.inner.ininner.u, expected.inner.ininner.u);
    EXPECT_EQ(actual.inner.ininner.l, expected.inner.ininner.l);
    EXPECT_EQ(actual.inner.s, expected.inner.s);
    EXPECT_EQ(actual.x, expected.x);
    EXPECT_EQ(actual.y, expected.y);
}


TEST(regression, struct_with_union_as_return_type_test_1)
{
    struct StructWithUnion actual = struct_with_union_as_return_type(2);
    struct StructWithUnion expected = {from_bytes<StructWithUnion::InnerUnion>({17, 0, 0, 0}), {from_bytes<StructWithUnion::InnerStructWithUnion::Inner2Union>({48, -85, -85, -85})}, -108};
//    EXPECT_EQ(actual.un.c, expected.un.c);
//    EXPECT_EQ(actual.un.x, expected.un.x);
//    EXPECT_EQ(actual.is.un2.c, expected.is.un2.c);
//    EXPECT_EQ(actual.is.un2.x, expected.is.un2.x);
    EXPECT_EQ(actual.x, expected.x);
}

TEST(regression, struct_with_union_as_return_type_test_2)
{
    struct StructWithUnion actual = struct_with_union_as_return_type(0);
    struct StructWithUnion expected = {from_bytes<StructWithUnion::InnerUnion>({97, -85, -85, -85}), {from_bytes<StructWithUnion::InnerStructWithUnion::Inner2Union>({101, 0, 0, 0})}, 155};
//    EXPECT_EQ(actual.un.c, expected.un.c);
//    EXPECT_EQ(actual.un.x, expected.un.x);
//    EXPECT_EQ(actual.is.un2.c, expected.is.un2.c);
//    EXPECT_EQ(actual.is.un2.x, expected.is.un2.x);
    EXPECT_EQ(actual.x, expected.x);
}


TEST(regression, complex_struct_with_union_as_return_type_test_1)
{
    struct A actual = complex_struct_with_union_as_return_type(0);
    struct A expected = {from_bytes<A::B>({31, -123, -21, 81, -72, 30, 9, 64})};
//    EXPECT_EQ(actual.a.t.arr.c, expected.a.t.arr.c);
//    EXPECT_EQ(actual.a.t.arr.x, expected.a.t.arr.x);
//    EXPECT_NEAR(actual.a.t.arr.y, expected.a.t.arr.y, utbot_abs_error);
}

TEST(regression, complex_struct_with_union_as_return_type_test_2)
{
    struct A actual = complex_struct_with_union_as_return_type(5);
    struct A expected = {from_bytes<A::B>({117, -85, -85, -85, -85, -85, -85, -85})};
//    EXPECT_EQ(actual.a.t.arr.c, expected.a.t.arr.c);
//    EXPECT_EQ(actual.a.t.arr.x, expected.a.t.arr.x);
//    EXPECT_NEAR(actual.a.t.arr.y, expected.a.t.arr.y, utbot_abs_error);
}


TEST(regression, struct_with_union_in_union_as_return_type_test_1)
{
    struct StructWithUnionInUnion actual = struct_with_union_in_union_as_return_type(-1, 0);
    struct StructWithUnionInUnion expected = {from_bytes<StructWithUnionInUnion::Union1>({98, -85, -85, -85, -85, -85, -85, -85})};
//    EXPECT_EQ(actual.un.x, expected.un.x);
//    EXPECT_NEAR(actual.un.t.y, expected.un.t.y, utbot_abs_error);
//    EXPECT_EQ(actual.un.t.c, expected.un.t.c);
//    EXPECT_EQ(actual.un.c, expected.un.c);
}

TEST(regression, struct_with_union_in_union_as_return_type_test_2)
{
    struct StructWithUnionInUnion actual = struct_with_union_in_union_as_return_type(0, 0);
    struct StructWithUnionInUnion expected = {from_bytes<StructWithUnionInUnion::Union1>({-113, -62, -11, 40, 92, -113, -10, 63})};
//    EXPECT_EQ(actual.un.x, expected.un.x);
//    EXPECT_NEAR(actual.un.t.y, expected.un.t.y, utbot_abs_error);
//    EXPECT_EQ(actual.un.t.c, expected.un.t.c);
//    EXPECT_EQ(actual.un.c, expected.un.c);
}

TEST(regression, struct_with_union_in_union_as_return_type_test_3)
{
    struct StructWithUnionInUnion actual = struct_with_union_in_union_as_return_type(10, 7);
    struct StructWithUnionInUnion expected = {from_bytes<StructWithUnionInUnion::Union1>({-5, -1, -1, -1, -85, -85, -85, -85})};
//    EXPECT_EQ(actual.un.x, expected.un.x);
//    EXPECT_NEAR(actual.un.t.y, expected.un.t.y, utbot_abs_error);
//    EXPECT_EQ(actual.un.t.c, expected.un.t.c);
//    EXPECT_EQ(actual.un.c, expected.un.c);
}


TEST(regression, struct_with_struct_in_union_as_return_type_test_1)
{
    struct StructWithStructInUnion actual = struct_with_struct_in_union_as_return_type(0, 10);
    struct StructWithStructInUnion expected = {from_bytes<StructWithStructInUnion::DeepUnion>({-103, 0, 0, 0, 0, 0, 0, 0, -85, -85, -85, -85, -85, -85, -85, -85})};
//    EXPECT_EQ(actual.un.x, expected.un.x);
//    EXPECT_EQ(actual.un.ds.c, expected.un.ds.c);
//    EXPECT_NEAR(actual.un.ds.d, expected.un.ds.d, utbot_abs_error);
}

TEST(regression, struct_with_struct_in_union_as_return_type_test_2)
{
    struct StructWithStructInUnion actual = struct_with_struct_in_union_as_return_type(0, 0);
    struct StructWithStructInUnion expected = {from_bytes<StructWithStructInUnion::DeepUnion>({107, -85, -85, -85, -85, -85, -85, -85, -102, 8, 27, -98, 94, 41, -16, 63})};
//    EXPECT_EQ(actual.un.x, expected.un.x);
//    EXPECT_EQ(actual.un.ds.c, expected.un.ds.c);
//    EXPECT_NEAR(actual.un.ds.d, expected.un.ds.d, utbot_abs_error);
}

TEST(regression, struct_with_struct_in_union_as_return_type_test_3)
{
    struct StructWithStructInUnion actual = struct_with_struct_in_union_as_return_type(0, -1);
    struct StructWithStructInUnion expected = {from_bytes<StructWithStructInUnion::DeepUnion>({0, 0, 0, 0, 0, 0, 0, 0, -85, -85, -85, -85, -85, -85, -85, -85})};
//    EXPECT_EQ(actual.un.x, expected.un.x);
//    EXPECT_EQ(actual.un.ds.c, expected.un.ds.c);
//    EXPECT_NEAR(actual.un.ds.d, expected.un.ds.d, utbot_abs_error);
}

#pragma endregion
}