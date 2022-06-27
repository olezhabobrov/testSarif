/*
 * This file is automatically generated by UnitTestBot. For further information seehttps://unittestbot.org
 */

#include "array-sort_dot_c_test.h"

#include "gtest/gtest.h"
namespace UTBot {
static const float utbot_abs_error = 1e-6;

typedef int (*sort_array_with_comparator_cmp_arg)(int, int);
int sort_array_with_comparator_cmp_symbolic[10];
int _sort_array_with_comparator_cmp_stub(int param1, int param2) {
    static int firstTimeCall = 1;
    static int cntCall = 0;
    #ifdef KLEE_MODE
        if (firstTimeCall == 1) {
            firstTimeCall = 0;
            klee_make_symbolic(&sort_array_with_comparator_cmp_symbolic, sizeof(sort_array_with_comparator_cmp_symbolic), "sort_array_with_comparator_cmp_symbolic");
            for (int it_118_0 = 0; it_118_0 < 10; it_118_0 ++) {
                klee_prefer_cex(sort_array_with_comparator_cmp_symbolic, sort_array_with_comparator_cmp_symbolic[it_118_0] >= -10  & sort_array_with_comparator_cmp_symbolic[it_118_0] <= 10);
            }
        }
    #endif
    if (cntCall == 10) {
        cntCall--;
    }
    return sort_array_with_comparator_cmp_symbolic[cntCall++];
}



#pragma region regression
TEST(regression, sort_array_test_1)
{
    int arr[10] = {-1, 0, 0, 10, -2, 0, 0, 0, 0, 0};
    int actual = sort_array(arr, 5);
    EXPECT_EQ(-1, actual);
    int expected_arr[10] = {-1, -2, 0, 0, 10, 0, 0, 0, 0, 0};
    for (int it_113_0 = 0; it_113_0 < 10; it_113_0 ++) {
        EXPECT_EQ(expected_arr[it_113_0], arr[it_113_0]);
    }
}

TEST(regression, sort_array_test_2)
{
    int arr[10] = {0, 6, -1, -2, 0, 0, 0, 0, 0, 0};
    int actual = sort_array(arr, 4);
    EXPECT_EQ(-1, actual);
    int expected_arr[10] = {-1, -2, 0, 6, 0, 0, 0, 0, 0, 0};
    for (int it_114_0 = 0; it_114_0 < 10; it_114_0 ++) {
        EXPECT_EQ(expected_arr[it_114_0], arr[it_114_0]);
    }
}

TEST(regression, sort_array_test_3)
{
    int arr[10] = {1, 1, 0, 1, 0, 0, 0, 0, 0, 0};
    int actual = sort_array(arr, 4);
    EXPECT_EQ(1, actual);
    int expected_arr[10] = {0, 1, 1, 1, 0, 0, 0, 0, 0, 0};
    for (int it_115_0 = 0; it_115_0 < 10; it_115_0 ++) {
        EXPECT_EQ(expected_arr[it_115_0], arr[it_115_0]);
    }
}

TEST(regression, sort_array_test_4)
{
    int arr[10] = {0, 0, 0, 0, 0, 0, 0, 0, 0, 0};
    int actual = sort_array(arr, 4);
    EXPECT_EQ(1, actual);
    int expected_arr[10] = {0, 0, 0, 0, 0, 0, 0, 0, 0, 0};
    for (int it_116_0 = 0; it_116_0 < 10; it_116_0 ++) {
        EXPECT_EQ(expected_arr[it_116_0], arr[it_116_0]);
    }
}

TEST(regression, sort_array_test_5)
{
    int arr[10] = {0, 0, 0, 0, 0, 0, 0, 0, 0, 0};
    int actual = sort_array(arr, 0);
    EXPECT_EQ(0, actual);
    int expected_arr[10] = {0, 0, 0, 0, 0, 0, 0, 0, 0, 0};
    for (int it_117_0 = 0; it_117_0 < 10; it_117_0 ++) {
        EXPECT_EQ(expected_arr[it_117_0], arr[it_117_0]);
    }
}

TEST(regression, sort_array_with_comparator_test_1)
{
    int arr[10] = {0, 0, 0, 0, 0, 0, 0, 0, 0, 0};
    int actual = sort_array_with_comparator(arr, 4, _sort_array_with_comparator_cmp_stub);
    EXPECT_EQ(-1, actual);
    int expected_arr[10] = {0, 0, 0, 0, 0, 0, 0, 0, 0, 0};
    for (int it_119_0 = 0; it_119_0 < 10; it_119_0 ++) {
        EXPECT_EQ(expected_arr[it_119_0], arr[it_119_0]);
    }
}

TEST(regression, sort_array_with_comparator_test_2)
{
    int arr[10] = {0, 0, 0, 0, 0, 0, 0, 0, 0, 0};
    int actual = sort_array_with_comparator(arr, 4, _sort_array_with_comparator_cmp_stub);
    EXPECT_EQ(-1, actual);
    int expected_arr[10] = {0, 0, 0, 0, 0, 0, 0, 0, 0, 0};
    for (int it_120_0 = 0; it_120_0 < 10; it_120_0 ++) {
        EXPECT_EQ(expected_arr[it_120_0], arr[it_120_0]);
    }
}

TEST(regression, sort_array_with_comparator_test_3)
{
    int arr[10] = {0, 0, 0, 0, 0, 0, 0, 0, 0, 0};
    int actual = sort_array_with_comparator(arr, 5, _sort_array_with_comparator_cmp_stub);
    EXPECT_EQ(1, actual);
    int expected_arr[10] = {0, 0, 0, 0, 0, 0, 0, 0, 0, 0};
    for (int it_121_0 = 0; it_121_0 < 10; it_121_0 ++) {
        EXPECT_EQ(expected_arr[it_121_0], arr[it_121_0]);
    }
}

TEST(regression, sort_array_with_comparator_test_4)
{
    int arr[10] = {0, 0, 0, 0, 0, 0, 0, 0, 0, 0};
    int actual = sort_array_with_comparator(arr, 4, _sort_array_with_comparator_cmp_stub);
    EXPECT_EQ(1, actual);
    int expected_arr[10] = {0, 0, 0, 0, 0, 0, 0, 0, 0, 0};
    for (int it_122_0 = 0; it_122_0 < 10; it_122_0 ++) {
        EXPECT_EQ(expected_arr[it_122_0], arr[it_122_0]);
    }
}

TEST(regression, sort_array_with_comparator_test_5)
{
    int arr[10] = {0, 0, 0, 0, 0, 0, 0, 0, 0, 0};
    int actual = sort_array_with_comparator(arr, 0, _sort_array_with_comparator_cmp_stub);
    EXPECT_EQ(0, actual);
    int expected_arr[10] = {0, 0, 0, 0, 0, 0, 0, 0, 0, 0};
    for (int it_123_0 = 0; it_123_0 < 10; it_123_0 ++) {
        EXPECT_EQ(expected_arr[it_123_0], arr[it_123_0]);
    }
}

#pragma endregion
#pragma region error
TEST(error, sort_array_test_6)
{
    int arr[10] = {0, -1, -1, -1, -1, -1, -1, -1, -1, -1};
    sort_array(arr, 1024);
}

TEST(error, sort_array_with_comparator_test_6)
{
    int arr[10] = {0, 0, 0, 0, 0, 0, 0, 0, 0, 0};
    sort_array_with_comparator(arr, 67108864, _sort_array_with_comparator_cmp_stub);
}

#pragma endregion
}
