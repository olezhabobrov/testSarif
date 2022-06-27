/*
 * This file is automatically generated by UnitTestBot. For further information seehttps://unittestbot.org
 */

#include "packed_structs_dot_c_test.h"

#include "gtest/gtest.h"
namespace UTBot {
static const float utbot_abs_error = 1e-6;


#pragma region regression
TEST(regression, get_sign_packedStruct1_test_1)
{
    int actual = get_sign_packedStruct1({
        .s = 0,
        .i = 1});
    EXPECT_EQ(1, actual);
}

TEST(regression, get_sign_packedStruct1_test_2)
{
    int actual = get_sign_packedStruct1({
        .s = 0,
        .i = -10});
    EXPECT_EQ(-1, actual);
}

TEST(regression, get_sign_packedStruct1_test_3)
{
    int actual = get_sign_packedStruct1({
        .s = 0,
        .i = 0});
    EXPECT_EQ(0, actual);
}

TEST(regression, get_val_by_packedStruct2_test_1)
{
    char actual = get_val_by_packedStruct2({
        .c = 'c',
        .i = 0,
        .s = {
            .c = 'c',
            .i = -1}});
    EXPECT_EQ('1', actual);
}

TEST(regression, get_val_by_packedStruct2_test_2)
{
    char actual = get_val_by_packedStruct2({
        .c = 'b',
        .i = 0,
        .s = {
            .c = 'r',
            .i = 0}});
    EXPECT_EQ('3', actual);
}

TEST(regression, get_val_by_packedStruct2_test_3)
{
    char actual = get_val_by_packedStruct2({
        .c = 'c',
        .i = 0,
        .s = {
            .c = 'c',
            .i = 0}});
    EXPECT_EQ('2', actual);
}

TEST(regression, get_val_by_packedStruct2_test_4)
{
    char actual = get_val_by_packedStruct2({
        .c = 'b',
        .i = 0,
        .s = {
            .c = 'r',
            .i = 1}});
    EXPECT_EQ('4', actual);
}

TEST(regression, get_val_by_otherPackedStruct_test_1)
{
    short actual = get_val_by_otherPackedStruct({
        .a = 'c',
        .str = {
            .c = '!',
            .i = 0,
            .s = {
                .c = 'c',
                .i = 0}},
        .b = 'c',
        .s = 0});
    EXPECT_EQ(0, actual);
}

TEST(regression, get_val_by_otherPackedStruct_test_2)
{
    short actual = get_val_by_otherPackedStruct({
        .a = 'c',
        .str = {
            .c = 'c',
            .i = 0,
            .s = {
                .c = 'c',
                .i = 0}},
        .b = 'c',
        .s = 0});
    EXPECT_EQ(0, actual);
}

TEST(regression, get_val_by_otherPackedStruct_test_3)
{
    short actual = get_val_by_otherPackedStruct({
        .a = 'a',
        .str = {
            .c = 'c',
            .i = 0,
            .s = {
                .c = 'c',
                .i = 0}},
        .b = 'q',
        .s = 0});
    EXPECT_EQ(-1, actual);
}

TEST(regression, get_val_by_otherPackedStruct_test_4)
{
    short actual = get_val_by_otherPackedStruct({
        .a = 'a',
        .str = {
            .c = 'S',
            .i = 0,
            .s = {
                .c = 'c',
                .i = 0}},
        .b = 'q',
        .s = 0});
    EXPECT_EQ(5, actual);
}

#pragma endregion
}