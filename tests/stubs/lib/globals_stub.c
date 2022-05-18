// 1652899851000000000
// Please, do not change the line above

/*
 * This file is automatically generated by UnitTestBot. For further information see https://github.com/UnitTestBot/UTBotCpp
 * Copyright (c) Huawei Technologies Co., Ltd. 2012-2021. All rights reserved.
 */

#ifdef KLEE_MODE
extern void klee_make_symbolic(void *addr, unsigned long long nbytes, const char *name);
#endif
#include "globals_stub.h"

#define NULL ((void*)0)

int increment_symbolic[10];
int increment_symbolic[10];
int increment() {
    static int firstTimeCall = 1;
    static int cntCall = 0;
    #ifdef KLEE_MODE
        if (firstTimeCall == 1) {
            firstTimeCall = 0;
            klee_make_symbolic(&increment_symbolic, sizeof(increment_symbolic), "increment_symbolic");
            for (int it_18_0 = 0; it_18_0 < 10; it_18_0 ++) {
                klee_prefer_cex(increment_symbolic, increment_symbolic[it_18_0] >= -10  & increment_symbolic[it_18_0] <= 10);
            }
        }
    #endif
    if (cntCall == 10) {
        cntCall--;
    }
    return increment_symbolic[cntCall++];
}


int use_global_array_symbolic[10];
int use_global_array_symbolic[10];
int use_global_array(int x) {
    static int firstTimeCall = 1;
    static int cntCall = 0;
    #ifdef KLEE_MODE
        if (firstTimeCall == 1) {
            firstTimeCall = 0;
            klee_make_symbolic(&use_global_array_symbolic, sizeof(use_global_array_symbolic), "use_global_array_symbolic");
            for (int it_25_0 = 0; it_25_0 < 10; it_25_0 ++) {
                klee_prefer_cex(use_global_array_symbolic, use_global_array_symbolic[it_25_0] >= -10  & use_global_array_symbolic[it_25_0] <= 10);
            }
        }
    #endif
    if (cntCall == 10) {
        cntCall--;
    }
    return use_global_array_symbolic[cntCall++];
}


char use_global_strings_symbolic[10];
char use_global_strings_symbolic[10];
char use_global_strings() {
    static int firstTimeCall = 1;
    static int cntCall = 0;
    #ifdef KLEE_MODE
        if (firstTimeCall == 1) {
            firstTimeCall = 0;
            klee_make_symbolic(&use_global_strings_symbolic, sizeof(use_global_strings_symbolic), "use_global_strings_symbolic");
            for (int it_27_0 = 0; it_27_0 < 10; it_27_0 ++) {
                klee_prefer_cex(use_global_strings_symbolic, use_global_strings_symbolic[it_27_0] >= 'a' & use_global_strings_symbolic[it_27_0] <= 'z' & use_global_strings_symbolic[it_27_0] != '\0');
            }
        }
    #endif
    if (cntCall == 10) {
        cntCall--;
    }
    return use_global_strings_symbolic[cntCall++];
}


int use_global_arrays_symbolic[10];
int use_global_arrays_symbolic[10];
int use_global_arrays() {
    static int firstTimeCall = 1;
    static int cntCall = 0;
    #ifdef KLEE_MODE
        if (firstTimeCall == 1) {
            firstTimeCall = 0;
            klee_make_symbolic(&use_global_arrays_symbolic, sizeof(use_global_arrays_symbolic), "use_global_arrays_symbolic");
            for (int it_26_0 = 0; it_26_0 < 10; it_26_0 ++) {
                klee_prefer_cex(use_global_arrays_symbolic, use_global_arrays_symbolic[it_26_0] >= -10  & use_global_arrays_symbolic[it_26_0] <= 10);
            }
        }
    #endif
    if (cntCall == 10) {
        cntCall--;
    }
    return use_global_arrays_symbolic[cntCall++];
}


void use_global_handler(int status) {
    return;
}


