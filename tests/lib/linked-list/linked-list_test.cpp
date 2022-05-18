/*
 * This file is automatically generated by UnitTestBot. For further information see https://github.com/UnitTestBot/UTBotCpp
 * Copyright (c) Huawei Technologies Co., Ltd. 2012-2021. All rights reserved.
 */

#include "linked-list_test.h"

#include "gtest/gtest.h"
namespace UTBot {
static const float utbot_abs_error = 1e-6;
// Some tests for function 'sum_list' were skipped, as execution of function is out of timeout.

// Some tests for function 'sign_sum' were skipped, as execution of function is out of timeout.

// Some tests for function 'len_bound' were skipped, as execution of function is out of timeout.



#pragma region regression

TEST(regression, length_of_linked_list3_test_1)
{
    struct Node head = {0, NULL};
    struct Node utbotInnerVar1 = {0, NULL};
    head.next = &utbotInnerVar1;
    utbotInnerVar1.next = &utbotInnerVar1;
    int actual = length_of_linked_list3(&head);
    EXPECT_EQ(-1, actual);
    struct Node expected_head = {0, NULL};
    EXPECT_EQ(expected_head.x, head.x);
}

TEST(regression, length_of_linked_list3_test_2)
{
    struct Node head = {0, NULL};
    struct Node utbotInnerVar1 = {0, NULL};
    struct Node utbotInnerVar2 = {0, NULL};
    head.next = &utbotInnerVar1;
    utbotInnerVar1.next = &utbotInnerVar2;
    int actual = length_of_linked_list3(&head);
    EXPECT_EQ(3, actual);
    struct Node expected_head = {0, NULL};
    EXPECT_EQ(expected_head.x, head.x);
}

TEST(regression, length_of_linked_list3_test_3)
{
    struct Node head = {0, NULL};
    struct Node utbotInnerVar1 = {0, NULL};
    head.next = &utbotInnerVar1;
    int actual = length_of_linked_list3(&head);
    EXPECT_EQ(2, actual);
    struct Node expected_head = {0, NULL};
    EXPECT_EQ(expected_head.x, head.x);
}

TEST(regression, length_of_linked_list3_test_4)
{
    struct Node head = {0, NULL};
    int actual = length_of_linked_list3(&head);
    EXPECT_EQ(1, actual);
    struct Node expected_head = {0, NULL};
    EXPECT_EQ(expected_head.x, head.x);
}


TEST(regression, length_of_linked_list2_test_1)
{
    struct Node head = {0, NULL};
    int actual = length_of_linked_list2(&head);
    EXPECT_EQ(1, actual);
    struct Node expected_head = {0, NULL};
    EXPECT_EQ(expected_head.x, head.x);
}

TEST(regression, length_of_linked_list2_test_2)
{
    struct Node head = {0, NULL};
    struct Node utbotInnerVar1 = {0, NULL};
    head.next = &utbotInnerVar1;
    int actual = length_of_linked_list2(&head);
    EXPECT_EQ(2, actual);
    struct Node expected_head = {0, NULL};
    EXPECT_EQ(expected_head.x, head.x);
}

TEST(regression, length_of_linked_list2_test_3)
{
    struct Node head = {0, NULL};
    struct Node utbotInnerVar1 = {0, (struct Node *) 16711680};
    head.next = &utbotInnerVar1;
    int actual = length_of_linked_list2(&head);
    EXPECT_EQ(-1, actual);
    struct Node expected_head = {0, NULL};
    EXPECT_EQ(expected_head.x, head.x);
}

TEST(regression, length_of_linked_list2_test_4)
{
    struct Node head = {0, NULL};
    head.next = &head;
    int actual = length_of_linked_list2(&head);
    EXPECT_EQ(-2, actual);
    struct Node expected_head = {0, NULL};
    EXPECT_EQ(expected_head.x, head.x);
}


TEST(regression, sum_list_test_1)
{
    struct Node head = {0, NULL};
    int actual = sum_list(&head);
    EXPECT_EQ(0, actual);
    struct Node expected_head = {0, NULL};
    EXPECT_EQ(expected_head.x, head.x);
}


TEST(regression, hard_length2_test_1)
{
    struct HardNode head = {{0, {NULL, 0}, 0.000000e+00}, 'c', (struct HardNode *) 17940362863843014904};
    struct HardNode utbotInnerVar1 = {{0, {NULL, 0}, 0.000000e+00}, '\0', NULL};
    head.in.superIn.next = &utbotInnerVar1;
    int actual = hard_length2(&head);
    EXPECT_EQ(2, actual);
    struct HardNode expected_head = {{0, {NULL, 0}, 0.000000e+00}, 'c', NULL};
    EXPECT_EQ(expected_head.in.x, head.in.x);
    EXPECT_EQ(expected_head.in.superIn.step, head.in.superIn.step);
    EXPECT_NEAR(expected_head.in.d, head.in.d, utbot_abs_error);
    EXPECT_EQ(expected_head.letter, head.letter);
}

TEST(regression, hard_length2_test_2)
{
    struct HardNode head = {{0, {NULL, 0}, 0.000000e+00}, 'c', (struct HardNode *) 17940362863843014904};
    struct HardNode utbotInnerVar1 = {{0, {(struct HardNode *) 71776119061217280, 0}, 0.000000e+00}, '\0', NULL};
    head.in.superIn.next = &utbotInnerVar1;
    int actual = hard_length2(&head);
    EXPECT_EQ(-1, actual);
    struct HardNode expected_head = {{0, {NULL, 0}, 0.000000e+00}, 'c', NULL};
    EXPECT_EQ(expected_head.in.x, head.in.x);
    EXPECT_EQ(expected_head.in.superIn.step, head.in.superIn.step);
    EXPECT_NEAR(expected_head.in.d, head.in.d, utbot_abs_error);
    EXPECT_EQ(expected_head.letter, head.letter);
}

TEST(regression, hard_length2_test_3)
{
    struct HardNode head = {{0, {NULL, 0}, 0.000000e+00}, 'c', NULL};
    int actual = hard_length2(&head);
    EXPECT_EQ(1, actual);
    struct HardNode expected_head = {{0, {NULL, 0}, 0.000000e+00}, 'c', NULL};
    EXPECT_EQ(expected_head.in.x, head.in.x);
    EXPECT_EQ(expected_head.in.superIn.step, head.in.superIn.step);
    EXPECT_NEAR(expected_head.in.d, head.in.d, utbot_abs_error);
    EXPECT_EQ(expected_head.letter, head.letter);
}


TEST(regression, middle_length2_test_1)
{
    struct Kuku head = {{NULL, 'c'}, 0};
    struct Kuku utbotInnerVar1 = {{NULL, '\0'}, 0};
    head.in.next = &utbotInnerVar1;
    int actual = middle_length2(&head);
    EXPECT_EQ(2, actual);
    struct Kuku expected_head = {{(struct Kuku *) 7161677110969590627, 'c'}, 0};
    EXPECT_EQ(expected_head.in.letter, head.in.letter);
    EXPECT_EQ(expected_head.x, head.x);
}

TEST(regression, middle_length2_test_2)
{
    struct Kuku head = {{NULL, 'c'}, 0};
    int actual = middle_length2(&head);
    EXPECT_EQ(1, actual);
    struct Kuku expected_head = {{(struct Kuku *) 7161677110969590627, 'c'}, 0};
    EXPECT_EQ(expected_head.in.letter, head.in.letter);
    EXPECT_EQ(expected_head.x, head.x);
}

TEST(regression, middle_length2_test_3)
{
    struct Kuku head = {{NULL, 'c'}, 0};
    struct Kuku utbotInnerVar1 = {{(struct Kuku *) 71776119061217280, '\0'}, 0};
    head.in.next = &utbotInnerVar1;
    int actual = middle_length2(&head);
    EXPECT_EQ(-1, actual);
    struct Kuku expected_head = {{(struct Kuku *) 7161677110969590627, 'c'}, 0};
    EXPECT_EQ(expected_head.in.letter, head.in.letter);
    EXPECT_EQ(expected_head.x, head.x);
}


TEST(regression, cycle_list3_test_1)
{
    struct Node head = {0, NULL};
    int actual = cycle_list3(&head);
    EXPECT_EQ(-1, actual);
    struct Node expected_head = {0, NULL};
    EXPECT_EQ(expected_head.x, head.x);
}

TEST(regression, cycle_list3_test_2)
{
    struct Node head = {0, NULL};
    struct Node utbotInnerVar1 = {538976288, NULL};
    struct Node utbotInnerVar2 = {0, NULL};
    head.next = &utbotInnerVar1;
    utbotInnerVar1.next = &utbotInnerVar2;
    int actual = cycle_list3(&head);
    EXPECT_EQ(-3, actual);
    struct Node expected_head = {0, NULL};
    EXPECT_EQ(expected_head.x, head.x);
}

TEST(regression, cycle_list3_test_3)
{
    struct Node head = {0, NULL};
    struct Node utbotInnerVar1 = {0, NULL};
    head.next = &utbotInnerVar1;
    utbotInnerVar1.next = &head;
    int actual = cycle_list3(&head);
    EXPECT_EQ(3, actual);
    struct Node expected_head = {0, NULL};
    EXPECT_EQ(expected_head.x, head.x);
}

TEST(regression, cycle_list3_test_4)
{
    struct Node head = {0, NULL};
    struct Node utbotInnerVar1 = {0, NULL};
    head.next = &utbotInnerVar1;
    int actual = cycle_list3(&head);
    EXPECT_EQ(-2, actual);
    struct Node expected_head = {0, NULL};
    EXPECT_EQ(expected_head.x, head.x);
}

TEST(regression, cycle_list3_test_5)
{
    struct Node head = {0, NULL};
    struct Node utbotInnerVar1 = {538976288, NULL};
    struct Node utbotInnerVar2 = {0, NULL};
    head.next = &utbotInnerVar1;
    utbotInnerVar1.next = &utbotInnerVar2;
    utbotInnerVar2.next = &head;
    int actual = cycle_list3(&head);
    EXPECT_EQ(6, actual);
    struct Node expected_head = {0, NULL};
    EXPECT_EQ(expected_head.x, head.x);
}

TEST(regression, cycle_list3_test_6)
{
    struct Node head = {0, NULL};
    struct Node utbotInnerVar1 = {269488144, NULL};
    struct Node utbotInnerVar2 = {808464432, NULL};
    head.next = &utbotInnerVar1;
    utbotInnerVar1.next = &utbotInnerVar2;
    utbotInnerVar2.next = &utbotInnerVar1;
    int actual = cycle_list3(&head);
    EXPECT_EQ(5, actual);
    struct Node expected_head = {0, NULL};
    EXPECT_EQ(expected_head.x, head.x);
}

TEST(regression, cycle_list3_test_7)
{
    struct Node head = {0, NULL};
    struct Node utbotInnerVar1 = {791621423, NULL};
    struct Node utbotInnerVar2 = {791621423, NULL};
    head.next = &utbotInnerVar1;
    utbotInnerVar1.next = &utbotInnerVar2;
    utbotInnerVar2.next = &utbotInnerVar2;
    int actual = cycle_list3(&head);
    EXPECT_EQ(4, actual);
    struct Node expected_head = {0, NULL};
    EXPECT_EQ(expected_head.x, head.x);
}

TEST(regression, cycle_list3_test_8)
{
    struct Node head = {0, NULL};
    struct Node utbotInnerVar1 = {0, NULL};
    struct Node utbotInnerVar2 = {0, (struct Node *) 144396663052566532};
    head.next = &utbotInnerVar1;
    utbotInnerVar1.next = &utbotInnerVar2;
    int actual = cycle_list3(&head);
    EXPECT_EQ(17, actual);
    struct Node expected_head = {0, NULL};
    EXPECT_EQ(expected_head.x, head.x);
}

TEST(regression, cycle_list3_test_9)
{
    struct Node head = {0, NULL};
    struct Node utbotInnerVar1 = {0, NULL};
    head.next = &utbotInnerVar1;
    utbotInnerVar1.next = &utbotInnerVar1;
    int actual = cycle_list3(&head);
    EXPECT_EQ(2, actual);
    struct Node expected_head = {0, NULL};
    EXPECT_EQ(expected_head.x, head.x);
}

TEST(regression, cycle_list3_test_10)
{
    struct Node head = {0, NULL};
    head.next = &head;
    int actual = cycle_list3(&head);
    EXPECT_EQ(1, actual);
    struct Node expected_head = {0, NULL};
    EXPECT_EQ(expected_head.x, head.x);
}


TEST(regression, len_bound_test_1)
{
    struct Node head = {0, NULL};
    int actual = len_bound(&head, 1);
    EXPECT_EQ(1, actual);
    struct Node expected_head = {0, NULL};
    EXPECT_EQ(expected_head.x, head.x);
}

TEST(regression, len_bound_test_2)
{
    struct Node head = {0, NULL};
    int actual = len_bound(&head, 0);
    EXPECT_EQ(-1, actual);
    struct Node expected_head = {0, NULL};
    EXPECT_EQ(expected_head.x, head.x);
}


TEST(regression, sort_list_test_1)
{
    struct Node head = {1, NULL};
    struct Node utbotInnerVar1 = {2147483647, NULL};
    struct Node utbotInnerVar2 = {0, NULL};
    struct Node utbotInnerVar3 = {-2147483648, NULL};
    head.next = &utbotInnerVar1;
    utbotInnerVar1.next = &utbotInnerVar2;
    utbotInnerVar2.next = &utbotInnerVar3;
    int actual = sort_list(&head);
    EXPECT_EQ(-1, actual);
    struct Node expected_head = {0, NULL};
    EXPECT_EQ(expected_head.x, head.x);
}

TEST(regression, sort_list_test_2)
{
    struct Node head = {0, NULL};
    struct Node utbotInnerVar1 = {0, NULL};
    head.next = &utbotInnerVar1;
    utbotInnerVar1.next = &utbotInnerVar1;
    int actual = sort_list(&head);
    EXPECT_EQ(0, actual);
    struct Node expected_head = {0, NULL};
    EXPECT_EQ(expected_head.x, head.x);
}

TEST(regression, sort_list_test_3)
{
    struct Node head = {10, NULL};
    struct Node utbotInnerVar1 = {9, NULL};
    struct Node utbotInnerVar2 = {-2147483648, NULL};
    struct Node utbotInnerVar3 = {8, NULL};
    head.next = &utbotInnerVar1;
    utbotInnerVar1.next = &utbotInnerVar2;
    utbotInnerVar2.next = &utbotInnerVar3;
    int actual = sort_list(&head);
    EXPECT_EQ(1, actual);
    struct Node expected_head = {-2147483648, (struct Node *) 9259542123273814144};
    EXPECT_EQ(expected_head.x, head.x);
}

TEST(regression, sort_list_test_4)
{
    struct Node head = {0, NULL};
    struct Node utbotInnerVar1 = {2143289342, NULL};
    struct Node utbotInnerVar2 = {-8388610, NULL};
    struct Node utbotInnerVar3 = {2143289342, NULL};
    head.next = &utbotInnerVar1;
    utbotInnerVar1.next = &utbotInnerVar2;
    utbotInnerVar2.next = &utbotInnerVar3;
    int actual = sort_list(&head);
    EXPECT_EQ(1, actual);
    struct Node expected_head = {-8388610, (struct Node *) 18446744073709551615};
    EXPECT_EQ(expected_head.x, head.x);
}

TEST(regression, sort_list_test_5)
{
    struct Node head = {0, NULL};
    struct Node utbotInnerVar1 = {-1, NULL};
    struct Node utbotInnerVar2 = {-2, NULL};
    struct Node utbotInnerVar3 = {-4, NULL};
    head.next = &utbotInnerVar1;
    utbotInnerVar1.next = &utbotInnerVar2;
    utbotInnerVar2.next = &utbotInnerVar3;
    int actual = sort_list(&head);
    EXPECT_EQ(-1, actual);
    struct Node expected_head = {-2, (struct Node *) 18446744073709551615};
    EXPECT_EQ(expected_head.x, head.x);
}

TEST(regression, sort_list_test_6)
{
    struct Node head = {0, NULL};
    int actual = sort_list(&head);
    EXPECT_EQ(0, actual);
    struct Node expected_head = {0, NULL};
    EXPECT_EQ(expected_head.x, head.x);
}

typedef int (*sort_list_with_comparator_cmp_arg)(int, int);
int cmp_symbolic[10];
int _sort_list_with_comparator_cmp_stub(int param1, int param2) {
    static int firstTimeCall = 1;
    static int cntCall = 0;
    #ifdef KLEE_MODE
        if (firstTimeCall == 1) {
            firstTimeCall = 0;
            klee_make_symbolic(&cmp_symbolic, sizeof(cmp_symbolic), "cmp_symbolic");
            for (int it_12_0 = 0; it_12_0 < 10; it_12_0 ++) {
                klee_prefer_cex(cmp_symbolic, cmp_symbolic[it_12_0] >= -10  & cmp_symbolic[it_12_0] <= 10);
            }
        }
    #endif
    if (cntCall == 10) {
        cntCall--;
    }
    return cmp_symbolic[cntCall++];
}


TEST(regression, sort_list_with_comparator_test_1)
{
    struct Node head = {0, NULL};
    struct Node utbotInnerVar1 = {555819297, NULL};
    struct Node utbotInnerVar2 = {1077952576, NULL};
    struct Node utbotInnerVar3 = {0, NULL};
    head.next = &utbotInnerVar1;
    utbotInnerVar1.next = &utbotInnerVar2;
    utbotInnerVar2.next = &utbotInnerVar3;
    int cmp_symbolic_buffer[10] = {1, 1, -1, 2, 2, 2, 2, 1, 2, 0};
    memcpy((void *) cmp_symbolic, cmp_symbolic_buffer, sizeof(cmp_symbolic_buffer));
    int actual = sort_list_with_comparator(&head, _sort_list_with_comparator_cmp_stub);
    EXPECT_EQ(1, actual);
    struct Node expected_head = {0, NULL};
    EXPECT_EQ(expected_head.x, head.x);
}

TEST(regression, sort_list_with_comparator_test_2)
{
    struct Node head = {0, NULL};
    struct Node utbotInnerVar1 = {555819297, NULL};
    struct Node utbotInnerVar2 = {1077952576, NULL};
    struct Node utbotInnerVar3 = {0, NULL};
    head.next = &utbotInnerVar1;
    utbotInnerVar1.next = &utbotInnerVar2;
    utbotInnerVar2.next = &utbotInnerVar3;
    int cmp_symbolic_buffer[10] = {1, 1, -1, 2, 2, 2, 2, 1, 0, 0};
    memcpy((void *) cmp_symbolic, cmp_symbolic_buffer, sizeof(cmp_symbolic_buffer));
    int actual = sort_list_with_comparator(&head, _sort_list_with_comparator_cmp_stub);
    EXPECT_EQ(-1, actual);
    struct Node expected_head = {0, NULL};
    EXPECT_EQ(expected_head.x, head.x);
}

TEST(regression, sort_list_with_comparator_test_3)
{
    struct Node head = {0, NULL};
    struct Node utbotInnerVar1 = {0, NULL};
    struct Node utbotInnerVar2 = {1077952576, NULL};
    struct Node utbotInnerVar3 = {0, NULL};
    head.next = &utbotInnerVar1;
    utbotInnerVar1.next = &utbotInnerVar2;
    utbotInnerVar2.next = &utbotInnerVar3;
    int cmp_symbolic_buffer[10] = {0, 1, -1, 2, 2, 2, 2, 1, 2, 0};
    memcpy((void *) cmp_symbolic, cmp_symbolic_buffer, sizeof(cmp_symbolic_buffer));
    int actual = sort_list_with_comparator(&head, _sort_list_with_comparator_cmp_stub);
    EXPECT_EQ(1, actual);
    struct Node expected_head = {0, NULL};
    EXPECT_EQ(expected_head.x, head.x);
}

TEST(regression, sort_list_with_comparator_test_4)
{
    struct Node head = {0, NULL};
    struct Node utbotInnerVar1 = {555819297, NULL};
    struct Node utbotInnerVar2 = {1077952576, NULL};
    struct Node utbotInnerVar3 = {0, NULL};
    head.next = &utbotInnerVar1;
    utbotInnerVar1.next = &utbotInnerVar2;
    utbotInnerVar2.next = &utbotInnerVar3;
    int cmp_symbolic_buffer[10] = {1, 1, -1, 2, 2, 2, 0, 1, 2, 0};
    memcpy((void *) cmp_symbolic, cmp_symbolic_buffer, sizeof(cmp_symbolic_buffer));
    int actual = sort_list_with_comparator(&head, _sort_list_with_comparator_cmp_stub);
    EXPECT_EQ(-1, actual);
    struct Node expected_head = {0, NULL};
    EXPECT_EQ(expected_head.x, head.x);
}

TEST(regression, sort_list_with_comparator_test_5)
{
    struct Node head = {0, NULL};
    struct Node utbotInnerVar1 = {0, NULL};
    head.next = &utbotInnerVar1;
    utbotInnerVar1.next = &utbotInnerVar1;
    int actual = sort_list_with_comparator(&head, _sort_list_with_comparator_cmp_stub);
    EXPECT_EQ(0, actual);
    struct Node expected_head = {0, NULL};
    EXPECT_EQ(expected_head.x, head.x);
}

TEST(regression, sort_list_with_comparator_test_6)
{
    struct Node head = {0, NULL};
    int actual = sort_list_with_comparator(&head, _sort_list_with_comparator_cmp_stub);
    EXPECT_EQ(0, actual);
    struct Node expected_head = {0, NULL};
    EXPECT_EQ(expected_head.x, head.x);
}

typedef int (*find_maximum_compare_arg)(int, int);
int compare_symbolic[10];
int _find_maximum_compare_stub(int param1, int param2) {
    static int firstTimeCall = 1;
    static int cntCall = 0;
    #ifdef KLEE_MODE
        if (firstTimeCall == 1) {
            firstTimeCall = 0;
            klee_make_symbolic(&compare_symbolic, sizeof(compare_symbolic), "compare_symbolic");
            for (int it_16_0 = 0; it_16_0 < 10; it_16_0 ++) {
                klee_prefer_cex(compare_symbolic, compare_symbolic[it_16_0] >= -10  & compare_symbolic[it_16_0] <= 10);
            }
        }
    #endif
    if (cntCall == 10) {
        cntCall--;
    }
    return compare_symbolic[cntCall++];
}


TEST(regression, find_maximum_test_1)
{
    int compare_symbolic_buffer[10] = {2, 0, 0, 0, 0, 0, 0, 0, 0, 0};
    memcpy((void *) compare_symbolic, compare_symbolic_buffer, sizeof(compare_symbolic_buffer));
    int actual = find_maximum(0, 0, _find_maximum_compare_stub);
    EXPECT_EQ(0, actual);
}

TEST(regression, find_maximum_test_2)
{
    int compare_symbolic_buffer[10] = {0, 0, 0, 0, 0, 0, 0, 0, 0, 0};
    memcpy((void *) compare_symbolic, compare_symbolic_buffer, sizeof(compare_symbolic_buffer));
    int actual = find_maximum(0, 0, _find_maximum_compare_stub);
    EXPECT_EQ(0, actual);
}

typedef char (*vowel_consonant_vowel_arg)(char);
char vowel_symbolic[10];
char _vowel_consonant_vowel_stub(char param1) {
    static int firstTimeCall = 1;
    static int cntCall = 0;
    #ifdef KLEE_MODE
        if (firstTimeCall == 1) {
            firstTimeCall = 0;
            klee_make_symbolic(&vowel_symbolic, sizeof(vowel_symbolic), "vowel_symbolic");
            for (int it_14_0 = 0; it_14_0 < 10; it_14_0 ++) {
                klee_prefer_cex(vowel_symbolic, vowel_symbolic[it_14_0] >= 'a' & vowel_symbolic[it_14_0] <= 'z' & vowel_symbolic[it_14_0] != '\0');
            }
        }
    #endif
    if (cntCall == 10) {
        cntCall--;
    }
    return vowel_symbolic[cntCall++];
}


TEST(regression, vowel_consonant_test_1)
{
    char vowel_symbolic_buffer[] = {'o', 'c', 'a', 'c', 'c', 'c', 'c', 'b', 'c', 'c'};
    memcpy((void *) vowel_symbolic, vowel_symbolic_buffer, sizeof(vowel_symbolic_buffer));
    int actual = vowel_consonant('c', _vowel_consonant_vowel_stub);
    EXPECT_EQ(1, actual);
}

TEST(regression, vowel_consonant_test_2)
{
    char vowel_symbolic_buffer[] = {'e', 'c', 'a', 'c', 'c', 'c', 'c', 'b', 'c', 'c'};
    memcpy((void *) vowel_symbolic, vowel_symbolic_buffer, sizeof(vowel_symbolic_buffer));
    int actual = vowel_consonant('c', _vowel_consonant_vowel_stub);
    EXPECT_EQ(1, actual);
}

TEST(regression, vowel_consonant_test_3)
{
    char vowel_symbolic_buffer[] = {'y', 'c', 'a', 'c', 'c', 'c', 'c', 'b', 'c', 'c'};
    memcpy((void *) vowel_symbolic, vowel_symbolic_buffer, sizeof(vowel_symbolic_buffer));
    int actual = vowel_consonant('c', _vowel_consonant_vowel_stub);
    EXPECT_EQ(1, actual);
}

TEST(regression, vowel_consonant_test_4)
{
    char vowel_symbolic_buffer[] = {'p', 'c', 'a', 'c', 'c', 'c', 'c', 'b', 'c', 'c'};
    memcpy((void *) vowel_symbolic, vowel_symbolic_buffer, sizeof(vowel_symbolic_buffer));
    int actual = vowel_consonant('c', _vowel_consonant_vowel_stub);
    EXPECT_EQ(-1, actual);
}

TEST(regression, vowel_consonant_test_5)
{
    char vowel_symbolic_buffer[] = {'u', 'c', 'a', 'c', 'c', 'c', 'c', 'b', 'c', 'c'};
    memcpy((void *) vowel_symbolic, vowel_symbolic_buffer, sizeof(vowel_symbolic_buffer));
    int actual = vowel_consonant('c', _vowel_consonant_vowel_stub);
    EXPECT_EQ(1, actual);
}

TEST(regression, vowel_consonant_test_6)
{
    char vowel_symbolic_buffer[] = {'i', 'c', 'a', 'c', 'c', 'c', 'c', 'b', 'c', 'c'};
    memcpy((void *) vowel_symbolic, vowel_symbolic_buffer, sizeof(vowel_symbolic_buffer));
    int actual = vowel_consonant('c', _vowel_consonant_vowel_stub);
    EXPECT_EQ(1, actual);
}

TEST(regression, vowel_consonant_test_7)
{
    char vowel_symbolic_buffer[] = {'a', 'c', 'a', 'c', 'c', 'c', 'c', 'b', 'c', 'c'};
    memcpy((void *) vowel_symbolic, vowel_symbolic_buffer, sizeof(vowel_symbolic_buffer));
    int actual = vowel_consonant('c', _vowel_consonant_vowel_stub);
    EXPECT_EQ(1, actual);
}

#pragma endregion
#pragma region error
TEST(error, length_of_linked_list3_test_5)
{
    struct Node head = {0, NULL};
    struct Node utbotInnerVar1 = {0, (struct Node *) 255};
    head.next = &utbotInnerVar1;
    length_of_linked_list3(&head);
    struct Node expected_head = {0, NULL};
    EXPECT_EQ(expected_head.x, head.x);
}

TEST(error, length_of_linked_list3_test_6)
{
    struct Node head = {0, (struct Node *) 18446744073709551608};
    length_of_linked_list3(&head);
    struct Node expected_head = {0, NULL};
    EXPECT_EQ(expected_head.x, head.x);
}

TEST(error, length_of_linked_list3_test_7)
{
    struct Node head = {0, NULL};
    struct Node utbotInnerVar1 = {-1, (struct Node *) 18446744073709551608};
    head.next = &utbotInnerVar1;
    length_of_linked_list3(&head);
    struct Node expected_head = {0, NULL};
    EXPECT_EQ(expected_head.x, head.x);
}

TEST(error, length_of_linked_list3_test_8)
{
    struct Node head = {0, NULL};
    struct Node utbotInnerVar1 = {0, (struct Node *) 1125899906842632};
    head.next = &utbotInnerVar1;
    length_of_linked_list3(&head);
    struct Node expected_head = {0, NULL};
    EXPECT_EQ(expected_head.x, head.x);
}

TEST(error, length_of_linked_list3_test_9)
{
    struct Node head = {0, (struct Node *) 255};
    length_of_linked_list3(&head);
    struct Node expected_head = {0, NULL};
    EXPECT_EQ(expected_head.x, head.x);
}

TEST(error, length_of_linked_list2_test_5)
{
    struct Node head = {0, (struct Node *) 281474976710655};
    length_of_linked_list2(&head);
    struct Node expected_head = {0, NULL};
    EXPECT_EQ(expected_head.x, head.x);
}

TEST(error, length_of_linked_list2_test_6)
{
    struct Node head = {0, (struct Node *) 18446744073709551608};
    length_of_linked_list2(&head);
    struct Node expected_head = {0, NULL};
    EXPECT_EQ(expected_head.x, head.x);
}

TEST(error, sum_list_test_2)
{
    struct Node head = {0, NULL};
    struct Node utbotInnerVar1 = {0, NULL};
    head.next = &utbotInnerVar1;
    sum_list(&head);
    struct Node expected_head = {0, NULL};
    EXPECT_EQ(expected_head.x, head.x);
}

TEST(error, sum_list_test_3)
{
    struct Node head = {0, NULL};
    struct Node utbotInnerVar1 = {0, (struct Node *) 1099511627784};
    head.next = &utbotInnerVar1;
    sum_list(&head);
    struct Node expected_head = {0, NULL};
    EXPECT_EQ(expected_head.x, head.x);
}

TEST(error, sum_list_test_4)
{
    struct Node head = {0, (struct Node *) 255};
    sum_list(&head);
    struct Node expected_head = {0, NULL};
    EXPECT_EQ(expected_head.x, head.x);
}

TEST(error, sign_sum_test_1)
{
    struct Node head = {0, NULL};
    struct Node utbotInnerVar1 = {0, (struct Node *) 4398046511112};
    head.next = &utbotInnerVar1;
    sign_sum(&head);
    struct Node expected_head = {0, NULL};
    EXPECT_EQ(expected_head.x, head.x);
}

TEST(error, sign_sum_test_2)
{
    struct Node head = {0, NULL};
    struct Node utbotInnerVar1 = {0, NULL};
    head.next = &utbotInnerVar1;
    sign_sum(&head);
    struct Node expected_head = {0, NULL};
    EXPECT_EQ(expected_head.x, head.x);
}

TEST(error, sign_sum_test_3)
{
    struct Node head = {0, NULL};
    struct Node utbotInnerVar1 = {2105376125, NULL};
    struct Node utbotInnerVar2 = {0, (struct Node *) 223};
    head.next = &utbotInnerVar1;
    utbotInnerVar1.next = &utbotInnerVar2;
    sign_sum(&head);
    struct Node expected_head = {0, NULL};
    EXPECT_EQ(expected_head.x, head.x);
}

TEST(error, sign_sum_test_4)
{
    struct Node head = {0, NULL};
    struct Node utbotInnerVar1 = {0, (struct Node *) 247};
    head.next = &utbotInnerVar1;
    sign_sum(&head);
    struct Node expected_head = {0, NULL};
    EXPECT_EQ(expected_head.x, head.x);
}

TEST(error, sign_sum_test_5)
{
    struct Node head = {0, (struct Node *) 255};
    sign_sum(&head);
    struct Node expected_head = {0, NULL};
    EXPECT_EQ(expected_head.x, head.x);
}

TEST(error, hard_length2_test_4)
{
    struct HardNode head = {{0, {(struct HardNode *) 18446744073709551608, 0}, 0.000000e+00}, 'c', (struct HardNode *) 18446744073709551615};
    hard_length2(&head);
    struct HardNode expected_head = {{0, {NULL, 0}, 0.000000e+00}, '\0', NULL};
    EXPECT_EQ(expected_head.in.x, head.in.x);
    EXPECT_EQ(expected_head.in.superIn.step, head.in.superIn.step);
    EXPECT_NEAR(expected_head.in.d, head.in.d, utbot_abs_error);
    EXPECT_EQ(expected_head.letter, head.letter);
}

TEST(error, hard_length2_test_5)
{
    struct HardNode head = {{0, {(struct HardNode *) 255, 0}, 0.000000e+00}, 'c', NULL};
    hard_length2(&head);
    struct HardNode expected_head = {{0, {NULL, 0}, 0.000000e+00}, '\0', NULL};
    EXPECT_EQ(expected_head.in.x, head.in.x);
    EXPECT_EQ(expected_head.in.superIn.step, head.in.superIn.step);
    EXPECT_NEAR(expected_head.in.d, head.in.d, utbot_abs_error);
    EXPECT_EQ(expected_head.letter, head.letter);
}

TEST(error, middle_length2_test_4)
{
    struct Kuku head = {{(struct Kuku *) 255, 'c'}, 0};
    middle_length2(&head);
    struct Kuku expected_head = {{NULL, '\0'}, 0};
    EXPECT_EQ(expected_head.in.letter, head.in.letter);
    EXPECT_EQ(expected_head.x, head.x);
}

TEST(error, cycle_list3_test_11)
{
    struct Node head = {0, (struct Node *) 281474976710655};
    cycle_list3(&head);
    struct Node expected_head = {0, NULL};
    EXPECT_EQ(expected_head.x, head.x);
}

TEST(error, cycle_list3_test_12)
{
    struct Node head = {0, NULL};
    struct Node utbotInnerVar1 = {-1, (struct Node *) 18446744073709551608};
    head.next = &utbotInnerVar1;
    cycle_list3(&head);
    struct Node expected_head = {0, NULL};
    EXPECT_EQ(expected_head.x, head.x);
}

TEST(error, cycle_list3_test_13)
{
    struct Node head = {0, NULL};
    struct Node utbotInnerVar1 = {471604252, (struct Node *) 17176332177383593480};
    head.next = &utbotInnerVar1;
    cycle_list3(&head);
    struct Node expected_head = {0, NULL};
    EXPECT_EQ(expected_head.x, head.x);
}

TEST(error, cycle_list3_test_14)
{
    struct Node head = {0, NULL};
    struct Node utbotInnerVar1 = {-1, (struct Node *) 18446744073709551615};
    head.next = &utbotInnerVar1;
    cycle_list3(&head);
    struct Node expected_head = {0, NULL};
    EXPECT_EQ(expected_head.x, head.x);
}

TEST(error, cycle_list3_test_15)
{
    struct Node head = {0, (struct Node *) 18446744073709551608};
    cycle_list3(&head);
    struct Node expected_head = {0, NULL};
    EXPECT_EQ(expected_head.x, head.x);
}

TEST(error, len_bound_test_3)
{
    struct Node head = {0, NULL};
    struct Node utbotInnerVar1 = {0, (struct Node *) 9007199254741000};
    head.next = &utbotInnerVar1;
    len_bound(&head, 8);
    struct Node expected_head = {0, NULL};
    EXPECT_EQ(expected_head.x, head.x);
}

TEST(error, len_bound_test_4)
{
    struct Node head = {0, (struct Node *) 18446744073709551608};
    len_bound(&head, 8);
    struct Node expected_head = {0, NULL};
    EXPECT_EQ(expected_head.x, head.x);
}

TEST(error, len_bound_test_5)
{
    struct Node head = {0, (struct Node *) 255};
    len_bound(&head, 8);
    struct Node expected_head = {0, NULL};
    EXPECT_EQ(expected_head.x, head.x);
}

TEST(error, sort_list_test_7)
{
    struct Node head = {0, NULL};
    struct Node utbotInnerVar1 = {0, (struct Node *) 2251799813685256};
    head.next = &utbotInnerVar1;
    sort_list(&head);
    struct Node expected_head = {0, NULL};
    EXPECT_EQ(expected_head.x, head.x);
}

TEST(error, sort_list_test_8)
{
    struct Node head = {0, (struct Node *) 255};
    sort_list(&head);
    struct Node expected_head = {0, NULL};
    EXPECT_EQ(expected_head.x, head.x);
}

TEST(error, sort_list_test_9)
{
    struct Node head = {0, NULL};
    struct Node utbotInnerVar1 = {0, (struct Node *) 253};
    head.next = &utbotInnerVar1;
    sort_list(&head);
    struct Node expected_head = {0, NULL};
    EXPECT_EQ(expected_head.x, head.x);
}

TEST(error, sort_list_test_10)
{
    struct Node head = {0, (struct Node *) 18446744073709551608};
    sort_list(&head);
    struct Node expected_head = {0, NULL};
    EXPECT_EQ(expected_head.x, head.x);
}

TEST(error, sort_list_with_comparator_test_7)
{
    struct Node head = {0, NULL};
    struct Node utbotInnerVar1 = {134744072, (struct Node *) 131080};
    head.next = &utbotInnerVar1;
    sort_list_with_comparator(&head, _sort_list_with_comparator_cmp_stub);
    struct Node expected_head = {0, NULL};
    EXPECT_EQ(expected_head.x, head.x);
}

TEST(error, sort_list_with_comparator_test_8)
{
    struct Node head = {0, (struct Node *) 18446744073709551608};
    sort_list_with_comparator(&head, _sort_list_with_comparator_cmp_stub);
    struct Node expected_head = {0, NULL};
    EXPECT_EQ(expected_head.x, head.x);
}

TEST(error, sort_list_with_comparator_test_9)
{
    struct Node head = {0, NULL};
    struct Node utbotInnerVar1 = {0, NULL};
    struct Node utbotInnerVar2 = {0, (struct Node *) 253};
    head.next = &utbotInnerVar1;
    utbotInnerVar1.next = &utbotInnerVar2;
    sort_list_with_comparator(&head, _sort_list_with_comparator_cmp_stub);
    struct Node expected_head = {0, NULL};
    EXPECT_EQ(expected_head.x, head.x);
}

TEST(error, sort_list_with_comparator_test_10)
{
    struct Node head = {0, NULL};
    struct Node utbotInnerVar1 = {0, (struct Node *) 239};
    head.next = &utbotInnerVar1;
    sort_list_with_comparator(&head, _sort_list_with_comparator_cmp_stub);
    struct Node expected_head = {0, NULL};
    EXPECT_EQ(expected_head.x, head.x);
}

TEST(error, sort_list_with_comparator_test_11)
{
    struct Node head = {0, (struct Node *) 255};
    sort_list_with_comparator(&head, _sort_list_with_comparator_cmp_stub);
    struct Node expected_head = {0, NULL};
    EXPECT_EQ(expected_head.x, head.x);
}

#pragma endregion
}
