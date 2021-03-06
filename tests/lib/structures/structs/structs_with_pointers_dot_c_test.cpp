/*
 * This file is automatically generated by UnitTestBot. For further information seehttps://unittestbot.org
 */

#include "structs_with_pointers_dot_c_test.h"

#include "gtest/gtest.h"
namespace UTBot {
static const float utbot_abs_error = 1e-6;
// Some tests for function 'list_sum' were skipped, as execution of function is out of timeout.

// Some tests for function 'list_sum_sign' were skipped, as execution of function is out of timeout.



#pragma region regression
TEST(regression, handle_struct_with_char_ptr_test_1)
{
    int actual = handle_struct_with_char_ptr({
        .a = 0,
        .str = (char*) 0x0});
    EXPECT_EQ(0, actual);
}

TEST(regression, handle_struct_with_char_ptr_test_2)
{
    int actual = handle_struct_with_char_ptr({
        .a = 2,
        .str = NULL});
    EXPECT_EQ(1, actual);
}

TEST(regression, handle_struct_with_char_ptr_test_3)
{
    int actual = handle_struct_with_char_ptr({
        .a = 0,
        .str = NULL});
    EXPECT_EQ(2, actual);
}

TEST(regression, handle_struct_with_char_ptr_test_4)
{
    int actual = handle_struct_with_char_ptr({
        .a = -10,
        .str = (char*) 0xffffffff});
    EXPECT_EQ(2, actual);
}

TEST(regression, list_sum_test_1)
{
    struct List head = {
        .next = NULL,
        .val = 0};
    int actual = list_sum(&head);
    EXPECT_EQ(0, actual);
    struct List expected_head = {
        .next = NULL,
        .val = 0};
    EXPECT_EQ(expected_head.val, head.val);
}

TEST(regression, list_sum_sign_test_1)
{
    struct List head = {
        .next = NULL,
        .val = -10};
    int actual = list_sum_sign(&head);
    EXPECT_EQ(-1, actual);
    struct List expected_head = {
        .next = (struct List*) 0xffffffff,
        .val = -10};
    EXPECT_EQ(expected_head.val, head.val);
}

TEST(regression, list_sum_sign_test_2)
{
    struct List head = {
        .next = NULL,
        .val = 1};
    int actual = list_sum_sign(&head);
    EXPECT_EQ(1, actual);
    struct List expected_head = {
        .next = NULL,
        .val = 1};
    EXPECT_EQ(expected_head.val, head.val);
}

TEST(regression, list_sum_sign_test_3)
{
    struct List head = {
        .next = NULL,
        .val = 0};
    int actual = list_sum_sign(&head);
    EXPECT_EQ(0, actual);
    struct List expected_head = {
        .next = NULL,
        .val = 0};
    EXPECT_EQ(expected_head.val, head.val);
}

TEST(regression, unsafe_next_value_test_1)
{
    struct List node = {
        .next = NULL,
        .val = 0};
    struct List utbotInnerVar1 = {
        .next = NULL,
        .val = 0};
    node.next = (struct List*) &utbotInnerVar1;
    int actual = unsafe_next_value(&node);
    EXPECT_EQ(0, actual);
    struct List expected_node = {
        .next = NULL,
        .val = 0};
    EXPECT_EQ(expected_node.val, node.val);
}

TEST(regression, sum_of_all_fields_or_mult_test_1)
{
    long long actual = sum_of_all_fields_or_mult({
        .ll = 3LL,
        .sh = 0,
        .a = {
            .a = 3,
            .str = NULL}}, -322);
    EXPECT_EQ(3LL, actual);
}

TEST(regression, sum_of_all_fields_or_mult_test_2)
{
    long long actual = sum_of_all_fields_or_mult({
        .ll = 3LL,
        .sh = 0,
        .a = {
            .a = 3,
            .str = NULL}}, 0);
    EXPECT_EQ(3LL, actual);
}

TEST(regression, sum_of_all_fields_or_mult_test_3)
{
    long long actual = sum_of_all_fields_or_mult({
        .ll = -10LL,
        .sh = 7,
        .a = {
            .a = -6,
            .str = (char*) 0xfafafafa}}, -322);
    EXPECT_EQ(-9LL, actual);
}

TEST(regression, sum_of_all_fields_or_mult_test_4)
{
    long long actual = sum_of_all_fields_or_mult({
        .ll = 7LL,
        .sh = 6,
        .a = {
            .a = -2,
            .str = (char*) 0x6060606}}, 0);
    EXPECT_EQ(11LL, actual);
}

TEST(regression, sum_of_all_fields_or_mult_test_5)
{
    long long actual = sum_of_all_fields_or_mult({
        .ll = 0LL,
        .sh = 0,
        .a = {
            .a = 0,
            .str = NULL}}, 0);
    EXPECT_EQ(1132LL, actual);
}

TEST(regression, some_calc_test_1)
{
    struct StructWithPointerInField actual = some_calc(2, 1);
    struct StructWithPointerInField expected = {
        .ll = 22222LL,
        .sh = 22,
        .a = {
            .a = 2,
            .str = NULL}};
}

TEST(regression, some_calc_test_2)
{
    struct StructWithPointerInField actual = some_calc(-7, 5);
    struct StructWithPointerInField expected = {
        .ll = 33333LL,
        .sh = 33,
        .a = {
            .a = 3,
            .str = NULL}};
}

TEST(regression, some_calc_test_3)
{
    struct StructWithPointerInField actual = some_calc(0, 0);
    struct StructWithPointerInField expected = {
        .ll = 11111LL,
        .sh = 11,
        .a = {
            .a = 1,
            .str = NULL}};
}

TEST(regression, some_calc_test_4)
{
    struct StructWithPointerInField actual = some_calc(0, -1);
    struct StructWithPointerInField expected = {
        .ll = 0LL,
        .sh = 0,
        .a = {
            .a = 0,
            .str = NULL}};
}

TEST(regression, some_calc_test_5)
{
    struct StructWithPointerInField actual = some_calc(2, -4);
    struct StructWithPointerInField expected = {
        .ll = 33333LL,
        .sh = 33,
        .a = {
            .a = 3,
            .str = NULL}};
}

TEST(regression, some_calc_test_6)
{
    struct StructWithPointerInField actual = some_calc(-5, -5);
    struct StructWithPointerInField expected = {
        .ll = 0LL,
        .sh = 0,
        .a = {
            .a = 0,
            .str = NULL}};
}

#pragma endregion
#pragma region error
TEST(error, list_sum_test_2)
{
    struct List head = {
        .next = NULL,
        .val = 0};
    struct List utbotInnerVar1 = {
        .next = (struct List*) 0x8,
        .val = 0};
    head.next = (struct List*) &utbotInnerVar1;
    list_sum(&head);
}

TEST(error, list_sum_test_3)
{
    struct List head = {
        .next = (struct List*) 0xff,
        .val = 0};
    list_sum(&head);
}

TEST(error, list_sum_test_4)
{
    struct List head = {
        .next = NULL,
        .val = 0};
    struct List utbotInnerVar1 = {
        .next = NULL,
        .val = 33686018};
    struct List utbotInnerVar2 = {
        .next = (struct List*) 0xfb,
        .val = 0};
    head.next = (struct List*) &utbotInnerVar1;
    utbotInnerVar1.next = (struct List*) &utbotInnerVar2;
    list_sum(&head);
}

TEST(error, list_sum_test_5)
{
    struct List head = {
        .next = (struct List*) 0xfffffff8,
        .val = 0};
    list_sum(&head);
}

TEST(error, list_sum_sign_test_4)
{
    struct List head = {
        .next = (struct List*) 0xff,
        .val = 0};
    list_sum_sign(&head);
}

TEST(error, list_sum_sign_test_5)
{
    struct List head = {
        .next = NULL,
        .val = 0};
    struct List utbotInnerVar1 = {
        .next = (struct List*) 0x8,
        .val = 134744072};
    head.next = (struct List*) &utbotInnerVar1;
    list_sum_sign(&head);
}

TEST(error, list_sum_sign_test_6)
{
    struct List head = {
        .next = (struct List*) 0xfffffff8,
        .val = 0};
    list_sum_sign(&head);
}

TEST(error, unsafe_next_value_test_2)
{
    struct List node = {
        .next = (struct List*) 0xfffffff8,
        .val = 0};
    unsafe_next_value(&node);
}

TEST(error, unsafe_next_value_test_3)
{
    struct List node = {
        .next = NULL,
        .val = 0};
    unsafe_next_value(&node);
}

#pragma endregion
}
