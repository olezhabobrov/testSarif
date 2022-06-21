// 1655816143000000000
// Please, do not change the line above

/*
 * This file is automatically generated by UnitTestBot. For further information see https://github.com/UnitTestBot/UTBotCpp
 * Copyright (c) Huawei Technologies Co., Ltd. 2012-2021. All rights reserved.
 */

#ifdef KLEE_MODE
extern void klee_make_symbolic(void *addr, unsigned long long nbytes, const char *name);
#endif
#include "floating_point_stub.h"

#define NULL ((void*)0)

int get_double_sign_symbolic[10];
int get_double_sign_symbolic[10];
int get_double_sign(double x) {
    static int firstTimeCall = 1;
    static int cntCall = 0;
    #ifdef KLEE_MODE
        if (firstTimeCall == 1) {
            firstTimeCall = 0;
            klee_make_symbolic(&get_double_sign_symbolic, sizeof(get_double_sign_symbolic), "get_double_sign_symbolic");
            for (int it_24_0 = 0; it_24_0 < 10; it_24_0 ++) {
                klee_prefer_cex(get_double_sign_symbolic, get_double_sign_symbolic[it_24_0] >= -10  & get_double_sign_symbolic[it_24_0] <= 10);
            }
        }
    #endif
    if (cntCall == 10) {
        cntCall--;
    }
    return get_double_sign_symbolic[cntCall++];
}


int is_close_symbolic[10];
int is_close_symbolic[10];
int is_close(float_t x, int y) {
    static int firstTimeCall = 1;
    static int cntCall = 0;
    #ifdef KLEE_MODE
        if (firstTimeCall == 1) {
            firstTimeCall = 0;
            klee_make_symbolic(&is_close_symbolic, sizeof(is_close_symbolic), "is_close_symbolic");
            for (int it_17_0 = 0; it_17_0 < 10; it_17_0 ++) {
                klee_prefer_cex(is_close_symbolic, is_close_symbolic[it_17_0] >= -10  & is_close_symbolic[it_17_0] <= 10);
            }
        }
    #endif
    if (cntCall == 10) {
        cntCall--;
    }
    return is_close_symbolic[cntCall++];
}


float long_double_arith_symbolic[10];
float long_double_arith_symbolic[10];
float long_double_arith(long double x) {
    static int firstTimeCall = 1;
    static int cntCall = 0;
    #ifdef KLEE_MODE
        if (firstTimeCall == 1) {
            firstTimeCall = 0;
            klee_make_symbolic(&long_double_arith_symbolic, sizeof(long_double_arith_symbolic), "long_double_arith_symbolic");
            for (int it_26_0 = 0; it_26_0 < 10; it_26_0 ++) {
                klee_prefer_cex(long_double_arith_symbolic, long_double_arith_symbolic[it_26_0] >= -10  & long_double_arith_symbolic[it_26_0] <= 10);
            }
        }
    #endif
    if (cntCall == 10) {
        cntCall--;
    }
    return long_double_arith_symbolic[cntCall++];
}


int array_max_symbolic[10];
int array_max_symbolic[10];
int array_max(float * arr) {
    static int firstTimeCall = 1;
    static int cntCall = 0;
    #ifdef KLEE_MODE
        if (firstTimeCall == 1) {
            firstTimeCall = 0;
            klee_make_symbolic(&array_max_symbolic, sizeof(array_max_symbolic), "array_max_symbolic");
            for (int it_18_0 = 0; it_18_0 < 10; it_18_0 ++) {
                klee_prefer_cex(array_max_symbolic, array_max_symbolic[it_18_0] >= -10  & array_max_symbolic[it_18_0] <= 10);
            }
        }
    #endif
    if (cntCall == 10) {
        cntCall--;
    }
    return array_max_symbolic[cntCall++];
}


struct FParray fp_array_symbolic[10];
struct FParray fp_array_symbolic[10];
struct FParray fp_array(int a) {
    static int firstTimeCall = 1;
    static int cntCall = 0;
    #ifdef KLEE_MODE
        if (firstTimeCall == 1) {
            firstTimeCall = 0;
            klee_make_symbolic(&fp_array_symbolic, sizeof(fp_array_symbolic), "fp_array_symbolic");
            for (int it_17_0 = 0; it_17_0 < 10; it_17_0 ++) {
                // No constraints for fp_array_symbolic[it_17_0]
            }
        }
    #endif
    if (cntCall == 10) {
        cntCall--;
    }
    return fp_array_symbolic[cntCall++];
}


