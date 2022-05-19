/*
 * This file is automatically generated by UnitTestBot. For further information see https://github.com/UnitTestBot/UTBotCpp
 * Copyright (c) Huawei Technologies Co., Ltd. 2012-2021. All rights reserved.
 */

#include "main_test.h"

#include "gtest/gtest.h"
namespace UTBot {
static const float utbot_abs_error = 1e-6;


#pragma region regression

TEST(regression, main_test_1)
{
    __attribute__ ((aligned(1))) char _argv[2][2] = {{'c', 'c'}, {'c', 'c'}};
    char ** argv = (char **) calloc(3, sizeof(char *));
    for (int it_4_0 = 0; it_4_0 < 2; it_4_0 ++) {
        argv[it_4_0] = _argv[it_4_0];
    }
    argv[2] = NULL;
    int actual = main(0, argv);
    EXPECT_EQ(1, actual);
    char expected_argv[2][2] = {'c', 'c', 'c', 'c'};
    for (int it_5_0 = 0; it_5_0 < 2; it_5_0 ++) {
        for (int it_5_1 = 0; it_5_1 < 2; it_5_1 ++) {
            EXPECT_EQ(expected_argv[it_5_0][it_5_1], _argv[it_5_0][it_5_1]);
        }
    }
}

TEST(regression, main_test_2)
{
    __attribute__ ((aligned(1))) char _argv[2][2] = {{'c', 'c'}, {' ', 'q'}};
    char ** argv = (char **) calloc(3, sizeof(char *));
    for (int it_4_0 = 0; it_4_0 < 2; it_4_0 ++) {
        argv[it_4_0] = _argv[it_4_0];
    }
    argv[2] = NULL;
    int actual = main(2, argv);
    EXPECT_EQ(2, actual);
    char expected_argv[2][2] = {'c', 'c', ' ', 'q'};
    for (int it_5_0 = 0; it_5_0 < 2; it_5_0 ++) {
        for (int it_5_1 = 0; it_5_1 < 2; it_5_1 ++) {
            EXPECT_EQ(expected_argv[it_5_0][it_5_1], _argv[it_5_0][it_5_1]);
        }
    }
}

TEST(regression, main_test_3)
{
    __attribute__ ((aligned(1))) char _argv[2][2] = {{'c', 'c'}, {' ', '\0'}};
    char ** argv = (char **) calloc(3, sizeof(char *));
    for (int it_4_0 = 0; it_4_0 < 2; it_4_0 ++) {
        argv[it_4_0] = _argv[it_4_0];
    }
    argv[2] = NULL;
    int actual = main(2, argv);
    EXPECT_EQ(2, actual);
    char expected_argv[2][2] = {'c', 'c', ' ', '\0'};
    for (int it_5_0 = 0; it_5_0 < 2; it_5_0 ++) {
        for (int it_5_1 = 0; it_5_1 < 2; it_5_1 ++) {
            EXPECT_EQ(expected_argv[it_5_0][it_5_1], _argv[it_5_0][it_5_1]);
        }
    }
}

TEST(regression, main_test_4)
{
    __attribute__ ((aligned(1))) char _argv[2][2] = {{'c', 'c'}, {'1', '\0'}};
    char ** argv = (char **) calloc(3, sizeof(char *));
    for (int it_4_0 = 0; it_4_0 < 2; it_4_0 ++) {
        argv[it_4_0] = _argv[it_4_0];
    }
    argv[2] = NULL;
    int actual = main(2, argv);
    EXPECT_EQ(3, actual);
    char expected_argv[2][2] = {'c', 'c', '1', '\0'};
    for (int it_5_0 = 0; it_5_0 < 2; it_5_0 ++) {
        for (int it_5_1 = 0; it_5_1 < 2; it_5_1 ++) {
            EXPECT_EQ(expected_argv[it_5_0][it_5_1], _argv[it_5_0][it_5_1]);
        }
    }
}

TEST(regression, main_test_5)
{
    __attribute__ ((aligned(1))) char _argv[2][2] = {{'c', 'c'}, {'-', 'c'}};
    char ** argv = (char **) calloc(3, sizeof(char *));
    for (int it_4_0 = 0; it_4_0 < 2; it_4_0 ++) {
        argv[it_4_0] = _argv[it_4_0];
    }
    argv[2] = NULL;
    int actual = main(2, argv);
    EXPECT_EQ(2, actual);
    char expected_argv[2][2] = {'c', 'c', '-', 'c'};
    for (int it_5_0 = 0; it_5_0 < 2; it_5_0 ++) {
        for (int it_5_1 = 0; it_5_1 < 2; it_5_1 ++) {
            EXPECT_EQ(expected_argv[it_5_0][it_5_1], _argv[it_5_0][it_5_1]);
        }
    }
}

TEST(regression, main_test_6)
{
    __attribute__ ((aligned(1))) char _argv[2][2] = {{'c', 'c'}, {'4', '\0'}};
    char ** argv = (char **) calloc(3, sizeof(char *));
    for (int it_4_0 = 0; it_4_0 < 2; it_4_0 ++) {
        argv[it_4_0] = _argv[it_4_0];
    }
    argv[2] = NULL;
    int actual = main(2, argv);
    EXPECT_EQ(4, actual);
    char expected_argv[2][2] = {'c', 'c', '4', '\0'};
    for (int it_5_0 = 0; it_5_0 < 2; it_5_0 ++) {
        for (int it_5_1 = 0; it_5_1 < 2; it_5_1 ++) {
            EXPECT_EQ(expected_argv[it_5_0][it_5_1], _argv[it_5_0][it_5_1]);
        }
    }
}

TEST(regression, main_test_7)
{
    __attribute__ ((aligned(1))) char _argv[2][2] = {{'c', 'c'}, {'1', '<'}};
    char ** argv = (char **) calloc(3, sizeof(char *));
    for (int it_4_0 = 0; it_4_0 < 2; it_4_0 ++) {
        argv[it_4_0] = _argv[it_4_0];
    }
    argv[2] = NULL;
    int actual = main(2, argv);
    EXPECT_EQ(3, actual);
    char expected_argv[2][2] = {'c', 'c', '1', '<'};
    for (int it_5_0 = 0; it_5_0 < 2; it_5_0 ++) {
        for (int it_5_1 = 0; it_5_1 < 2; it_5_1 ++) {
            EXPECT_EQ(expected_argv[it_5_0][it_5_1], _argv[it_5_0][it_5_1]);
        }
    }
}

TEST(regression, main_test_8)
{
    __attribute__ ((aligned(1))) char _argv[2][2] = {{'c', 'c'}, {'-', '{'}};
    char ** argv = (char **) calloc(3, sizeof(char *));
    for (int it_4_0 = 0; it_4_0 < 2; it_4_0 ++) {
        argv[it_4_0] = _argv[it_4_0];
    }
    argv[2] = NULL;
    int actual = main(2, argv);
    EXPECT_EQ(2, actual);
    char expected_argv[2][2] = {'c', 'c', '-', '{'};
    for (int it_5_0 = 0; it_5_0 < 2; it_5_0 ++) {
        for (int it_5_1 = 0; it_5_1 < 2; it_5_1 ++) {
            EXPECT_EQ(expected_argv[it_5_0][it_5_1], _argv[it_5_0][it_5_1]);
        }
    }
}

TEST(regression, main_test_9)
{
    __attribute__ ((aligned(1))) char _argv[2][2] = {{'c', 'c'}, {' ', 'C'}};
    char ** argv = (char **) calloc(3, sizeof(char *));
    for (int it_4_0 = 0; it_4_0 < 2; it_4_0 ++) {
        argv[it_4_0] = _argv[it_4_0];
    }
    argv[2] = NULL;
    int actual = main(2, argv);
    EXPECT_EQ(2, actual);
    char expected_argv[2][2] = {'c', 'c', ' ', 'C'};
    for (int it_5_0 = 0; it_5_0 < 2; it_5_0 ++) {
        for (int it_5_1 = 0; it_5_1 < 2; it_5_1 ++) {
            EXPECT_EQ(expected_argv[it_5_0][it_5_1], _argv[it_5_0][it_5_1]);
        }
    }
}

#pragma endregion
#pragma region error
TEST(error, main_test_10)
{
    __attribute__ ((aligned(1))) char _argv[2][2] = {{'c', 'c'}, {'\n', '-'}};
    char ** argv = (char **) calloc(3, sizeof(char *));
    for (int it_4_0 = 0; it_4_0 < 2; it_4_0 ++) {
        argv[it_4_0] = _argv[it_4_0];
    }
    argv[2] = NULL;
    main(2, argv);
    char expected_argv[2][2] = {'\0', '\0', '\0', '\0'};
    for (int it_5_0 = 0; it_5_0 < 2; it_5_0 ++) {
        for (int it_5_1 = 0; it_5_1 < 2; it_5_1 ++) {
            EXPECT_EQ(expected_argv[it_5_0][it_5_1], _argv[it_5_0][it_5_1]);
        }
    }
}

TEST(error, main_test_11)
{
    __attribute__ ((aligned(1))) char _argv[2][2] = {{'c', 'c'}, {'-', '0'}};
    char ** argv = (char **) calloc(3, sizeof(char *));
    for (int it_4_0 = 0; it_4_0 < 2; it_4_0 ++) {
        argv[it_4_0] = _argv[it_4_0];
    }
    argv[2] = NULL;
    main(2, argv);
    char expected_argv[2][2] = {'\0', '\0', '\0', '\0'};
    for (int it_5_0 = 0; it_5_0 < 2; it_5_0 ++) {
        for (int it_5_1 = 0; it_5_1 < 2; it_5_1 ++) {
            EXPECT_EQ(expected_argv[it_5_0][it_5_1], _argv[it_5_0][it_5_1]);
        }
    }
}

TEST(error, main_test_12)
{
    __attribute__ ((aligned(1))) char _argv[2][2] = {{'c', 'c'}, {'\n', '+'}};
    char ** argv = (char **) calloc(3, sizeof(char *));
    for (int it_4_0 = 0; it_4_0 < 2; it_4_0 ++) {
        argv[it_4_0] = _argv[it_4_0];
    }
    argv[2] = NULL;
    main(2, argv);
    char expected_argv[2][2] = {'\0', '\0', '\0', '\0'};
    for (int it_5_0 = 0; it_5_0 < 2; it_5_0 ++) {
        for (int it_5_1 = 0; it_5_1 < 2; it_5_1 ++) {
            EXPECT_EQ(expected_argv[it_5_0][it_5_1], _argv[it_5_0][it_5_1]);
        }
    }
}

TEST(error, main_test_13)
{
    __attribute__ ((aligned(1))) char _argv[2][2] = {{'c', 'c'}, {'\n', '\n'}};
    char ** argv = (char **) calloc(3, sizeof(char *));
    for (int it_4_0 = 0; it_4_0 < 2; it_4_0 ++) {
        argv[it_4_0] = _argv[it_4_0];
    }
    argv[2] = NULL;
    main(2, argv);
    char expected_argv[2][2] = {'\0', '\0', '\0', '\0'};
    for (int it_5_0 = 0; it_5_0 < 2; it_5_0 ++) {
        for (int it_5_1 = 0; it_5_1 < 2; it_5_1 ++) {
            EXPECT_EQ(expected_argv[it_5_0][it_5_1], _argv[it_5_0][it_5_1]);
        }
    }
}

#pragma endregion
}
