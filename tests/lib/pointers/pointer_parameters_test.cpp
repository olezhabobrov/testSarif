/*
 * This file is automatically generated by UnitTestBot. For further information see https://github.com/UnitTestBot/UTBotCpp
 * Copyright (c) Huawei Technologies Co., Ltd. 2012-2021. All rights reserved.
 */

#include "pointer_parameters_test.h"

#include "gtest/gtest.h"
namespace UTBot {
static const float utbot_abs_error = 1e-6;


#pragma region regression

TEST(regression, isworld_test_1)
{
    unsigned char a = 97;
    int actual = isworld(&a);
    EXPECT_EQ(0, actual);
}

#pragma endregion
#pragma region error
TEST(error, isworld_test_2)
{
    unsigned char a = 119;
    isworld(&a);
}

#pragma endregion
}
