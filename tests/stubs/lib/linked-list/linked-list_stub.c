// 1652985893000000000
// Please, do not change the line above

/*
 * This file is automatically generated by UnitTestBot. For further information see https://github.com/UnitTestBot/UTBotCpp
 * Copyright (c) Huawei Technologies Co., Ltd. 2012-2021. All rights reserved.
 */

#ifdef KLEE_MODE
extern void klee_make_symbolic(void *addr, unsigned long long nbytes, const char *name);
#endif
#include "linked-list_stub.h"

#define NULL ((void*)0)

int length_of_linked_list3_symbolic[10];
int length_of_linked_list3_symbolic[10];
int length_of_linked_list3(struct Node * head) {
    static int firstTimeCall = 1;
    static int cntCall = 0;
    #ifdef KLEE_MODE
        if (firstTimeCall == 1) {
            firstTimeCall = 0;
            klee_make_symbolic(&length_of_linked_list3_symbolic, sizeof(length_of_linked_list3_symbolic), "length_of_linked_list3_symbolic");
            for (int it_31_0 = 0; it_31_0 < 10; it_31_0 ++) {
                klee_prefer_cex(length_of_linked_list3_symbolic, length_of_linked_list3_symbolic[it_31_0] >= -10  & length_of_linked_list3_symbolic[it_31_0] <= 10);
            }
        }
    #endif
    if (cntCall == 10) {
        cntCall--;
    }
    return length_of_linked_list3_symbolic[cntCall++];
}


int length_of_linked_list2_symbolic[10];
int length_of_linked_list2_symbolic[10];
int length_of_linked_list2(struct Node * head) {
    static int firstTimeCall = 1;
    static int cntCall = 0;
    #ifdef KLEE_MODE
        if (firstTimeCall == 1) {
            firstTimeCall = 0;
            klee_make_symbolic(&length_of_linked_list2_symbolic, sizeof(length_of_linked_list2_symbolic), "length_of_linked_list2_symbolic");
            for (int it_31_0 = 0; it_31_0 < 10; it_31_0 ++) {
                klee_prefer_cex(length_of_linked_list2_symbolic, length_of_linked_list2_symbolic[it_31_0] >= -10  & length_of_linked_list2_symbolic[it_31_0] <= 10);
            }
        }
    #endif
    if (cntCall == 10) {
        cntCall--;
    }
    return length_of_linked_list2_symbolic[cntCall++];
}


int sum_list_symbolic[10];
int sum_list_symbolic[10];
int sum_list(struct Node * head) {
    static int firstTimeCall = 1;
    static int cntCall = 0;
    #ifdef KLEE_MODE
        if (firstTimeCall == 1) {
            firstTimeCall = 0;
            klee_make_symbolic(&sum_list_symbolic, sizeof(sum_list_symbolic), "sum_list_symbolic");
            for (int it_17_0 = 0; it_17_0 < 10; it_17_0 ++) {
                klee_prefer_cex(sum_list_symbolic, sum_list_symbolic[it_17_0] >= -10  & sum_list_symbolic[it_17_0] <= 10);
            }
        }
    #endif
    if (cntCall == 10) {
        cntCall--;
    }
    return sum_list_symbolic[cntCall++];
}


int sign_sum_symbolic[10];
int sign_sum_symbolic[10];
int sign_sum(struct Node * head) {
    static int firstTimeCall = 1;
    static int cntCall = 0;
    #ifdef KLEE_MODE
        if (firstTimeCall == 1) {
            firstTimeCall = 0;
            klee_make_symbolic(&sign_sum_symbolic, sizeof(sign_sum_symbolic), "sign_sum_symbolic");
            for (int it_17_0 = 0; it_17_0 < 10; it_17_0 ++) {
                klee_prefer_cex(sign_sum_symbolic, sign_sum_symbolic[it_17_0] >= -10  & sign_sum_symbolic[it_17_0] <= 10);
            }
        }
    #endif
    if (cntCall == 10) {
        cntCall--;
    }
    return sign_sum_symbolic[cntCall++];
}


int hard_length2_symbolic[10];
int hard_length2_symbolic[10];
int hard_length2(struct HardNode * head) {
    static int firstTimeCall = 1;
    static int cntCall = 0;
    #ifdef KLEE_MODE
        if (firstTimeCall == 1) {
            firstTimeCall = 0;
            klee_make_symbolic(&hard_length2_symbolic, sizeof(hard_length2_symbolic), "hard_length2_symbolic");
            for (int it_21_0 = 0; it_21_0 < 10; it_21_0 ++) {
                klee_prefer_cex(hard_length2_symbolic, hard_length2_symbolic[it_21_0] >= -10  & hard_length2_symbolic[it_21_0] <= 10);
            }
        }
    #endif
    if (cntCall == 10) {
        cntCall--;
    }
    return hard_length2_symbolic[cntCall++];
}


int middle_length2_symbolic[10];
int middle_length2_symbolic[10];
int middle_length2(struct Kuku * head) {
    static int firstTimeCall = 1;
    static int cntCall = 0;
    #ifdef KLEE_MODE
        if (firstTimeCall == 1) {
            firstTimeCall = 0;
            klee_make_symbolic(&middle_length2_symbolic, sizeof(middle_length2_symbolic), "middle_length2_symbolic");
            for (int it_23_0 = 0; it_23_0 < 10; it_23_0 ++) {
                klee_prefer_cex(middle_length2_symbolic, middle_length2_symbolic[it_23_0] >= -10  & middle_length2_symbolic[it_23_0] <= 10);
            }
        }
    #endif
    if (cntCall == 10) {
        cntCall--;
    }
    return middle_length2_symbolic[cntCall++];
}


