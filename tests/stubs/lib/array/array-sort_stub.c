// 1654711952000000000
// Please, do not change the line above

/*
 * This file is automatically generated by UnitTestBot. For further information see https://github.com/UnitTestBot/UTBotCpp
 * Copyright (c) Huawei Technologies Co., Ltd. 2012-2021. All rights reserved.
 */

#ifdef KLEE_MODE
extern void klee_make_symbolic(void *addr, unsigned long long nbytes, const char *name);
#endif
#include "array-sort_stub.h"

#define NULL ((void*)0)

int sort_array_symbolic[10];
int sort_array_symbolic[10];
int sort_array(int * arr, int n) {
    static int firstTimeCall = 1;
    static int cntCall = 0;
    #ifdef KLEE_MODE
        if (firstTimeCall == 1) {
            firstTimeCall = 0;
            klee_make_symbolic(&sort_array_symbolic, sizeof(sort_array_symbolic), "sort_array_symbolic");
            for (int it_19_0 = 0; it_19_0 < 10; it_19_0 ++) {
                klee_prefer_cex(sort_array_symbolic, sort_array_symbolic[it_19_0] >= -10  & sort_array_symbolic[it_19_0] <= 10);
            }
        }
    #endif
    if (cntCall == 10) {
        cntCall--;
    }
    return sort_array_symbolic[cntCall++];
}


typedef int (*sort_array_with_comparator_cmp_arg)(int, int);
int sort_array_with_comparator_symbolic[10];
int sort_array_with_comparator_symbolic[10];
int sort_array_with_comparator(int * arr, int n, sort_array_with_comparator_cmp_arg cmp) {
    static int firstTimeCall = 1;
    static int cntCall = 0;
    #ifdef KLEE_MODE
        if (firstTimeCall == 1) {
            firstTimeCall = 0;
            klee_make_symbolic(&sort_array_with_comparator_symbolic, sizeof(sort_array_with_comparator_symbolic), "sort_array_with_comparator_symbolic");
            for (int it_35_0 = 0; it_35_0 < 10; it_35_0 ++) {
                klee_prefer_cex(sort_array_with_comparator_symbolic, sort_array_with_comparator_symbolic[it_35_0] >= -10  & sort_array_with_comparator_symbolic[it_35_0] <= 10);
            }
        }
    #endif
    if (cntCall == 10) {
        cntCall--;
    }
    return sort_array_with_comparator_symbolic[cntCall++];
}


