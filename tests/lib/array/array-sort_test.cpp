/*
 * This file is automatically generated by UnitTestBot. For further information see https://github.com/UnitTestBot/UTBotCpp
 * Copyright (c) Huawei Technologies Co., Ltd. 2012-2021. All rights reserved.
 */

#include "array-sort_test.h"

#include "gtest/gtest.h"
namespace UTBot {
static const float utbot_abs_error = 1e-6;


#pragma region regression

TEST(regression, sort_array_test_1)
{
    __attribute__ ((aligned(1))) int arr[10] = {1, 5, 5, 0, 0, 0, 0, 0, 0, 0};
    int actual = sort_array(arr, 4);
    EXPECT_EQ(-1, actual);
    int expected_arr[10] = {1, 0, 5, 5, 0, 0, 0, 0, 0, 0};
    for (int it_3_0 = 0; it_3_0 < 10; it_3_0 ++) {
        EXPECT_EQ(expected_arr[it_3_0], arr[it_3_0]);
    }
}

TEST(regression, sort_array_test_2)
{
    __attribute__ ((aligned(1))) int arr[10] = {0, 0, 0, 0, 0, 0, 0, 0, 0, 0};
    int actual = sort_array(arr, 4);
    EXPECT_EQ(1, actual);
    int expected_arr[10] = {0, 0, 0, 0, 0, 0, 0, 0, 0, 0};
    for (int it_3_0 = 0; it_3_0 < 10; it_3_0 ++) {
        EXPECT_EQ(expected_arr[it_3_0], arr[it_3_0]);
    }
}

TEST(regression, sort_array_test_3)
{
    __attribute__ ((aligned(1))) int arr[10] = {0, 0, 0, 0, 0, 0, 0, 0, 0, 0};
    int actual = sort_array(arr, 0);
    EXPECT_EQ(0, actual);
    int expected_arr[10] = {0, 0, 0, 0, 0, 0, 0, 0, 0, 0};
    for (int it_3_0 = 0; it_3_0 < 10; it_3_0 ++) {
        EXPECT_EQ(expected_arr[it_3_0], arr[it_3_0]);
    }
}

typedef int (*sort_array_with_comparator_cmp_arg)(int, int);
int cmp_symbolic[10];
int _sort_array_with_comparator_cmp_stub(int param1, int param2) {
    static int firstTimeCall = 1;
    static int cntCall = 0;
    #ifdef KLEE_MODE
        if (firstTimeCall == 1) {
            firstTimeCall = 0;
            klee_make_symbolic(&cmp_symbolic, sizeof(cmp_symbolic), "cmp_symbolic");
            for (int it_12_0 = 0; it_12_0 < 10; it_12_0 ++) {
                klee_prefer_cex(cmp_symbolic, cmp_symbolic[it_12_0] >= -10  & cmp_symbolic[it_12_0] <= 10);
            }
        }
    #endif
    if (cntCall == 10) {
        cntCall--;
    }
    return cmp_symbolic[cntCall++];
}


TEST(regression, sort_array_with_comparator_test_1)
{
    __attribute__ ((aligned(1))) int arr[10] = {0, 0, 0, 0, 0, 0, 0, 0, 0, 0};
    int cmp_symbolic_buffer[10] = {1, 2, 1, 2, 2, -1, 2, 1, 2, 2};
    memcpy((void *) cmp_symbolic, cmp_symbolic_buffer, sizeof(cmp_symbolic_buffer));
    int actual = sort_array_with_comparator(arr, 5, _sort_array_with_comparator_cmp_stub);
    EXPECT_EQ(1, actual);
    int expected_arr[10] = {0, 0, 0, 0, 0, 0, 0, 0, 0, 0};
    for (int it_3_0 = 0; it_3_0 < 10; it_3_0 ++) {
        EXPECT_EQ(expected_arr[it_3_0], arr[it_3_0]);
    }
}

TEST(regression, sort_array_with_comparator_test_2)
{
    __attribute__ ((aligned(1))) int arr[10] = {0, 0, 0, 0, 0, 0, 0, 0, 0, 0};
    int actual = sort_array_with_comparator(arr, 0, _sort_array_with_comparator_cmp_stub);
    EXPECT_EQ(0, actual);
    int expected_arr[10] = {0, 0, 0, 0, 0, 0, 0, 0, 0, 0};
    for (int it_3_0 = 0; it_3_0 < 10; it_3_0 ++) {
        EXPECT_EQ(expected_arr[it_3_0], arr[it_3_0]);
    }
}

TEST(regression, sort_array_with_comparator_test_3)
{
    __attribute__ ((aligned(1))) int arr[10] = {0, 0, 0, 0, 0, 0, 0, 0, 0, 0};
    int cmp_symbolic_buffer[10] = {1, 2, 1, 2, 2, -1, 0, 1, 2, 0};
    memcpy((void *) cmp_symbolic, cmp_symbolic_buffer, sizeof(cmp_symbolic_buffer));
    int actual = sort_array_with_comparator(arr, 4, _sort_array_with_comparator_cmp_stub);
    EXPECT_EQ(-1, actual);
    int expected_arr[10] = {0, 0, 0, 0, 0, 0, 0, 0, 0, 0};
    for (int it_3_0 = 0; it_3_0 < 10; it_3_0 ++) {
        EXPECT_EQ(expected_arr[it_3_0], arr[it_3_0]);
    }
}

TEST(regression, sort_array_with_comparator_test_4)
{
    __attribute__ ((aligned(1))) int arr[10] = {0, 0, 0, 0, 0, 0, 0, 0, 0, 0};
    int cmp_symbolic_buffer[10] = {1, 2, 1, 2, 2, -1, 2, 1, 0, 0};
    memcpy((void *) cmp_symbolic, cmp_symbolic_buffer, sizeof(cmp_symbolic_buffer));
    int actual = sort_array_with_comparator(arr, 4, _sort_array_with_comparator_cmp_stub);
    EXPECT_EQ(-1, actual);
    int expected_arr[10] = {0, 0, 0, 0, 0, 0, 0, 0, 0, 0};
    for (int it_3_0 = 0; it_3_0 < 10; it_3_0 ++) {
        EXPECT_EQ(expected_arr[it_3_0], arr[it_3_0]);
    }
}

TEST(regression, sort_array_with_comparator_test_5)
{
    __attribute__ ((aligned(1))) int arr[10] = {0, 0, 0, 0, 0, 0, 0, 0, 0, 0};
    int cmp_symbolic_buffer[10] = {1, 2, 1, 2, 2, -1, 2, 1, 2, 0};
    memcpy((void *) cmp_symbolic, cmp_symbolic_buffer, sizeof(cmp_symbolic_buffer));
    int actual = sort_array_with_comparator(arr, 4, _sort_array_with_comparator_cmp_stub);
    EXPECT_EQ(1, actual);
    int expected_arr[10] = {0, 0, 0, 0, 0, 0, 0, 0, 0, 0};
    for (int it_3_0 = 0; it_3_0 < 10; it_3_0 ++) {
        EXPECT_EQ(expected_arr[it_3_0], arr[it_3_0]);
    }
}

#pragma endregion
#pragma region error
TEST(error, sort_array_test_4)
{
    __attribute__ ((aligned(1))) int arr[10] = {0, -1, -1, -1, -1, -1, -1, -1, -1, -1};
    sort_array(arr, 525312);
    int expected_arr[10] = {0, 0, 0, 0, 0, 0, 0, 0, 0, 0};
    for (int it_3_0 = 0; it_3_0 < 10; it_3_0 ++) {
        EXPECT_EQ(expected_arr[it_3_0], arr[it_3_0]);
    }
}

TEST(error, sort_array_with_comparator_test_6)
{
    __attribute__ ((aligned(1))) int arr[10] = {0, 0, 0, 0, 0, 0, 0, 0, 0, 0};
    int cmp_symbolic_buffer[10] = {1, 2, 1, 2, 2, -1, 2, 1, 2, 0};
    memcpy((void *) cmp_symbolic, cmp_symbolic_buffer, sizeof(cmp_symbolic_buffer));
    sort_array_with_comparator(arr, 268435456, _sort_array_with_comparator_cmp_stub);
    int expected_arr[10] = {0, 0, 0, 0, 0, 0, 0, 0, 0, 0};
    for (int it_3_0 = 0; it_3_0 < 10; it_3_0 ++) {
        EXPECT_EQ(expected_arr[it_3_0], arr[it_3_0]);
    }
}

#pragma endregion
}