int cycle_list3_symbolic[10];
int cycle_list3_symbolic[10];
int cycle_list3(struct Node * head) {
    static int firstTimeCall = 1;
    static int cntCall = 0;
    #ifdef KLEE_MODE
        if (firstTimeCall == 1) {
            firstTimeCall = 0;
            klee_make_symbolic(&cycle_list3_symbolic, sizeof(cycle_list3_symbolic), "cycle_list3_symbolic");
            for (int it_20_0 = 0; it_20_0 < 10; it_20_0 ++) {
                klee_prefer_cex(cycle_list3_symbolic, cycle_list3_symbolic[it_20_0] >= -10  & cycle_list3_symbolic[it_20_0] <= 10);
            }
        }
    #endif
    if (cntCall == 10) {
        cntCall--;
    }
    return cycle_list3_symbolic[cntCall++];
}


int len_bound_symbolic[10];
int len_bound_symbolic[10];
int len_bound(struct Node * head, int bound) {
    static int firstTimeCall = 1;
    static int cntCall = 0;
    #ifdef KLEE_MODE
        if (firstTimeCall == 1) {
            firstTimeCall = 0;
            klee_make_symbolic(&len_bound_symbolic, sizeof(len_bound_symbolic), "len_bound_symbolic");
            for (int it_18_0 = 0; it_18_0 < 10; it_18_0 ++) {
                klee_prefer_cex(len_bound_symbolic, len_bound_symbolic[it_18_0] >= -10  & len_bound_symbolic[it_18_0] <= 10);
            }
        }
    #endif
    if (cntCall == 10) {
        cntCall--;
    }
    return len_bound_symbolic[cntCall++];
}


int sort_list_symbolic[10];
int sort_list_symbolic[10];
int sort_list(struct Node * head) {
    static int firstTimeCall = 1;
    static int cntCall = 0;
    #ifdef KLEE_MODE
        if (firstTimeCall == 1) {
            firstTimeCall = 0;
            klee_make_symbolic(&sort_list_symbolic, sizeof(sort_list_symbolic), "sort_list_symbolic");
            for (int it_18_0 = 0; it_18_0 < 10; it_18_0 ++) {
                klee_prefer_cex(sort_list_symbolic, sort_list_symbolic[it_18_0] >= -10  & sort_list_symbolic[it_18_0] <= 10);
            }
        }
    #endif
    if (cntCall == 10) {
        cntCall--;
    }
    return sort_list_symbolic[cntCall++];
}


typedef int (*sort_list_with_comparator_cmp_arg)(int, int);
int sort_list_with_comparator_symbolic[10];
int sort_list_with_comparator_symbolic[10];
int sort_list_with_comparator(struct Node * head, sort_list_with_comparator_cmp_arg cmp) {
    static int firstTimeCall = 1;
    static int cntCall = 0;
    #ifdef KLEE_MODE
        if (firstTimeCall == 1) {
            firstTimeCall = 0;
            klee_make_symbolic(&sort_list_with_comparator_symbolic, sizeof(sort_list_with_comparator_symbolic), "sort_list_with_comparator_symbolic");
            for (int it_34_0 = 0; it_34_0 < 10; it_34_0 ++) {
                klee_prefer_cex(sort_list_with_comparator_symbolic, sort_list_with_comparator_symbolic[it_34_0] >= -10  & sort_list_with_comparator_symbolic[it_34_0] <= 10);
            }
        }
    #endif
    if (cntCall == 10) {
        cntCall--;
    }
    return sort_list_with_comparator_symbolic[cntCall++];
}


typedef int (*find_maximum_compare_arg)(int, int);
int find_maximum_symbolic[10];
int find_maximum_symbolic[10];
int find_maximum(int x, int y, find_maximum_compare_arg compare) {
    static int firstTimeCall = 1;
    static int cntCall = 0;
    #ifdef KLEE_MODE
        if (firstTimeCall == 1) {
            firstTimeCall = 0;
            klee_make_symbolic(&find_maximum_symbolic, sizeof(find_maximum_symbolic), "find_maximum_symbolic");
            for (int it_21_0 = 0; it_21_0 < 10; it_21_0 ++) {
                klee_prefer_cex(find_maximum_symbolic, find_maximum_symbolic[it_21_0] >= -10  & find_maximum_symbolic[it_21_0] <= 10);
            }
        }
    #endif
    if (cntCall == 10) {
        cntCall--;
    }
    return find_maximum_symbolic[cntCall++];
}


typedef char (*vowel_consonant_vowel_arg)(char);
int vowel_consonant_symbolic[10];
int vowel_consonant_symbolic[10];
int vowel_consonant(char c, vowel_consonant_vowel_arg vowel) {
    static int firstTimeCall = 1;
    static int cntCall = 0;
    #ifdef KLEE_MODE
        if (firstTimeCall == 1) {
            firstTimeCall = 0;
            klee_make_symbolic(&vowel_consonant_symbolic, sizeof(vowel_consonant_symbolic), "vowel_consonant_symbolic");
            for (int it_24_0 = 0; it_24_0 < 10; it_24_0 ++) {
                klee_prefer_cex(vowel_consonant_symbolic, vowel_consonant_symbolic[it_24_0] >= -10  & vowel_consonant_symbolic[it_24_0] <= 10);
            }
        }
    #endif
    if (cntCall == 10) {
        cntCall--;
    }
    return vowel_consonant_symbolic[cntCall++];
}


