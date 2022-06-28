/*
 * This file is automatically generated by UnitTestBot. For further information seehttps://unittestbot.org
 */

#include "tree_dot_c_test.h"

#include "gtest/gtest.h"
namespace UTBot {
static const float utbot_abs_error = 1e-6;


#pragma region regression
TEST(regression, deep_test_1)
{
    struct Tree root = {
        .left = (struct Tree*) 0xff,
        .right = NULL};
    int actual = deep(&root);
    EXPECT_EQ(-1, actual);
    struct Tree expected_root = {
        .left = NULL,
        .right = NULL};
}

TEST(regression, deep_test_2)
{
    struct Tree root = {
        .left = NULL,
        .right = NULL};
    struct Tree utbotInnerVar1 = {
        .left = NULL,
        .right = NULL};
    struct Tree utbotInnerVar2 = {
        .left = NULL,
        .right = NULL};
    root.left = (struct Tree*) &utbotInnerVar1;
    root.right = (struct Tree*) &utbotInnerVar2;
    utbotInnerVar1.right = (struct Tree*) &utbotInnerVar2;
    int actual = deep(&root);
    EXPECT_EQ(-1, actual);
    struct Tree expected_root = {
        .left = NULL,
        .right = NULL};
}

TEST(regression, deep_test_3)
{
    struct Tree root = {
        .left = NULL,
        .right = NULL};
    struct Tree utbotInnerVar1 = {
        .left = NULL,
        .right = NULL};
    root.left = (struct Tree*) &utbotInnerVar1;
    root.right = (struct Tree*) &utbotInnerVar1;
    utbotInnerVar1.left = (struct Tree*) &utbotInnerVar1;
    utbotInnerVar1.right = (struct Tree*) &utbotInnerVar1;
    int actual = deep(&root);
    EXPECT_EQ(1, actual);
    struct Tree expected_root = {
        .left = NULL,
        .right = NULL};
}

TEST(regression, deep_test_4)
{
    struct Tree root = {
        .left = NULL,
        .right = NULL};
    struct Tree utbotInnerVar1 = {
        .left = (struct Tree*) 0xb8b8b8b8,
        .right = NULL};
    struct Tree utbotInnerVar2 = {
        .left = NULL,
        .right = (struct Tree*) 0x88888888};
    root.left = (struct Tree*) &utbotInnerVar1;
    root.right = (struct Tree*) &utbotInnerVar2;
    utbotInnerVar1.right = (struct Tree*) &utbotInnerVar2;
    utbotInnerVar2.left = (struct Tree*) &utbotInnerVar1;
    int actual = deep(&root);
    EXPECT_EQ(1, actual);
    struct Tree expected_root = {
        .left = NULL,
        .right = NULL};
}

TEST(regression, deep_test_5)
{
    struct Tree root = {
        .left = NULL,
        .right = (struct Tree*) 0xff000000};
    struct Tree utbotInnerVar1 = {
        .left = NULL,
        .right = NULL};
    root.left = (struct Tree*) &utbotInnerVar1;
    int actual = deep(&root);
    EXPECT_EQ(-1, actual);
    struct Tree expected_root = {
        .left = NULL,
        .right = NULL};
}

TEST(regression, deep_test_6)
{
    struct Tree root = {
        .left = NULL,
        .right = NULL};
    int actual = deep(&root);
    EXPECT_EQ(-1, actual);
    struct Tree expected_root = {
        .left = NULL,
        .right = NULL};
}

#pragma endregion
#pragma region error
TEST(error, deep_test_7)
{
    struct Tree root = {
        .left = (struct Tree*) 0xfffffff8,
        .right = (struct Tree*) 0xff000000};
    deep(&root);
}

TEST(error, deep_test_8)
{
    struct Tree root = {
        .left = NULL,
        .right = (struct Tree*) 0xbf};
    struct Tree utbotInnerVar1 = {
        .left = NULL,
        .right = (struct Tree*) 0xbf};
    root.left = (struct Tree*) &utbotInnerVar1;
    deep(&root);
}

TEST(error, deep_test_9)
{
    struct Tree root = {
        .left = NULL,
        .right = (struct Tree*) 0x0};
    struct Tree utbotInnerVar1 = {
        .left = (struct Tree*) 0x88888888,
        .right = (struct Tree*) 0x0};
    root.left = (struct Tree*) &utbotInnerVar1;
    deep(&root);
}

TEST(error, deep_test_10)
{
    struct Tree root = {
        .left = (struct Tree*) 0xff,
        .right = (struct Tree*) 0xff000000};
    deep(&root);
}

#pragma endregion
}
