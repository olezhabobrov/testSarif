/*
 * This file is automatically generated by UnitTestBot. For further information see https://github.com/UnitTestBot/UTBotCpp
 * Copyright (c) Huawei Technologies Co., Ltd. 2012-2021. All rights reserved.
 */

#include "assertion_failures_test.h"

#include "gtest/gtest.h"
namespace UTBot {
static const float utbot_abs_error = 1e-6;


#pragma region error
TEST(error, buggy_function2_test_1)
{
    buggy_function2(7);
}

TEST(error, buggy_function2_test_2)
{
    buggy_function2(0);
}

#pragma endregion
}
