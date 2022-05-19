/*
 * This file is automatically generated by UnitTestBot. For further information see https://github.com/UnitTestBot/UTBotCpp
 * Copyright (c) Huawei Technologies Co., Ltd. 2012-2021. All rights reserved.
 */

#include "multi_arrays_test.h"

#include "gtest/gtest.h"
namespace UTBot {
static const float utbot_abs_error = 1e-6;


#pragma region regression

TEST(regression, kek_test_1)
{
    __attribute__ ((aligned(1))) int a[2][2] = {{0, 0}, {0, 0}};
    int actual = kek(a);
    EXPECT_EQ(1, actual);
    int expected_a[2][2] = {0, 0, 0, 0};
    for (int it_1_0 = 0; it_1_0 < 2; it_1_0 ++) {
        for (int it_1_1 = 0; it_1_1 < 2; it_1_1 ++) {
            EXPECT_EQ(expected_a[it_1_0][it_1_1], a[it_1_0][it_1_1]);
        }
    }
}


TEST(regression, sumSign_test_1)
{
    __attribute__ ((aligned(1))) int a[2][2] = {{0, 10}, {5, 1}};
    int actual = sumSign(a);
    EXPECT_EQ(1, actual);
    int expected_a[2][2] = {0, 10, 5, 1};
    for (int it_1_0 = 0; it_1_0 < 2; it_1_0 ++) {
        for (int it_1_1 = 0; it_1_1 < 2; it_1_1 ++) {
            EXPECT_EQ(expected_a[it_1_0][it_1_1], a[it_1_0][it_1_1]);
        }
    }
}

TEST(regression, sumSign_test_2)
{
    __attribute__ ((aligned(1))) int a[2][2] = {{0, -10}, {0, 1}};
    int actual = sumSign(a);
    EXPECT_EQ(-1, actual);
    int expected_a[2][2] = {0, -10, 0, 1};
    for (int it_1_0 = 0; it_1_0 < 2; it_1_0 ++) {
        for (int it_1_1 = 0; it_1_1 < 2; it_1_1 ++) {
            EXPECT_EQ(expected_a[it_1_0][it_1_1], a[it_1_0][it_1_1]);
        }
    }
}

TEST(regression, sumSign_test_3)
{
    __attribute__ ((aligned(1))) int a[2][2] = {{0, 0}, {0, 0}};
    int actual = sumSign(a);
    EXPECT_EQ(0, actual);
    int expected_a[2][2] = {0, 0, 0, 0};
    for (int it_1_0 = 0; it_1_0 < 2; it_1_0 ++) {
        for (int it_1_1 = 0; it_1_1 < 2; it_1_1 ++) {
            EXPECT_EQ(expected_a[it_1_0][it_1_1], a[it_1_0][it_1_1]);
        }
    }
}


TEST(regression, value_test_1)
{
    __attribute__ ((aligned(1))) int a[2][3] = {{0, 0, 0}, {0, 0, 0}};
    int actual = value(a);
    EXPECT_EQ(-1, actual);
    int expected_a[2][3] = {0, 0, 0, 0, 0, 0};
    for (int it_1_0 = 0; it_1_0 < 2; it_1_0 ++) {
        for (int it_1_1 = 0; it_1_1 < 3; it_1_1 ++) {
            EXPECT_EQ(expected_a[it_1_0][it_1_1], a[it_1_0][it_1_1]);
        }
    }
}

TEST(regression, value_test_2)
{
    __attribute__ ((aligned(1))) int a[2][3] = {{0, 1, 0}, {0, 0, 0}};
    int actual = value(a);
    EXPECT_EQ(1, actual);
    int expected_a[2][3] = {0, 1, 0, 0, 0, 0};
    for (int it_1_0 = 0; it_1_0 < 2; it_1_0 ++) {
        for (int it_1_1 = 0; it_1_1 < 3; it_1_1 ++) {
            EXPECT_EQ(expected_a[it_1_0][it_1_1], a[it_1_0][it_1_1]);
        }
    }
}

TEST(regression, value_test_3)
{
    __attribute__ ((aligned(1))) int a[2][3] = {{0, 0, 0}, {1, 0, 0}};
    int actual = value(a);
    EXPECT_EQ(3, actual);
    int expected_a[2][3] = {0, 0, 0, 1, 0, 0};
    for (int it_1_0 = 0; it_1_0 < 2; it_1_0 ++) {
        for (int it_1_1 = 0; it_1_1 < 3; it_1_1 ++) {
            EXPECT_EQ(expected_a[it_1_0][it_1_1], a[it_1_0][it_1_1]);
        }
    }
}

TEST(regression, value_test_4)
{
    __attribute__ ((aligned(1))) int a[2][3] = {{1, 0, 0}, {0, 0, 0}};
    int actual = value(a);
    EXPECT_EQ(0, actual);
    int expected_a[2][3] = {1, 0, 0, 0, 0, 0};
    for (int it_1_0 = 0; it_1_0 < 2; it_1_0 ++) {
        for (int it_1_1 = 0; it_1_1 < 3; it_1_1 ++) {
            EXPECT_EQ(expected_a[it_1_0][it_1_1], a[it_1_0][it_1_1]);
        }
    }
}


TEST(regression, value2_test_1)
{
    __attribute__ ((aligned(1))) int a[2][3] = {{0, 0, 0}, {0, 0, 0}};
    int actual = value2(a);
    EXPECT_EQ(-1, actual);
    int expected_a[2][3] = {0, 0, 0, 0, 0, 0};
    for (int it_1_0 = 0; it_1_0 < 2; it_1_0 ++) {
        for (int it_1_1 = 0; it_1_1 < 3; it_1_1 ++) {
            EXPECT_EQ(expected_a[it_1_0][it_1_1], a[it_1_0][it_1_1]);
        }
    }
}

TEST(regression, value2_test_2)
{
    __attribute__ ((aligned(1))) int a[2][3] = {{0, 1, 0}, {0, 0, 0}};
    int actual = value2(a);
    EXPECT_EQ(1, actual);
    int expected_a[2][3] = {0, 1, 0, 0, 0, 0};
    for (int it_1_0 = 0; it_1_0 < 2; it_1_0 ++) {
        for (int it_1_1 = 0; it_1_1 < 3; it_1_1 ++) {
            EXPECT_EQ(expected_a[it_1_0][it_1_1], a[it_1_0][it_1_1]);
        }
    }
}

TEST(regression, value2_test_3)
{
    __attribute__ ((aligned(1))) int a[2][3] = {{0, 0, 0}, {1, 0, 0}};
    int actual = value2(a);
    EXPECT_EQ(3, actual);
    int expected_a[2][3] = {0, 0, 0, 1, 0, 0};
    for (int it_1_0 = 0; it_1_0 < 2; it_1_0 ++) {
        for (int it_1_1 = 0; it_1_1 < 3; it_1_1 ++) {
            EXPECT_EQ(expected_a[it_1_0][it_1_1], a[it_1_0][it_1_1]);
        }
    }
}

TEST(regression, value2_test_4)
{
    __attribute__ ((aligned(1))) int a[2][3] = {{1, 0, 0}, {0, 0, 0}};
    int actual = value2(a);
    EXPECT_EQ(0, actual);
    int expected_a[2][3] = {1, 0, 0, 0, 0, 0};
    for (int it_1_0 = 0; it_1_0 < 2; it_1_0 ++) {
        for (int it_1_1 = 0; it_1_1 < 3; it_1_1 ++) {
            EXPECT_EQ(expected_a[it_1_0][it_1_1], a[it_1_0][it_1_1]);
        }
    }
}


TEST(regression, some_method_test_1)
{
    __attribute__ ((aligned(1))) int _pointer2d[2][2] = {{0, 0}, {0, 0}};
    int ** pointer2d = (int **) calloc(3, sizeof(int *));
    for (int it_9_0 = 0; it_9_0 < 2; it_9_0 ++) {
        pointer2d[it_9_0] = _pointer2d[it_9_0];
    }
    pointer2d[2] = NULL;
    int actual = some_method(pointer2d);
    EXPECT_EQ(-1, actual);
    int expected_pointer2d[2][2] = {0, 0, 0, 0};
    for (int it_10_0 = 0; it_10_0 < 2; it_10_0 ++) {
        for (int it_10_1 = 0; it_10_1 < 2; it_10_1 ++) {
            EXPECT_EQ(expected_pointer2d[it_10_0][it_10_1], _pointer2d[it_10_0][it_10_1]);
        }
    }
}

TEST(regression, some_method_test_2)
{
    __attribute__ ((aligned(1))) int _pointer2d[2][2] = {{0, 1}, {0, 0}};
    int ** pointer2d = (int **) calloc(3, sizeof(int *));
    for (int it_9_0 = 0; it_9_0 < 2; it_9_0 ++) {
        pointer2d[it_9_0] = _pointer2d[it_9_0];
    }
    pointer2d[2] = NULL;
    int actual = some_method(pointer2d);
    EXPECT_EQ(1, actual);
    int expected_pointer2d[2][2] = {0, 1, 0, 0};
    for (int it_10_0 = 0; it_10_0 < 2; it_10_0 ++) {
        for (int it_10_1 = 0; it_10_1 < 2; it_10_1 ++) {
            EXPECT_EQ(expected_pointer2d[it_10_0][it_10_1], _pointer2d[it_10_0][it_10_1]);
        }
    }
}

TEST(regression, some_method_test_3)
{
    __attribute__ ((aligned(1))) int _pointer2d[2][2] = {{0, 0}, {1, 0}};
    int ** pointer2d = (int **) calloc(3, sizeof(int *));
    for (int it_9_0 = 0; it_9_0 < 2; it_9_0 ++) {
        pointer2d[it_9_0] = _pointer2d[it_9_0];
    }
    pointer2d[2] = NULL;
    int actual = some_method(pointer2d);
    EXPECT_EQ(2, actual);
    int expected_pointer2d[2][2] = {0, 0, 1, 0};
    for (int it_10_0 = 0; it_10_0 < 2; it_10_0 ++) {
        for (int it_10_1 = 0; it_10_1 < 2; it_10_1 ++) {
            EXPECT_EQ(expected_pointer2d[it_10_0][it_10_1], _pointer2d[it_10_0][it_10_1]);
        }
    }
}

TEST(regression, some_method_test_4)
{
    __attribute__ ((aligned(1))) int _pointer2d[2][2] = {{1, 0}, {0, 0}};
    int ** pointer2d = (int **) calloc(3, sizeof(int *));
    for (int it_9_0 = 0; it_9_0 < 2; it_9_0 ++) {
        pointer2d[it_9_0] = _pointer2d[it_9_0];
    }
    pointer2d[2] = NULL;
    int actual = some_method(pointer2d);
    EXPECT_EQ(0, actual);
    int expected_pointer2d[2][2] = {1, 0, 0, 0};
    for (int it_10_0 = 0; it_10_0 < 2; it_10_0 ++) {
        for (int it_10_1 = 0; it_10_1 < 2; it_10_1 ++) {
            EXPECT_EQ(expected_pointer2d[it_10_0][it_10_1], _pointer2d[it_10_0][it_10_1]);
        }
    }
}


TEST(regression, return_sign_sum_test_1)
{
    int actual = return_sign_sum({{{{0, 0}, {0, 0}, {0, 0}}, {{0, 0}, {0, 0}, {0, 0}}}});
    EXPECT_EQ(0, actual);
}

TEST(regression, return_sign_sum_test_2)
{
    int actual = return_sign_sum({{{{8, -5}, {-2, -4}, {-8, 7}}, {{-2, -1}, {-10, -10}, {-2, 5}}}});
    EXPECT_EQ(-1, actual);
}

TEST(regression, return_sign_sum_test_3)
{
    int actual = return_sign_sum({{{{1, 0}, {0, 0}, {0, 0}}, {{0, 0}, {0, 0}, {0, 0}}}});
    EXPECT_EQ(1, actual);
}


TEST(regression, return_sign_sum_of_struct_array_test_1)
{
    __attribute__ ((aligned(1))) struct PointStruct arr[2][2] = {{{0, 1}, {1, 1}}, {{1, 1}, {1, 1}}};
    long long actual = return_sign_sum_of_struct_array(arr);
    EXPECT_EQ(7LL, actual);
    struct PointStruct expected_arr[2][2] = {{0, 1}, {1, 1}, {1, 1}, {1, 1}};
    for (int it_3_0 = 0; it_3_0 < 2; it_3_0 ++) {
        for (int it_3_1 = 0; it_3_1 < 2; it_3_1 ++) {
            EXPECT_EQ(expected_arr[it_3_0][it_3_1].x, arr[it_3_0][it_3_1].x);
            EXPECT_EQ(expected_arr[it_3_0][it_3_1].y, arr[it_3_0][it_3_1].y);
        }
    }
}

TEST(regression, return_sign_sum_of_struct_array_test_2)
{
    __attribute__ ((aligned(1))) struct PointStruct arr[2][2] = {{{1, 0}, {1, 1}}, {{1, 1}, {1, 1}}};
    long long actual = return_sign_sum_of_struct_array(arr);
    EXPECT_EQ(7LL, actual);
    struct PointStruct expected_arr[2][2] = {{1, 0}, {1, 1}, {1, 1}, {1, 1}};
    for (int it_3_0 = 0; it_3_0 < 2; it_3_0 ++) {
        for (int it_3_1 = 0; it_3_1 < 2; it_3_1 ++) {
            EXPECT_EQ(expected_arr[it_3_0][it_3_1].x, arr[it_3_0][it_3_1].x);
            EXPECT_EQ(expected_arr[it_3_0][it_3_1].y, arr[it_3_0][it_3_1].y);
        }
    }
}

TEST(regression, return_sign_sum_of_struct_array_test_3)
{
    __attribute__ ((aligned(1))) struct PointStruct arr[2][2] = {{{1, 1}, {1, 1}}, {{1, 1}, {1, 1}}};
    long long actual = return_sign_sum_of_struct_array(arr);
    EXPECT_EQ(8LL, actual);
    struct PointStruct expected_arr[2][2] = {{1, 1}, {1, 1}, {1, 1}, {1, 1}};
    for (int it_3_0 = 0; it_3_0 < 2; it_3_0 ++) {
        for (int it_3_1 = 0; it_3_1 < 2; it_3_1 ++) {
            EXPECT_EQ(expected_arr[it_3_0][it_3_1].x, arr[it_3_0][it_3_1].x);
            EXPECT_EQ(expected_arr[it_3_0][it_3_1].y, arr[it_3_0][it_3_1].y);
        }
    }
}


TEST(regression, point_quart_test_1)
{
    __attribute__ ((aligned(1))) struct PointStruct _point[2][2] = {{{0, 0}, {0, 0}}, {{0, 0}, {0, 0}}};
    struct PointStruct ** point = (struct PointStruct **) calloc(3, sizeof(struct PointStruct *));
    for (int it_5_0 = 0; it_5_0 < 2; it_5_0 ++) {
        point[it_5_0] = _point[it_5_0];
    }
    point[2] = NULL;
    int actual = point_quart(point);
    EXPECT_EQ(3, actual);
    struct PointStruct expected_point[2][2] = {{0, 0}, {0, 0}, {0, 0}, {0, 0}};
    for (int it_6_0 = 0; it_6_0 < 2; it_6_0 ++) {
        for (int it_6_1 = 0; it_6_1 < 2; it_6_1 ++) {
            EXPECT_EQ(expected_point[it_6_0][it_6_1].x, _point[it_6_0][it_6_1].x);
            EXPECT_EQ(expected_point[it_6_0][it_6_1].y, _point[it_6_0][it_6_1].y);
        }
    }
}

TEST(regression, point_quart_test_2)
{
    __attribute__ ((aligned(1))) struct PointStruct _point[2][2] = {{{0, 1}, {0, 0}}, {{0, 0}, {0, 0}}};
    struct PointStruct ** point = (struct PointStruct **) calloc(3, sizeof(struct PointStruct *));
    for (int it_5_0 = 0; it_5_0 < 2; it_5_0 ++) {
        point[it_5_0] = _point[it_5_0];
    }
    point[2] = NULL;
    int actual = point_quart(point);
    EXPECT_EQ(2, actual);
    struct PointStruct expected_point[2][2] = {{0, 1}, {0, 0}, {0, 0}, {0, 0}};
    for (int it_6_0 = 0; it_6_0 < 2; it_6_0 ++) {
        for (int it_6_1 = 0; it_6_1 < 2; it_6_1 ++) {
            EXPECT_EQ(expected_point[it_6_0][it_6_1].x, _point[it_6_0][it_6_1].x);
            EXPECT_EQ(expected_point[it_6_0][it_6_1].y, _point[it_6_0][it_6_1].y);
        }
    }
}

TEST(regression, point_quart_test_3)
{
    __attribute__ ((aligned(1))) struct PointStruct _point[2][2] = {{{1, 0}, {0, 0}}, {{0, 0}, {0, 0}}};
    struct PointStruct ** point = (struct PointStruct **) calloc(3, sizeof(struct PointStruct *));
    for (int it_5_0 = 0; it_5_0 < 2; it_5_0 ++) {
        point[it_5_0] = _point[it_5_0];
    }
    point[2] = NULL;
    int actual = point_quart(point);
    EXPECT_EQ(4, actual);
    struct PointStruct expected_point[2][2] = {{1, 0}, {0, 0}, {0, 0}, {0, 0}};
    for (int it_6_0 = 0; it_6_0 < 2; it_6_0 ++) {
        for (int it_6_1 = 0; it_6_1 < 2; it_6_1 ++) {
            EXPECT_EQ(expected_point[it_6_0][it_6_1].x, _point[it_6_0][it_6_1].x);
            EXPECT_EQ(expected_point[it_6_0][it_6_1].y, _point[it_6_0][it_6_1].y);
        }
    }
}

TEST(regression, point_quart_test_4)
{
    __attribute__ ((aligned(1))) struct PointStruct _point[2][2] = {{{1, 1}, {0, 0}}, {{0, 0}, {0, 0}}};
    struct PointStruct ** point = (struct PointStruct **) calloc(3, sizeof(struct PointStruct *));
    for (int it_5_0 = 0; it_5_0 < 2; it_5_0 ++) {
        point[it_5_0] = _point[it_5_0];
    }
    point[2] = NULL;
    int actual = point_quart(point);
    EXPECT_EQ(1, actual);
    struct PointStruct expected_point[2][2] = {{1, 1}, {0, 0}, {0, 0}, {0, 0}};
    for (int it_6_0 = 0; it_6_0 < 2; it_6_0 ++) {
        for (int it_6_1 = 0; it_6_1 < 2; it_6_1 ++) {
            EXPECT_EQ(expected_point[it_6_0][it_6_1].x, _point[it_6_0][it_6_1].x);
            EXPECT_EQ(expected_point[it_6_0][it_6_1].y, _point[it_6_0][it_6_1].y);
        }
    }
}


TEST(regression, return_struct_with_2d_array_test_1)
{
    struct IntArray actual = return_struct_with_2d_array(-10);
    struct IntArray expected = {{{-1, -2, -3, -4, -5}, {-1, -2, -3, -4, -5}}};
    for (int it_5_0 = 0; it_5_0 < 2; it_5_0 ++) {
        for (int it_5_1 = 0; it_5_1 < 5; it_5_1 ++) {
            EXPECT_EQ(expected.ints[it_5_0][it_5_1], actual.ints[it_5_0][it_5_1]);
        }
    }
}

TEST(regression, return_struct_with_2d_array_test_2)
{
    struct IntArray actual = return_struct_with_2d_array(0);
    struct IntArray expected = {{{0, 0, 0, 0, 0}, {0, 0, 0, 0, 0}}};
    for (int it_5_0 = 0; it_5_0 < 2; it_5_0 ++) {
        for (int it_5_1 = 0; it_5_1 < 5; it_5_1 ++) {
            EXPECT_EQ(expected.ints[it_5_0][it_5_1], actual.ints[it_5_0][it_5_1]);
        }
    }
}

TEST(regression, return_struct_with_2d_array_test_3)
{
    struct IntArray actual = return_struct_with_2d_array(1);
    struct IntArray expected = {{{1, 2, 3, 4, 5}, {1, 2, 3, 4, 5}}};
    for (int it_5_0 = 0; it_5_0 < 2; it_5_0 ++) {
        for (int it_5_1 = 0; it_5_1 < 5; it_5_1 ++) {
            EXPECT_EQ(expected.ints[it_5_0][it_5_1], actual.ints[it_5_0][it_5_1]);
        }
    }
}


TEST(regression, sum_matrix_test_1)
{
    int matrix_c_buffer[3][2] = {0, 0, 0, 0, 0, 0};
    memcpy((void *) matrix_c, matrix_c_buffer, sizeof(matrix_c_buffer));
    int matrix_a_buffer[3][2] = {0, 0, 0, 0, 0, 0};
    memcpy((void *) matrix_a, matrix_a_buffer, sizeof(matrix_a_buffer));
    int matrix_b_buffer[3][2] = {0, 0, 0, 0, 0, 0};
    memcpy((void *) matrix_b, matrix_b_buffer, sizeof(matrix_b_buffer));
    int actual = sum_matrix();
    EXPECT_EQ(0, actual);
    int expected_matrix_c[3][2] = {0, 0, 0, 0, 0, 0};
    for (int it_8_0 = 0; it_8_0 < 3; it_8_0 ++) {
        for (int it_8_1 = 0; it_8_1 < 2; it_8_1 ++) {
            EXPECT_EQ(expected_matrix_c[it_8_0][it_8_1], matrix_c[it_8_0][it_8_1]);
        }
    }
    int expected_matrix_a[3][2] = {0, 0, 0, 0, 0, 0};
    for (int it_8_0 = 0; it_8_0 < 3; it_8_0 ++) {
        for (int it_8_1 = 0; it_8_1 < 2; it_8_1 ++) {
            EXPECT_EQ(expected_matrix_a[it_8_0][it_8_1], matrix_a[it_8_0][it_8_1]);
        }
    }
    int expected_matrix_b[3][2] = {0, 0, 0, 0, 0, 0};
    for (int it_8_0 = 0; it_8_0 < 3; it_8_0 ++) {
        for (int it_8_1 = 0; it_8_1 < 2; it_8_1 ++) {
            EXPECT_EQ(expected_matrix_b[it_8_0][it_8_1], matrix_b[it_8_0][it_8_1]);
        }
    }
}

TEST(regression, sum_matrix_test_2)
{
    int matrix_c_buffer[3][2] = {0, 0, 0, 0, 0, 0};
    memcpy((void *) matrix_c, matrix_c_buffer, sizeof(matrix_c_buffer));
    int matrix_a_buffer[3][2] = {9, 10, -1, -2, -1, -2};
    memcpy((void *) matrix_a, matrix_a_buffer, sizeof(matrix_a_buffer));
    int matrix_b_buffer[3][2] = {-2, -1, -2, -2, -1, 3};
    memcpy((void *) matrix_b, matrix_b_buffer, sizeof(matrix_b_buffer));
    int actual = sum_matrix();
    EXPECT_EQ(8, actual);
    int expected_matrix_c[3][2] = {7, 9, -3, -4, -2, 1};
    for (int it_8_0 = 0; it_8_0 < 3; it_8_0 ++) {
        for (int it_8_1 = 0; it_8_1 < 2; it_8_1 ++) {
            EXPECT_EQ(expected_matrix_c[it_8_0][it_8_1], matrix_c[it_8_0][it_8_1]);
        }
    }
    int expected_matrix_a[3][2] = {9, 10, -1, -2, -1, -2};
    for (int it_8_0 = 0; it_8_0 < 3; it_8_0 ++) {
        for (int it_8_1 = 0; it_8_1 < 2; it_8_1 ++) {
            EXPECT_EQ(expected_matrix_a[it_8_0][it_8_1], matrix_a[it_8_0][it_8_1]);
        }
    }
    int expected_matrix_b[3][2] = {-2, -1, -2, -2, -1, 3};
    for (int it_8_0 = 0; it_8_0 < 3; it_8_0 ++) {
        for (int it_8_1 = 0; it_8_1 < 2; it_8_1 ++) {
            EXPECT_EQ(expected_matrix_b[it_8_0][it_8_1], matrix_b[it_8_0][it_8_1]);
        }
    }
}

TEST(regression, sum_matrix_test_3)
{
    int matrix_c_buffer[3][2] = {0, 0, 0, 0, 0, 0};
    memcpy((void *) matrix_c, matrix_c_buffer, sizeof(matrix_c_buffer));
    int matrix_a_buffer[3][2] = {-1, 0, 0, 0, 0, 0};
    memcpy((void *) matrix_a, matrix_a_buffer, sizeof(matrix_a_buffer));
    int matrix_b_buffer[3][2] = {0, 0, 0, 0, 0, 0};
    memcpy((void *) matrix_b, matrix_b_buffer, sizeof(matrix_b_buffer));
    int actual = sum_matrix();
    EXPECT_EQ(-1, actual);
    int expected_matrix_c[3][2] = {-1, 0, 0, 0, 0, 0};
    for (int it_8_0 = 0; it_8_0 < 3; it_8_0 ++) {
        for (int it_8_1 = 0; it_8_1 < 2; it_8_1 ++) {
            EXPECT_EQ(expected_matrix_c[it_8_0][it_8_1], matrix_c[it_8_0][it_8_1]);
        }
    }
    int expected_matrix_a[3][2] = {-1, 0, 0, 0, 0, 0};
    for (int it_8_0 = 0; it_8_0 < 3; it_8_0 ++) {
        for (int it_8_1 = 0; it_8_1 < 2; it_8_1 ++) {
            EXPECT_EQ(expected_matrix_a[it_8_0][it_8_1], matrix_a[it_8_0][it_8_1]);
        }
    }
    int expected_matrix_b[3][2] = {0, 0, 0, 0, 0, 0};
    for (int it_8_0 = 0; it_8_0 < 3; it_8_0 ++) {
        for (int it_8_1 = 0; it_8_1 < 2; it_8_1 ++) {
            EXPECT_EQ(expected_matrix_b[it_8_0][it_8_1], matrix_b[it_8_0][it_8_1]);
        }
    }
}


TEST(regression, count_dashes_test_1)
{
    char argv_buffer[2][2] = {{'c', 'c'}, {'c', 'c'}};
    memcpy((void *) argv, argv_buffer, sizeof(argv_buffer));
    argc = 0;
    int actual = count_dashes();
    EXPECT_EQ(-1, actual);
    char expected_argv = 'c';
    EXPECT_EQ(expected_argv, (**argv));
    int expected_argc = -1;
    EXPECT_EQ(expected_argc, argc);
}

TEST(regression, count_dashes_test_2)
{
    char argv_buffer[2][2] = {{'-', 'c'}, {'c', 'c'}};
    memcpy((void *) argv, argv_buffer, sizeof(argv_buffer));
    argc = 1;
    int actual = count_dashes();
    EXPECT_EQ(1, actual);
    char expected_argv = '-';
    EXPECT_EQ(expected_argv, (**argv));
    int expected_argc = -1;
    EXPECT_EQ(expected_argc, argc);
}

#pragma endregion
#pragma region error
TEST(error, count_dashes_test_3)
{
    char argv_buffer[2][2] = {{'-', 'c'}, {'-', 'c'}};
    memcpy((void *) argv, argv_buffer, sizeof(argv_buffer));
    argc = 4;
    count_dashes();
    char expected_argv = '\0';
    EXPECT_EQ(expected_argv, (**argv));
    int expected_argc = 0;
    EXPECT_EQ(expected_argc, argc);
}

#pragma endregion
}