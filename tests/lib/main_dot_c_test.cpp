/*
 * This file is automatically generated by UnitTestBot. For further information seehttps://unittestbot.org
 */

#include "main_dot_c_test.h"

#include "gtest/gtest.h"
namespace UTBot {
static const float utbot_abs_error = 1e-6;


#pragma region regression
TEST(regression, exit_code_test_1)
{
    int actual = exit_code(1);
    EXPECT_EQ(0, actual);
}

TEST(regression, exit_code_test_2)
{
    int actual = exit_code(0);
    EXPECT_EQ(1, actual);
}

TEST(regression, main2_test_1)
{
    char _argv[2][2] = {{'c', 'c'}, {'b', 'a'}};
    char ** argv = (char **) calloc(3, sizeof(char *));
    for (int it_164_0 = 0; it_164_0 < 2; it_164_0 ++) {
        argv[it_164_0] = _argv[it_164_0];
    }
    argv[2] = NULL;
    int actual = main2(1, argv);
    EXPECT_EQ(0, actual);
    char expected_argv[2][2] = {{'c', 'c'}, {'b', 'a'}};
    for (int it_165_0 = 0; it_165_0 < 2; it_165_0 ++) {
        for (int it_165_1 = 0; it_165_1 < 2; it_165_1 ++) {
            EXPECT_EQ(expected_argv[it_165_0][it_165_1], _argv[it_165_0][it_165_1]);
        }
    }
}

TEST(regression, main2_test_2)
{
    char _argv[2][2] = {{'c', 'c'}, {'b', 'a'}};
    char ** argv = (char **) calloc(3, sizeof(char *));
    for (int it_166_0 = 0; it_166_0 < 2; it_166_0 ++) {
        argv[it_166_0] = _argv[it_166_0];
    }
    argv[2] = NULL;
    int actual = main2(0, argv);
    EXPECT_EQ(1, actual);
    char expected_argv[2][2] = {{'c', 'c'}, {'b', 'a'}};
    for (int it_167_0 = 0; it_167_0 < 2; it_167_0 ++) {
        for (int it_167_1 = 0; it_167_1 < 2; it_167_1 ++) {
            EXPECT_EQ(expected_argv[it_167_0][it_167_1], _argv[it_167_0][it_167_1]);
        }
    }
}

TEST(regression, main_test_1)
{
    char _argv[2][2] = {{'c', 'c'}, {'a', 'a'}};
    char ** argv = (char **) calloc(3, sizeof(char *));
    for (int it_168_0 = 0; it_168_0 < 2; it_168_0 ++) {
        argv[it_168_0] = _argv[it_168_0];
    }
    argv[2] = NULL;
    int actual = main(2, argv);
    EXPECT_EQ(2, actual);
    char expected_argv[2][2] = {{'c', 'c'}, {'a', 'a'}};
    for (int it_169_0 = 0; it_169_0 < 2; it_169_0 ++) {
        for (int it_169_1 = 0; it_169_1 < 2; it_169_1 ++) {
            EXPECT_EQ(expected_argv[it_169_0][it_169_1], _argv[it_169_0][it_169_1]);
        }
    }
}

TEST(regression, main_test_2)
{
    char _argv[2][2] = {{'c', 'c'}, {'\0', 'a'}};
    char ** argv = (char **) calloc(3, sizeof(char *));
    for (int it_170_0 = 0; it_170_0 < 2; it_170_0 ++) {
        argv[it_170_0] = _argv[it_170_0];
    }
    argv[2] = NULL;
    int actual = main(2, argv);
    EXPECT_EQ(2, actual);
    char expected_argv[2][2] = {{'c', 'c'}, {'\0', 'a'}};
    for (int it_171_0 = 0; it_171_0 < 2; it_171_0 ++) {
        for (int it_171_1 = 0; it_171_1 < 2; it_171_1 ++) {
            EXPECT_EQ(expected_argv[it_171_0][it_171_1], _argv[it_171_0][it_171_1]);
        }
    }
}

TEST(regression, main_test_3)
{
    char _argv[2][2] = {{'c', 'c'}, {'1', '@'}};
    char ** argv = (char **) calloc(3, sizeof(char *));
    for (int it_172_0 = 0; it_172_0 < 2; it_172_0 ++) {
        argv[it_172_0] = _argv[it_172_0];
    }
    argv[2] = NULL;
    int actual = main(2, argv);
    EXPECT_EQ(3, actual);
    char expected_argv[2][2] = {{'c', 'c'}, {'1', '@'}};
    for (int it_173_0 = 0; it_173_0 < 2; it_173_0 ++) {
        for (int it_173_1 = 0; it_173_1 < 2; it_173_1 ++) {
            EXPECT_EQ(expected_argv[it_173_0][it_173_1], _argv[it_173_0][it_173_1]);
        }
    }
}

TEST(regression, main_test_4)
{
    char _argv[2][2] = {{'c', 'c'}, {'1', '\0'}};
    char ** argv = (char **) calloc(3, sizeof(char *));
    for (int it_174_0 = 0; it_174_0 < 2; it_174_0 ++) {
        argv[it_174_0] = _argv[it_174_0];
    }
    argv[2] = NULL;
    int actual = main(2, argv);
    EXPECT_EQ(3, actual);
    char expected_argv[2][2] = {{'c', 'c'}, {'1', '\0'}};
    for (int it_175_0 = 0; it_175_0 < 2; it_175_0 ++) {
        for (int it_175_1 = 0; it_175_1 < 2; it_175_1 ++) {
            EXPECT_EQ(expected_argv[it_175_0][it_175_1], _argv[it_175_0][it_175_1]);
        }
    }
}

TEST(regression, main_test_5)
{
    char _argv[2][2] = {{'c', 'c'}, {'9', '@'}};
    char ** argv = (char **) calloc(3, sizeof(char *));
    for (int it_176_0 = 0; it_176_0 < 2; it_176_0 ++) {
        argv[it_176_0] = _argv[it_176_0];
    }
    argv[2] = NULL;
    int actual = main(2, argv);
    EXPECT_EQ(9, actual);
    char expected_argv[2][2] = {{'c', 'c'}, {'9', '@'}};
    for (int it_177_0 = 0; it_177_0 < 2; it_177_0 ++) {
        for (int it_177_1 = 0; it_177_1 < 2; it_177_1 ++) {
            EXPECT_EQ(expected_argv[it_177_0][it_177_1], _argv[it_177_0][it_177_1]);
        }
    }
}

TEST(regression, main_test_6)
{
    char _argv[2][2] = {{'c', 'c'}, {'X', 'a'}};
    char ** argv = (char **) calloc(3, sizeof(char *));
    for (int it_178_0 = 0; it_178_0 < 2; it_178_0 ++) {
        argv[it_178_0] = _argv[it_178_0];
    }
    argv[2] = NULL;
    int actual = main(2, argv);
    EXPECT_EQ(2, actual);
    char expected_argv[2][2] = {{'c', 'c'}, {'X', 'a'}};
    for (int it_179_0 = 0; it_179_0 < 2; it_179_0 ++) {
        for (int it_179_1 = 0; it_179_1 < 2; it_179_1 ++) {
            EXPECT_EQ(expected_argv[it_179_0][it_179_1], _argv[it_179_0][it_179_1]);
        }
    }
}

TEST(regression, main_test_7)
{
    char _argv[2][2] = {{'c', 'c'}, {'{', 'a'}};
    char ** argv = (char **) calloc(3, sizeof(char *));
    for (int it_180_0 = 0; it_180_0 < 2; it_180_0 ++) {
        argv[it_180_0] = _argv[it_180_0];
    }
    argv[2] = NULL;
    int actual = main(2, argv);
    EXPECT_EQ(2, actual);
    char expected_argv[2][2] = {{'c', 'c'}, {'{', 'a'}};
    for (int it_181_0 = 0; it_181_0 < 2; it_181_0 ++) {
        for (int it_181_1 = 0; it_181_1 < 2; it_181_1 ++) {
            EXPECT_EQ(expected_argv[it_181_0][it_181_1], _argv[it_181_0][it_181_1]);
        }
    }
}

TEST(regression, main_test_8)
{
    char _argv[2][2] = {{'c', 'c'}, {'b', 'a'}};
    char ** argv = (char **) calloc(3, sizeof(char *));
    for (int it_182_0 = 0; it_182_0 < 2; it_182_0 ++) {
        argv[it_182_0] = _argv[it_182_0];
    }
    argv[2] = NULL;
    int actual = main(0, argv);
    EXPECT_EQ(1, actual);
    char expected_argv[2][2] = {{'c', 'c'}, {'b', 'a'}};
    for (int it_183_0 = 0; it_183_0 < 2; it_183_0 ++) {
        for (int it_183_1 = 0; it_183_1 < 2; it_183_1 ++) {
            EXPECT_EQ(expected_argv[it_183_0][it_183_1], _argv[it_183_0][it_183_1]);
        }
    }
}

#pragma endregion
#pragma region error
TEST(error, main_test_9)
{
    char _argv[2][2] = {{'c', 'b'}, {'4', '0'}};
    char ** argv = (char **) calloc(3, sizeof(char *));
    for (int it_184_0 = 0; it_184_0 < 2; it_184_0 ++) {
        argv[it_184_0] = _argv[it_184_0];
    }
    argv[2] = NULL;
    main(2, argv);
}

TEST(error, main_test_10)
{
    char _argv[2][2] = {{'c', 'b'}, {' ', '+'}};
    char ** argv = (char **) calloc(3, sizeof(char *));
    for (int it_185_0 = 0; it_185_0 < 2; it_185_0 ++) {
        argv[it_185_0] = _argv[it_185_0];
    }
    argv[2] = NULL;
    main(2, argv);
}

TEST(error, main_test_11)
{
    char _argv[2][2] = {{'c', 'b'}, {' ', ' '}};
    char ** argv = (char **) calloc(3, sizeof(char *));
    for (int it_186_0 = 0; it_186_0 < 2; it_186_0 ++) {
        argv[it_186_0] = _argv[it_186_0];
    }
    argv[2] = NULL;
    main(2, argv);
}

TEST(error, main_test_12)
{
    char _argv[2][2] = {{'c', 'b'}, {' ', '-'}};
    char ** argv = (char **) calloc(3, sizeof(char *));
    for (int it_187_0 = 0; it_187_0 < 2; it_187_0 ++) {
        argv[it_187_0] = _argv[it_187_0];
    }
    argv[2] = NULL;
    main(2, argv);
}

#pragma endregion
}
