// 1654711952000000000
// Please, do not change the line above

/*
 * This file is automatically generated by UnitTestBot. For further information see https://github.com/UnitTestBot/UTBotCpp
 * Copyright (c) Huawei Technologies Co., Ltd. 2012-2021. All rights reserved.
 */

#ifdef KLEE_MODE
extern void klee_make_symbolic(void *addr, unsigned long long nbytes, const char *name);
#endif
#include "static_stub.h"

#define NULL ((void*)0)

int inline_sum_symbolic[10];
int inline_sum_symbolic[10];
int inline_sum(int a, int b) {
    static int firstTimeCall = 1;
    static int cntCall = 0;
    #ifdef KLEE_MODE
        if (firstTimeCall == 1) {
            firstTimeCall = 0;
            klee_make_symbolic(&inline_sum_symbolic, sizeof(inline_sum_symbolic), "inline_sum_symbolic");
            for (int it_19_0 = 0; it_19_0 < 10; it_19_0 ++) {
                klee_prefer_cex(inline_sum_symbolic, inline_sum_symbolic[it_19_0] >= -10  & inline_sum_symbolic[it_19_0] <= 10);
            }
        }
    #endif
    if (cntCall == 10) {
        cntCall--;
    }
    return inline_sum_symbolic[cntCall++];
}


