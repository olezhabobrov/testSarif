/*
 * This file is automatically generated by UnitTestBot. For further information seehttps://unittestbot.org
 */

#include "enums_dot_c_test.h"

#include "gtest/gtest.h"
namespace UTBot {
static const float utbot_abs_error = 1e-6;


#pragma region regression
TEST(regression, enumSignToInt_test_1)
{
    int actual = enumSignToInt(NEGATIVE);
    EXPECT_EQ(-1, actual);
}

TEST(regression, enumSignToInt_test_2)
{
    int actual = enumSignToInt(ZERO);
    EXPECT_EQ(0, actual);
}

TEST(regression, enumSignToInt_test_3)
{
    int actual = enumSignToInt(POSITIVE);
    EXPECT_EQ(1, actual);
}

TEST(regression, intToSign_test_1)
{
    enum Sign actual = intToSign(1);
    EXPECT_EQ(POSITIVE, actual);
}

TEST(regression, intToSign_test_2)
{
    enum Sign actual = intToSign(0);
    EXPECT_EQ(ZERO, actual);
}

TEST(regression, intToSign_test_3)
{
    enum Sign actual = intToSign(-9);
    EXPECT_EQ(NEGATIVE, actual);
}

TEST(regression, structWithSignToInt_test_1)
{
    int actual = structWithSignToInt({
        .s = NEGATIVE});
    EXPECT_EQ(-1, actual);
}

TEST(regression, structWithSignToInt_test_2)
{
    int actual = structWithSignToInt({
        .s = ZERO});
    EXPECT_EQ(0, actual);
}

TEST(regression, structWithSignToInt_test_3)
{
    int actual = structWithSignToInt({
        .s = POSITIVE});
    EXPECT_EQ(1, actual);
}

TEST(regression, sumSignArray_test_1)
{
    int actual = sumSignArray({
        .signs = {POSITIVE, ZERO, ZERO, ZERO, ZERO}});
    EXPECT_EQ(1, actual);
}

TEST(regression, sumSignArray_test_2)
{
    int actual = sumSignArray({
        .signs = {POSITIVE, POSITIVE, NEGATIVE, ZERO, ZERO}});
    EXPECT_EQ(1, actual);
}

TEST(regression, sumSignArray_test_3)
{
    int actual = sumSignArray({
        .signs = {ZERO, ZERO, ZERO, ZERO, ZERO}});
    EXPECT_EQ(0, actual);
}

TEST(regression, sumSignArray_test_4)
{
    int actual = sumSignArray({
        .signs = {NEGATIVE, ZERO, ZERO, ZERO, ZERO}});
    EXPECT_EQ(-1, actual);
}

TEST(regression, sumSignArray_test_5)
{
    int actual = sumSignArray({
        .signs = {POSITIVE, POSITIVE, ZERO, ZERO, ZERO}});
    EXPECT_EQ(2, actual);
}

TEST(regression, sumSignArray_test_6)
{
    int actual = sumSignArray({
        .signs = {POSITIVE, POSITIVE, ZERO, ZERO, POSITIVE}});
    EXPECT_EQ(3, actual);
}

TEST(regression, enumSignPointerToInt_test_1)
{
    enum Sign s = NEGATIVE;
    int actual = enumSignPointerToInt(&s);
    EXPECT_EQ(-1, actual);
    enum Sign expected_s = NEGATIVE;
    EXPECT_EQ(expected_s, s);
}

TEST(regression, enumSignPointerToInt_test_2)
{
    enum Sign s = ZERO;
    int actual = enumSignPointerToInt(&s);
    EXPECT_EQ(0, actual);
    enum Sign expected_s = ZERO;
    EXPECT_EQ(expected_s, s);
}

TEST(regression, enumSignPointerToInt_test_3)
{
    enum Sign s = POSITIVE;
    int actual = enumSignPointerToInt(&s);
    EXPECT_EQ(1, actual);
    enum Sign expected_s = POSITIVE;
    EXPECT_EQ(expected_s, s);
}

TEST(regression, intToSignPointer_test_1)
{
    enum Sign actual = *intToSignPointer(1);
    EXPECT_EQ(POSITIVE, actual);
}

TEST(regression, intToSignPointer_test_2)
{
    enum Sign actual = *intToSignPointer(0);
    EXPECT_EQ(ZERO, actual);
}

TEST(regression, intToSignPointer_test_3)
{
    enum Sign actual = *intToSignPointer(-5);
    EXPECT_EQ(NEGATIVE, actual);
}

TEST(regression, getSignValue_test_1)
{
    int actual = getSignValue(ZERO);
    EXPECT_EQ(1, actual);
}

TEST(regression, getSignValue_test_2)
{
    int actual = getSignValue(NEGATIVE);
    EXPECT_EQ(0, actual);
}

TEST(regression, getSignValue_test_3)
{
    int actual = getSignValue(POSITIVE);
    EXPECT_EQ(2, actual);
}

TEST(regression, enumWithinRecord_test_1)
{
    int actual = enumWithinRecord({
        .e = EnumWithinRecord::CLOSED});
    EXPECT_EQ(-1, actual);
}

TEST(regression, enumWithinRecord_test_2)
{
    int actual = enumWithinRecord({
        .e = EnumWithinRecord::OPEN});
    EXPECT_EQ(1, actual);
}

TEST(regression, enumWithinRecord_test_3)
{
    int actual = enumWithinRecord({
        .e = EnumWithinRecord::FF_FOUND});
    EXPECT_EQ(0, actual);
}

#pragma endregion
}
