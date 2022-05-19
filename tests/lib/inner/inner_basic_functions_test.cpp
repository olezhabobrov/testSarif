/*
 * This file is automatically generated by UnitTestBot. For further information see https://github.com/UnitTestBot/UTBotCpp
 * Copyright (c) Huawei Technologies Co., Ltd. 2012-2021. All rights reserved.
 */

#include "inner_basic_functions_test.h"

#include "gtest/gtest.h"
namespace UTBot {
static const float utbot_abs_error = 1e-6;
// Some tests for function 'sum_up_to' were skipped, as execution of function is out of timeout.



#pragma region regression

TEST(regression, sum_up_to_test_1)
{
    int actual = sum_up_to(0U);
    EXPECT_EQ(0, actual);
}


TEST(regression, median_test_1)
{
    int actual = median(0, 0, 0);
    EXPECT_EQ(0, actual);
}

TEST(regression, median_test_2)
{
    int actual = median(-3, 7, 7);
    EXPECT_EQ(7, actual);
}

TEST(regression, median_test_3)
{
    int actual = median(-5, -4, -3);
    EXPECT_EQ(-4, actual);
}

#pragma endregion
}