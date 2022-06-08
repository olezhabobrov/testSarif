// 1654711952000000000
// Please, do not change the line above

/*
 * This file is automatically generated by UnitTestBot. For further information see https://github.com/UnitTestBot/UTBotCpp
 * Copyright (c) Huawei Technologies Co., Ltd. 2012-2021. All rights reserved.
 */

#ifdef KLEE_MODE
extern void klee_make_symbolic(void *addr, unsigned long long nbytes, const char *name);
#endif
#include "bits_stub.h"

#define NULL ((void*)0)

unsigned int NSE_BITS_CLZ64_symbolic[10];
unsigned int NSE_BITS_CLZ64_symbolic[10];
unsigned int NSE_BITS_CLZ64(unsigned long long uiiData) {
    static int firstTimeCall = 1;
    static int cntCall = 0;
    #ifdef KLEE_MODE
        if (firstTimeCall == 1) {
            firstTimeCall = 0;
            klee_make_symbolic(&NSE_BITS_CLZ64_symbolic, sizeof(NSE_BITS_CLZ64_symbolic), "NSE_BITS_CLZ64_symbolic");
            for (int it_23_0 = 0; it_23_0 < 10; it_23_0 ++) {
                klee_prefer_cex(NSE_BITS_CLZ64_symbolic, NSE_BITS_CLZ64_symbolic[it_23_0]<= 10);
            }
        }
    #endif
    if (cntCall == 10) {
        cntCall--;
    }
    return NSE_BITS_CLZ64_symbolic[cntCall++];
}


unsigned int foo1_symbolic[10];
unsigned int foo1_symbolic[10];
unsigned int foo1(const FOO_ATTRIBUTE * attrib, unsigned int num, unsigned int id, unsigned int * offset, unsigned int * len) {
    static int firstTimeCall = 1;
    static int cntCall = 0;
    #ifdef KLEE_MODE
        if (firstTimeCall == 1) {
            firstTimeCall = 0;
            klee_make_symbolic(&foo1_symbolic, sizeof(foo1_symbolic), "foo1_symbolic");
            for (int it_13_0 = 0; it_13_0 < 10; it_13_0 ++) {
                klee_prefer_cex(foo1_symbolic, foo1_symbolic[it_13_0]<= 10);
            }
        }
    #endif
    if (cntCall == 10) {
        cntCall--;
    }
    return foo1_symbolic[cntCall++];
}


