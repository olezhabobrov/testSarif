// 1654082892000000000
// Please, do not change the line above

/*
 * This file is automatically generated by UnitTestBot. For further information see https://github.com/UnitTestBot/UTBotCpp
 * Copyright (c) Huawei Technologies Co., Ltd. 2012-2021. All rights reserved.
 */

#ifdef KLEE_MODE
extern void klee_make_symbolic(void *addr, unsigned long long nbytes, const char *name);
#endif
#include "main_stub.h"

#define NULL ((void*)0)

int main2_symbolic[10];
int main2_symbolic[10];
int main2(int argc, char ** argv) {
    static int firstTimeCall = 1;
    static int cntCall = 0;
    #ifdef KLEE_MODE
        if (firstTimeCall == 1) {
            firstTimeCall = 0;
            klee_make_symbolic(&main2_symbolic, sizeof(main2_symbolic), "main2_symbolic");
            for (int it_14_0 = 0; it_14_0 < 10; it_14_0 ++) {
                klee_prefer_cex(main2_symbolic, main2_symbolic[it_14_0] >= -10  & main2_symbolic[it_14_0] <= 10);
            }
        }
    #endif
    if (cntCall == 10) {
        cntCall--;
    }
    return main2_symbolic[cntCall++];
}


int main_symbolic[10];
int main_symbolic[10];
int main(int argc, char ** argv) {
    static int firstTimeCall = 1;
    static int cntCall = 0;
    #ifdef KLEE_MODE
        if (firstTimeCall == 1) {
            firstTimeCall = 0;
            klee_make_symbolic(&main_symbolic, sizeof(main_symbolic), "main_symbolic");
            for (int it_13_0 = 0; it_13_0 < 10; it_13_0 ++) {
                klee_prefer_cex(main_symbolic, main_symbolic[it_13_0] >= -10  & main_symbolic[it_13_0] <= 10);
            }
        }
    #endif
    if (cntCall == 10) {
        cntCall--;
    }
    return main_symbolic[cntCall++];
}


