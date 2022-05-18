// 1652885112000000000
// Please, do not change the line above

/*
 * This file is automatically generated by UnitTestBot. For further information see https://github.com/UnitTestBot/UTBotCpp
 * Copyright (c) Huawei Technologies Co., Ltd. 2012-2021. All rights reserved.
 */

#ifdef KLEE_MODE
extern void klee_make_symbolic(void *addr, unsigned long long nbytes, const char *name);
#endif
#include "basic_functions_stub.h"

#define NULL ((void*)0)

int max__symbolic[10];
int max__symbolic[10];
int max_(int a, int b) {
    static int firstTimeCall = 1;
    static int cntCall = 0;
    #ifdef KLEE_MODE
        if (firstTimeCall == 1) {
            firstTimeCall = 0;
            klee_make_symbolic(&max__symbolic, sizeof(max__symbolic), "max__symbolic");
            for (int it_13_0 = 0; it_13_0 < 10; it_13_0 ++) {
                klee_prefer_cex(max__symbolic, max__symbolic[it_13_0] >= -10  & max__symbolic[it_13_0] <= 10);
            }
        }
    #endif
    if (cntCall == 10) {
        cntCall--;
    }
    return max__symbolic[cntCall++];
}


int min_symbolic[10];
int min_symbolic[10];
int min(int a, int b) {
    static int firstTimeCall = 1;
    static int cntCall = 0;
    #ifdef KLEE_MODE
        if (firstTimeCall == 1) {
            firstTimeCall = 0;
            klee_make_symbolic(&min_symbolic, sizeof(min_symbolic), "min_symbolic");
            for (int it_12_0 = 0; it_12_0 < 10; it_12_0 ++) {
                klee_prefer_cex(min_symbolic, min_symbolic[it_12_0] >= -10  & min_symbolic[it_12_0] <= 10);
            }
        }
    #endif
    if (cntCall == 10) {
        cntCall--;
    }
    return min_symbolic[cntCall++];
}


int sqr_positive_symbolic[10];
int sqr_positive_symbolic[10];
int sqr_positive(int a) {
    static int firstTimeCall = 1;
    static int cntCall = 0;
    #ifdef KLEE_MODE
        if (firstTimeCall == 1) {
            firstTimeCall = 0;
            klee_make_symbolic(&sqr_positive_symbolic, sizeof(sqr_positive_symbolic), "sqr_positive_symbolic");
            for (int it_21_0 = 0; it_21_0 < 10; it_21_0 ++) {
                klee_prefer_cex(sqr_positive_symbolic, sqr_positive_symbolic[it_21_0] >= -10  & sqr_positive_symbolic[it_21_0] <= 10);
            }
        }
    #endif
    if (cntCall == 10) {
        cntCall--;
    }
    return sqr_positive_symbolic[cntCall++];
}


int simple_loop_symbolic[10];
int simple_loop_symbolic[10];
int simple_loop(unsigned int n) {
    static int firstTimeCall = 1;
    static int cntCall = 0;
    #ifdef KLEE_MODE
        if (firstTimeCall == 1) {
            firstTimeCall = 0;
            klee_make_symbolic(&simple_loop_symbolic, sizeof(simple_loop_symbolic), "simple_loop_symbolic");
            for (int it_20_0 = 0; it_20_0 < 10; it_20_0 ++) {
                klee_prefer_cex(simple_loop_symbolic, simple_loop_symbolic[it_20_0] >= -10  & simple_loop_symbolic[it_20_0] <= 10);
            }
        }
    #endif
    if (cntCall == 10) {
        cntCall--;
    }
    return simple_loop_symbolic[cntCall++];
}


