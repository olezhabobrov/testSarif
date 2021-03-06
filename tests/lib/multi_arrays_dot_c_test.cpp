/*
 * This file is automatically generated by UnitTestBot. For further information seehttps://unittestbot.org
 */

#include "multi_arrays_dot_c_test.h"

#include "gtest/gtest.h"
namespace UTBot {
static const float utbot_abs_error = 1e-6;
// Some tests for function 'return_sign_sum_of_struct_array' were skipped, as execution of function is out of timeout.



#pragma region regression
TEST(regression, kek_test_1)
{
    int a[2][2] = {{0, 0}, {0, 0}};
    int actual = kek(a);
    EXPECT_EQ(1, actual);
    int expected_a[2][2] = {{0, 0}, {0, 0}};
    for (int it_123_0 = 0; it_123_0 < 2; it_123_0 ++) {
        for (int it_123_1 = 0; it_123_1 < 2; it_123_1 ++) {
            EXPECT_EQ(expected_a[it_123_0][it_123_1], a[it_123_0][it_123_1]);
        }
    }
}

TEST(regression, sumSign_test_1)
{
    int a[2][2] = {{0, 7}, {8, 1}};
    int actual = sumSign(a);
    EXPECT_EQ(1, actual);
    int expected_a[2][2] = {{0, 7}, {8, 1}};
    for (int it_124_0 = 0; it_124_0 < 2; it_124_0 ++) {
        for (int it_124_1 = 0; it_124_1 < 2; it_124_1 ++) {
            EXPECT_EQ(expected_a[it_124_0][it_124_1], a[it_124_0][it_124_1]);
        }
    }
}

TEST(regression, sumSign_test_2)
{
    int a[2][2] = {{0, 0}, {0, 0}};
    int actual = sumSign(a);
    EXPECT_EQ(0, actual);
    int expected_a[2][2] = {{0, 0}, {0, 0}};
    for (int it_125_0 = 0; it_125_0 < 2; it_125_0 ++) {
        for (int it_125_1 = 0; it_125_1 < 2; it_125_1 ++) {
            EXPECT_EQ(expected_a[it_125_0][it_125_1], a[it_125_0][it_125_1]);
        }
    }
}

TEST(regression, sumSign_test_3)
{
    int a[2][2] = {{4, 5}, {-3, -7}};
    int actual = sumSign(a);
    EXPECT_EQ(-1, actual);
    int expected_a[2][2] = {{4, 5}, {-3, -7}};
    for (int it_126_0 = 0; it_126_0 < 2; it_126_0 ++) {
        for (int it_126_1 = 0; it_126_1 < 2; it_126_1 ++) {
            EXPECT_EQ(expected_a[it_126_0][it_126_1], a[it_126_0][it_126_1]);
        }
    }
}

TEST(regression, value_test_1)
{
    int a[2][3] = {{1, 0, 0}, {0, 0, 0}};
    int actual = value(a);
    EXPECT_EQ(0, actual);
    int expected_a[2][3] = {{1, 0, 0}, {0, 0, 0}};
    for (int it_127_0 = 0; it_127_0 < 2; it_127_0 ++) {
        for (int it_127_1 = 0; it_127_1 < 3; it_127_1 ++) {
            EXPECT_EQ(expected_a[it_127_0][it_127_1], a[it_127_0][it_127_1]);
        }
    }
}

TEST(regression, value_test_2)
{
    int a[2][3] = {{0, 0, 0}, {1, 0, 0}};
    int actual = value(a);
    EXPECT_EQ(3, actual);
    int expected_a[2][3] = {{0, 0, 0}, {1, 0, 0}};
    for (int it_128_0 = 0; it_128_0 < 2; it_128_0 ++) {
        for (int it_128_1 = 0; it_128_1 < 3; it_128_1 ++) {
            EXPECT_EQ(expected_a[it_128_0][it_128_1], a[it_128_0][it_128_1]);
        }
    }
}

TEST(regression, value_test_3)
{
    int a[2][3] = {{0, 1, 0}, {0, 0, 0}};
    int actual = value(a);
    EXPECT_EQ(1, actual);
    int expected_a[2][3] = {{0, 1, 0}, {0, 0, 0}};
    for (int it_129_0 = 0; it_129_0 < 2; it_129_0 ++) {
        for (int it_129_1 = 0; it_129_1 < 3; it_129_1 ++) {
            EXPECT_EQ(expected_a[it_129_0][it_129_1], a[it_129_0][it_129_1]);
        }
    }
}

TEST(regression, value_test_4)
{
    int a[2][3] = {{0, 0, 0}, {0, 0, 0}};
    int actual = value(a);
    EXPECT_EQ(-1, actual);
    int expected_a[2][3] = {{0, 0, 0}, {0, 0, 0}};
    for (int it_130_0 = 0; it_130_0 < 2; it_130_0 ++) {
        for (int it_130_1 = 0; it_130_1 < 3; it_130_1 ++) {
            EXPECT_EQ(expected_a[it_130_0][it_130_1], a[it_130_0][it_130_1]);
        }
    }
}

TEST(regression, value2_test_1)
{
    int a[2][3] = {{1, 0, 0}, {0, 0, 0}};
    int actual = value2(a);
    EXPECT_EQ(0, actual);
    int expected_a[2][3] = {{1, 0, 0}, {0, 0, 0}};
    for (int it_131_0 = 0; it_131_0 < 2; it_131_0 ++) {
        for (int it_131_1 = 0; it_131_1 < 3; it_131_1 ++) {
            EXPECT_EQ(expected_a[it_131_0][it_131_1], a[it_131_0][it_131_1]);
        }
    }
}

TEST(regression, value2_test_2)
{
    int a[2][3] = {{0, 0, 0}, {1, 0, 0}};
    int actual = value2(a);
    EXPECT_EQ(3, actual);
    int expected_a[2][3] = {{0, 0, 0}, {1, 0, 0}};
    for (int it_132_0 = 0; it_132_0 < 2; it_132_0 ++) {
        for (int it_132_1 = 0; it_132_1 < 3; it_132_1 ++) {
            EXPECT_EQ(expected_a[it_132_0][it_132_1], a[it_132_0][it_132_1]);
        }
    }
}

TEST(regression, value2_test_3)
{
    int a[2][3] = {{0, 1, 0}, {0, 0, 0}};
    int actual = value2(a);
    EXPECT_EQ(1, actual);
    int expected_a[2][3] = {{0, 1, 0}, {0, 0, 0}};
    for (int it_133_0 = 0; it_133_0 < 2; it_133_0 ++) {
        for (int it_133_1 = 0; it_133_1 < 3; it_133_1 ++) {
            EXPECT_EQ(expected_a[it_133_0][it_133_1], a[it_133_0][it_133_1]);
        }
    }
}

TEST(regression, value2_test_4)
{
    int a[2][3] = {{0, 0, 0}, {0, 0, 0}};
    int actual = value2(a);
    EXPECT_EQ(-1, actual);
    int expected_a[2][3] = {{0, 0, 0}, {0, 0, 0}};
    for (int it_134_0 = 0; it_134_0 < 2; it_134_0 ++) {
        for (int it_134_1 = 0; it_134_1 < 3; it_134_1 ++) {
            EXPECT_EQ(expected_a[it_134_0][it_134_1], a[it_134_0][it_134_1]);
        }
    }
}

TEST(regression, some_method_test_1)
{
    int _pointer2d[2][2] = {{0, 1}, {0, 0}};
    int ** pointer2d = (int **) calloc(3, sizeof(int *));
    for (int it_135_0 = 0; it_135_0 < 2; it_135_0 ++) {
        pointer2d[it_135_0] = _pointer2d[it_135_0];
    }
    pointer2d[2] = NULL;
    int actual = some_method(pointer2d);
    EXPECT_EQ(1, actual);
    int expected_pointer2d[2][2] = {{0, 1}, {0, 0}};
    for (int it_136_0 = 0; it_136_0 < 2; it_136_0 ++) {
        for (int it_136_1 = 0; it_136_1 < 2; it_136_1 ++) {
            EXPECT_EQ(expected_pointer2d[it_136_0][it_136_1], _pointer2d[it_136_0][it_136_1]);
        }
    }
}

TEST(regression, some_method_test_2)
{
    int _pointer2d[2][2] = {{0, 0}, {0, 1}};
    int ** pointer2d = (int **) calloc(3, sizeof(int *));
    for (int it_137_0 = 0; it_137_0 < 2; it_137_0 ++) {
        pointer2d[it_137_0] = _pointer2d[it_137_0];
    }
    pointer2d[2] = NULL;
    int actual = some_method(pointer2d);
    EXPECT_EQ(3, actual);
    int expected_pointer2d[2][2] = {{0, 0}, {0, 1}};
    for (int it_138_0 = 0; it_138_0 < 2; it_138_0 ++) {
        for (int it_138_1 = 0; it_138_1 < 2; it_138_1 ++) {
            EXPECT_EQ(expected_pointer2d[it_138_0][it_138_1], _pointer2d[it_138_0][it_138_1]);
        }
    }
}

TEST(regression, some_method_test_3)
{
    int _pointer2d[2][2] = {{1, 0}, {0, 0}};
    int ** pointer2d = (int **) calloc(3, sizeof(int *));
    for (int it_139_0 = 0; it_139_0 < 2; it_139_0 ++) {
        pointer2d[it_139_0] = _pointer2d[it_139_0];
    }
    pointer2d[2] = NULL;
    int actual = some_method(pointer2d);
    EXPECT_EQ(0, actual);
    int expected_pointer2d[2][2] = {{1, 0}, {0, 0}};
    for (int it_140_0 = 0; it_140_0 < 2; it_140_0 ++) {
        for (int it_140_1 = 0; it_140_1 < 2; it_140_1 ++) {
            EXPECT_EQ(expected_pointer2d[it_140_0][it_140_1], _pointer2d[it_140_0][it_140_1]);
        }
    }
}

TEST(regression, some_method_test_4)
{
    int _pointer2d[2][2] = {{0, 0}, {1, 0}};
    int ** pointer2d = (int **) calloc(3, sizeof(int *));
    for (int it_141_0 = 0; it_141_0 < 2; it_141_0 ++) {
        pointer2d[it_141_0] = _pointer2d[it_141_0];
    }
    pointer2d[2] = NULL;
    int actual = some_method(pointer2d);
    EXPECT_EQ(2, actual);
    int expected_pointer2d[2][2] = {{0, 0}, {1, 0}};
    for (int it_142_0 = 0; it_142_0 < 2; it_142_0 ++) {
        for (int it_142_1 = 0; it_142_1 < 2; it_142_1 ++) {
            EXPECT_EQ(expected_pointer2d[it_142_0][it_142_1], _pointer2d[it_142_0][it_142_1]);
        }
    }
}

TEST(regression, some_method_test_5)
{
    int _pointer2d[2][2] = {{0, 0}, {0, 0}};
    int ** pointer2d = (int **) calloc(3, sizeof(int *));
    for (int it_143_0 = 0; it_143_0 < 2; it_143_0 ++) {
        pointer2d[it_143_0] = _pointer2d[it_143_0];
    }
    pointer2d[2] = NULL;
    int actual = some_method(pointer2d);
    EXPECT_EQ(-1, actual);
    int expected_pointer2d[2][2] = {{0, 0}, {0, 0}};
    for (int it_144_0 = 0; it_144_0 < 2; it_144_0 ++) {
        for (int it_144_1 = 0; it_144_1 < 2; it_144_1 ++) {
            EXPECT_EQ(expected_pointer2d[it_144_0][it_144_1], _pointer2d[it_144_0][it_144_1]);
        }
    }
}

TEST(regression, return_sign_sum_test_1)
{
    int actual = return_sign_sum({
        .a = {{{0, 0}, {0, 0}, {0, 0}}, {{0, 0}, {0, 0}, {0, 0}}}});
    EXPECT_EQ(0, actual);
}

TEST(regression, return_sign_sum_test_2)
{
    int actual = return_sign_sum({
        .a = {{{1, 0}, {0, 0}, {0, 0}}, {{0, 0}, {0, 0}, {0, 0}}}});
    EXPECT_EQ(1, actual);
}

TEST(regression, return_sign_sum_test_3)
{
    int actual = return_sign_sum({
        .a = {{{0, 2}, {-5, 6}, {1, -1}}, {{-9, -2}, {-1, -1}, {-1, 3}}}});
    EXPECT_EQ(-1, actual);
}

TEST(regression, return_sign_sum_of_struct_array_test_1)
{
    struct PointStruct arr[2][2] = {{{
        .x = 0,
        .y = 0}, {
        .x = 1,
        .y = 0}}, {{
        .x = 1,
        .y = 1}, {
        .x = 1,
        .y = 1}}};
    long long actual = return_sign_sum_of_struct_array(arr);
    EXPECT_EQ(5LL, actual);
    struct PointStruct expected_arr[2][2] = {{{
        .x = 0,
        .y = 0}, {
        .x = 1,
        .y = 0}}, {{
        .x = 1,
        .y = 1}, {
        .x = 1,
        .y = 1}}};
    for (int it_145_0 = 0; it_145_0 < 2; it_145_0 ++) {
        for (int it_145_1 = 0; it_145_1 < 2; it_145_1 ++) {
            EXPECT_EQ(expected_arr[it_145_0][it_145_1].x, arr[it_145_0][it_145_1].x);
            EXPECT_EQ(expected_arr[it_145_0][it_145_1].y, arr[it_145_0][it_145_1].y);
        }
    }
}

TEST(regression, return_sign_sum_of_struct_array_test_2)
{
    struct PointStruct arr[2][2] = {{{
        .x = 0,
        .y = 0}, {
        .x = 1,
        .y = 0}}, {{
        .x = 1,
        .y = 1}, {
        .x = 1,
        .y = 0}}};
    long long actual = return_sign_sum_of_struct_array(arr);
    EXPECT_EQ(4LL, actual);
    struct PointStruct expected_arr[2][2] = {{{
        .x = 0,
        .y = 0}, {
        .x = 1,
        .y = 0}}, {{
        .x = 1,
        .y = 1}, {
        .x = 1,
        .y = 0}}};
    for (int it_146_0 = 0; it_146_0 < 2; it_146_0 ++) {
        for (int it_146_1 = 0; it_146_1 < 2; it_146_1 ++) {
            EXPECT_EQ(expected_arr[it_146_0][it_146_1].x, arr[it_146_0][it_146_1].x);
            EXPECT_EQ(expected_arr[it_146_0][it_146_1].y, arr[it_146_0][it_146_1].y);
        }
    }
}

TEST(regression, point_quart_test_1)
{
    struct PointStruct _point[2][2] = {{{
        .x = 1,
        .y = 1}, {
        .x = 0,
        .y = 0}}, {{
        .x = 0,
        .y = 0}, {
        .x = 0,
        .y = 0}}};
    struct PointStruct ** point = (struct PointStruct **) calloc(3, sizeof(struct PointStruct *));
    for (int it_147_0 = 0; it_147_0 < 2; it_147_0 ++) {
        point[it_147_0] = _point[it_147_0];
    }
    point[2] = NULL;
    int actual = point_quart(point);
    EXPECT_EQ(1, actual);
    struct PointStruct expected_point[2][2] = {{{
        .x = 1,
        .y = 1}, {
        .x = 0,
        .y = 0}}, {{
        .x = 0,
        .y = 0}, {
        .x = 0,
        .y = 0}}};
    for (int it_148_0 = 0; it_148_0 < 2; it_148_0 ++) {
        for (int it_148_1 = 0; it_148_1 < 2; it_148_1 ++) {
            EXPECT_EQ(expected_point[it_148_0][it_148_1].x, _point[it_148_0][it_148_1].x);
            EXPECT_EQ(expected_point[it_148_0][it_148_1].y, _point[it_148_0][it_148_1].y);
        }
    }
}

TEST(regression, point_quart_test_2)
{
    struct PointStruct _point[2][2] = {{{
        .x = 0,
        .y = 1}, {
        .x = 0,
        .y = 0}}, {{
        .x = 0,
        .y = 0}, {
        .x = 0,
        .y = 0}}};
    struct PointStruct ** point = (struct PointStruct **) calloc(3, sizeof(struct PointStruct *));
    for (int it_149_0 = 0; it_149_0 < 2; it_149_0 ++) {
        point[it_149_0] = _point[it_149_0];
    }
    point[2] = NULL;
    int actual = point_quart(point);
    EXPECT_EQ(2, actual);
    struct PointStruct expected_point[2][2] = {{{
        .x = 0,
        .y = 1}, {
        .x = 0,
        .y = 0}}, {{
        .x = 0,
        .y = 0}, {
        .x = 0,
        .y = 0}}};
    for (int it_150_0 = 0; it_150_0 < 2; it_150_0 ++) {
        for (int it_150_1 = 0; it_150_1 < 2; it_150_1 ++) {
            EXPECT_EQ(expected_point[it_150_0][it_150_1].x, _point[it_150_0][it_150_1].x);
            EXPECT_EQ(expected_point[it_150_0][it_150_1].y, _point[it_150_0][it_150_1].y);
        }
    }
}

TEST(regression, point_quart_test_3)
{
    struct PointStruct _point[2][2] = {{{
        .x = 1,
        .y = 0}, {
        .x = 0,
        .y = 0}}, {{
        .x = 0,
        .y = 0}, {
        .x = 0,
        .y = 0}}};
    struct PointStruct ** point = (struct PointStruct **) calloc(3, sizeof(struct PointStruct *));
    for (int it_151_0 = 0; it_151_0 < 2; it_151_0 ++) {
        point[it_151_0] = _point[it_151_0];
    }
    point[2] = NULL;
    int actual = point_quart(point);
    EXPECT_EQ(4, actual);
    struct PointStruct expected_point[2][2] = {{{
        .x = 1,
        .y = 0}, {
        .x = 0,
        .y = 0}}, {{
        .x = 0,
        .y = 0}, {
        .x = 0,
        .y = 0}}};
    for (int it_152_0 = 0; it_152_0 < 2; it_152_0 ++) {
        for (int it_152_1 = 0; it_152_1 < 2; it_152_1 ++) {
            EXPECT_EQ(expected_point[it_152_0][it_152_1].x, _point[it_152_0][it_152_1].x);
            EXPECT_EQ(expected_point[it_152_0][it_152_1].y, _point[it_152_0][it_152_1].y);
        }
    }
}

TEST(regression, point_quart_test_4)
{
    struct PointStruct _point[2][2] = {{{
        .x = 0,
        .y = 0}, {
        .x = 0,
        .y = 0}}, {{
        .x = 0,
        .y = 0}, {
        .x = 0,
        .y = 0}}};
    struct PointStruct ** point = (struct PointStruct **) calloc(3, sizeof(struct PointStruct *));
    for (int it_153_0 = 0; it_153_0 < 2; it_153_0 ++) {
        point[it_153_0] = _point[it_153_0];
    }
    point[2] = NULL;
    int actual = point_quart(point);
    EXPECT_EQ(3, actual);
    struct PointStruct expected_point[2][2] = {{{
        .x = 0,
        .y = 0}, {
        .x = 0,
        .y = 0}}, {{
        .x = 0,
        .y = 0}, {
        .x = 0,
        .y = 0}}};
    for (int it_154_0 = 0; it_154_0 < 2; it_154_0 ++) {
        for (int it_154_1 = 0; it_154_1 < 2; it_154_1 ++) {
            EXPECT_EQ(expected_point[it_154_0][it_154_1].x, _point[it_154_0][it_154_1].x);
            EXPECT_EQ(expected_point[it_154_0][it_154_1].y, _point[it_154_0][it_154_1].y);
        }
    }
}

TEST(regression, return_struct_with_2d_array_test_1)
{
    struct IntArray actual = return_struct_with_2d_array(-10);
    struct IntArray expected = {
        .ints = {{-1, -2, -3, -4, -5}, {-1, -2, -3, -4, -5}}};
}

TEST(regression, return_struct_with_2d_array_test_2)
{
    struct IntArray actual = return_struct_with_2d_array(1);
    struct IntArray expected = {
        .ints = {{1, 2, 3, 4, 5}, {1, 2, 3, 4, 5}}};
}

TEST(regression, return_struct_with_2d_array_test_3)
{
    struct IntArray actual = return_struct_with_2d_array(0);
    struct IntArray expected = {
        .ints = {{0, 0, 0, 0, 0}, {0, 0, 0, 0, 0}}};
}

TEST(regression, sum_matrix_test_1)
{
    int matrix_c_buffer[3][2] = {{0, 0}, {0, 0}, {0, 0}};
    memcpy((void *) matrix_c, matrix_c_buffer, sizeof(matrix_c_buffer));
    int matrix_a_buffer[3][2] = {{0, 0}, {0, 0}, {0, 0}};
    memcpy((void *) matrix_a, matrix_a_buffer, sizeof(matrix_a_buffer));
    int matrix_b_buffer[3][2] = {{0, 0}, {0, 0}, {0, 0}};
    memcpy((void *) matrix_b, matrix_b_buffer, sizeof(matrix_b_buffer));
    int actual = sum_matrix();
    EXPECT_EQ(0, actual);
    int expected_matrix_c[3][2] = {{0, 0}, {0, 0}, {0, 0}};
    for (int it_155_0 = 0; it_155_0 < 3; it_155_0 ++) {
        for (int it_155_1 = 0; it_155_1 < 2; it_155_1 ++) {
            EXPECT_EQ(expected_matrix_c[it_155_0][it_155_1], matrix_c[it_155_0][it_155_1]);
        }
    }
    int expected_matrix_a[3][2] = {{0, 0}, {0, 0}, {0, 0}};
    for (int it_156_0 = 0; it_156_0 < 3; it_156_0 ++) {
        for (int it_156_1 = 0; it_156_1 < 2; it_156_1 ++) {
            EXPECT_EQ(expected_matrix_a[it_156_0][it_156_1], matrix_a[it_156_0][it_156_1]);
        }
    }
    int expected_matrix_b[3][2] = {{0, 0}, {0, 0}, {0, 0}};
    for (int it_157_0 = 0; it_157_0 < 3; it_157_0 ++) {
        for (int it_157_1 = 0; it_157_1 < 2; it_157_1 ++) {
            EXPECT_EQ(expected_matrix_b[it_157_0][it_157_1], matrix_b[it_157_0][it_157_1]);
        }
    }
}

TEST(regression, sum_matrix_test_2)
{
    int matrix_c_buffer[3][2] = {{0, 0}, {0, 0}, {0, 0}};
    memcpy((void *) matrix_c, matrix_c_buffer, sizeof(matrix_c_buffer));
    int matrix_a_buffer[3][2] = {{-1, 0}, {0, 0}, {0, 0}};
    memcpy((void *) matrix_a, matrix_a_buffer, sizeof(matrix_a_buffer));
    int matrix_b_buffer[3][2] = {{0, 0}, {0, 0}, {0, 0}};
    memcpy((void *) matrix_b, matrix_b_buffer, sizeof(matrix_b_buffer));
    int actual = sum_matrix();
    EXPECT_EQ(-1, actual);
    int expected_matrix_c[3][2] = {{-1, 0}, {0, 0}, {0, 0}};
    for (int it_158_0 = 0; it_158_0 < 3; it_158_0 ++) {
        for (int it_158_1 = 0; it_158_1 < 2; it_158_1 ++) {
            EXPECT_EQ(expected_matrix_c[it_158_0][it_158_1], matrix_c[it_158_0][it_158_1]);
        }
    }
    int expected_matrix_a[3][2] = {{-1, 0}, {0, 0}, {0, 0}};
    for (int it_159_0 = 0; it_159_0 < 3; it_159_0 ++) {
        for (int it_159_1 = 0; it_159_1 < 2; it_159_1 ++) {
            EXPECT_EQ(expected_matrix_a[it_159_0][it_159_1], matrix_a[it_159_0][it_159_1]);
        }
    }
    int expected_matrix_b[3][2] = {{0, 0}, {0, 0}, {0, 0}};
    for (int it_160_0 = 0; it_160_0 < 3; it_160_0 ++) {
        for (int it_160_1 = 0; it_160_1 < 2; it_160_1 ++) {
            EXPECT_EQ(expected_matrix_b[it_160_0][it_160_1], matrix_b[it_160_0][it_160_1]);
        }
    }
}

TEST(regression, sum_matrix_test_3)
{
    int matrix_c_buffer[3][2] = {{0, 0}, {0, 0}, {0, 0}};
    memcpy((void *) matrix_c, matrix_c_buffer, sizeof(matrix_c_buffer));
    int matrix_a_buffer[3][2] = {{2, 8}, {-1, -1}, {-2, -1}};
    memcpy((void *) matrix_a, matrix_a_buffer, sizeof(matrix_a_buffer));
    int matrix_b_buffer[3][2] = {{-1, -2}, {-1, -1}, {-2, 5}};
    memcpy((void *) matrix_b, matrix_b_buffer, sizeof(matrix_b_buffer));
    int actual = sum_matrix();
    EXPECT_EQ(3, actual);
    int expected_matrix_c[3][2] = {{1, 6}, {-2, -2}, {-4, 4}};
    for (int it_161_0 = 0; it_161_0 < 3; it_161_0 ++) {
        for (int it_161_1 = 0; it_161_1 < 2; it_161_1 ++) {
            EXPECT_EQ(expected_matrix_c[it_161_0][it_161_1], matrix_c[it_161_0][it_161_1]);
        }
    }
    int expected_matrix_a[3][2] = {{2, 8}, {-1, -1}, {-2, -1}};
    for (int it_162_0 = 0; it_162_0 < 3; it_162_0 ++) {
        for (int it_162_1 = 0; it_162_1 < 2; it_162_1 ++) {
            EXPECT_EQ(expected_matrix_a[it_162_0][it_162_1], matrix_a[it_162_0][it_162_1]);
        }
    }
    int expected_matrix_b[3][2] = {{-1, -2}, {-1, -1}, {-2, 5}};
    for (int it_163_0 = 0; it_163_0 < 3; it_163_0 ++) {
        for (int it_163_1 = 0; it_163_1 < 2; it_163_1 ++) {
            EXPECT_EQ(expected_matrix_b[it_163_0][it_163_1], matrix_b[it_163_0][it_163_1]);
        }
    }
}

TEST(regression, count_dashes_test_1)
{
    char argv_buffer[2][2] = {{'c', 'c'}, {'-', 'b'}};
    memcpy((void *) argv, argv_buffer, sizeof(argv_buffer));
    argc = 2;
    int actual = count_dashes();
    EXPECT_EQ(1, actual);
    char expected_argv = 'c';
    EXPECT_EQ(expected_argv, (**argv));
    int expected_argc = -1;
    EXPECT_EQ(expected_argc, argc);
}

TEST(regression, count_dashes_test_2)
{
    char argv_buffer[2][2] = {{'c', 'c'}, {'c', 'b'}};
    memcpy((void *) argv, argv_buffer, sizeof(argv_buffer));
    argc = 0;
    int actual = count_dashes();
    EXPECT_EQ(-1, actual);
    char expected_argv = 'c';
    EXPECT_EQ(expected_argv, (**argv));
    int expected_argc = -1;
    EXPECT_EQ(expected_argc, argc);
}

#pragma endregion
#pragma region error
TEST(error, count_dashes_test_3)
{
    char argv_buffer[2][2] = {{'c', 'c'}, {'-', 'b'}};
    memcpy((void *) argv, argv_buffer, sizeof(argv_buffer));
    argc = 10;
    count_dashes();
}

#pragma endregion
}
