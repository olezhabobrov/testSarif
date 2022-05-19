// 1652985893000000000
// Please, do not change the line above

/*
 * This file is automatically generated by UnitTestBot. For further information see https://github.com/UnitTestBot/UTBotCpp
 * Copyright (c) Huawei Technologies Co., Ltd. 2012-2021. All rights reserved.
 */

#ifdef KLEE_MODE
extern void klee_make_symbolic(void *addr, unsigned long long nbytes, const char *name);
#endif
#include "inner_basic_functions_stub.h"

#define NULL ((void*)0)

int sum_up_to_symbolic[10];
int sum_up_to_symbolic[10];
int sum_up_to(unsigned int n) {
    static int firstTimeCall = 1;
    static int cntCall = 0;
    #ifdef KLEE_MODE
        if (firstTimeCall == 1) {
            firstTimeCall = 0;
            klee_make_symbolic(&sum_up_to_symbolic, sizeof(sum_up_to_symbolic), "sum_up_to_symbolic");
            for (int it_18_0 = 0; it_18_0 < 10; it_18_0 ++) {
                klee_prefer_cex(sum_up_to_symbolic, sum_up_to_symbolic[it_18_0] >= -10  & sum_up_to_symbolic[it_18_0] <= 10);
            }
        }
    #endif
    if (cntCall == 10) {
        cntCall--;
    }
    return sum_up_to_symbolic[cntCall++];
}


int median_symbolic[10];
int median_symbolic[10];
int median(int a, int b, int c) {
    static int firstTimeCall = 1;
    static int cntCall = 0;
    #ifdef KLEE_MODE
        if (firstTimeCall == 1) {
            firstTimeCall = 0;
            klee_make_symbolic(&median_symbolic, sizeof(median_symbolic), "median_symbolic");
            for (int it_15_0 = 0; it_15_0 < 10; it_15_0 ++) {
                klee_prefer_cex(median_symbolic, median_symbolic[it_15_0] >= -10  & median_symbolic[it_15_0] <= 10);
            }
        }
    #endif
    if (cntCall == 10) {
        cntCall--;
    }
    return median_symbolic[cntCall++];
}


