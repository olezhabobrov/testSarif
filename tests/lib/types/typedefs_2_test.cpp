/*
 * This file is automatically generated by UnitTestBot. For further information see https://github.com/UnitTestBot/UTBotCpp
 * Copyright (c) Huawei Technologies Co., Ltd. 2012-2021. All rights reserved.
 */

#include "typedefs_2_test.h"

#include "gtest/gtest.h"
namespace UTBot {
static const float utbot_abs_error = 1e-6;


#pragma region regression

TEST(regression, enumSign1ToInt_test_1)
{
    int actual = enumSign1ToInt(NEG1);
    EXPECT_EQ(-1, actual);
}

TEST(regression, enumSign1ToInt_test_2)
{
    int actual = enumSign1ToInt(POS1);
    EXPECT_EQ(1, actual);
}

TEST(regression, enumSign1ToInt_test_3)
{
    int actual = enumSign1ToInt(ZER1);
    EXPECT_EQ(0, actual);
}


TEST(regression, intToSign1_test_1)
{
    enum __Sign actual = intToSign1(1);
    EXPECT_EQ(POS1, actual);
}

TEST(regression, intToSign1_test_2)
{
    enum __Sign actual = intToSign1(-10);
    EXPECT_EQ(NEG1, actual);
}

TEST(regression, intToSign1_test_3)
{
    enum __Sign actual = intToSign1(0);
    EXPECT_EQ(ZER1, actual);
}


TEST(regression, enumSign2ToInt_test_1)
{
    int actual = enumSign2ToInt(NEG2);
    EXPECT_EQ(-1, actual);
}

TEST(regression, enumSign2ToInt_test_2)
{
    int actual = enumSign2ToInt(POS2);
    EXPECT_EQ(1, actual);
}

TEST(regression, enumSign2ToInt_test_3)
{
    int actual = enumSign2ToInt(ZER2);
    EXPECT_EQ(0, actual);
}


TEST(regression, intToSign2_test_1)
{
    Sign2 actual = intToSign2(1);
    EXPECT_EQ(POS2, actual);
}

TEST(regression, intToSign2_test_2)
{
    Sign2 actual = intToSign2(-9);
    EXPECT_EQ(NEG2, actual);
}

TEST(regression, intToSign2_test_3)
{
    Sign2 actual = intToSign2(0);
    EXPECT_EQ(ZER2, actual);
}

#pragma endregion
}
