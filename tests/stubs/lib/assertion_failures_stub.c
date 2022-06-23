// 1655943580000000000
// Please, do not change the line above

/*
 * This file is automatically generated by UnitTestBot. For further information seehttps://unittestbot.org
 */

#ifdef KLEE_MODE
extern void klee_make_symbolic(void *addr, unsigned long long nbytes, const char *name);
#endif
#include "assertion_failures_stub.h"

#define NULL ((void*)0)

int buggy_function1_symbolic[10];
int _buggy_function1_symbolic[10];
int buggy_function1(int a, int b) {
    static int firstTimeCall = 1;
    static int cntCall = 0;
    #ifdef KLEE_MODE
        if (firstTimeCall == 1) {
            firstTimeCall = 0;
            klee_make_symbolic(&_buggy_function1_symbolic, sizeof(_buggy_function1_symbolic), "_buggy_function1_symbolic");
            for (int it_31_0 = 0; it_31_0 < 10; it_31_0 ++) {
                klee_prefer_cex(_buggy_function1_symbolic, _buggy_function1_symbolic[it_31_0] >= -10  & _buggy_function1_symbolic[it_31_0] <= 10);
            }
        }
    #endif
    if (cntCall == 10) {
        cntCall--;
    }
    return _buggy_function1_symbolic[cntCall++];
}


int buggy_function2_symbolic[10];
int _buggy_function2_symbolic[10];
int buggy_function2(int a) {
    static int firstTimeCall = 1;
    static int cntCall = 0;
    #ifdef KLEE_MODE
        if (firstTimeCall == 1) {
            firstTimeCall = 0;
            klee_make_symbolic(&_buggy_function2_symbolic, sizeof(_buggy_function2_symbolic), "_buggy_function2_symbolic");
            for (int it_32_0 = 0; it_32_0 < 10; it_32_0 ++) {
                klee_prefer_cex(_buggy_function2_symbolic, _buggy_function2_symbolic[it_32_0] >= -10  & _buggy_function2_symbolic[it_32_0] <= 10);
            }
        }
    #endif
    if (cntCall == 10) {
        cntCall--;
    }
    return _buggy_function2_symbolic[cntCall++];
}


int buggy_function3_symbolic[10];
int _buggy_function3_symbolic[10];
int buggy_function3(int a, int b) {
    static int firstTimeCall = 1;
    static int cntCall = 0;
    #ifdef KLEE_MODE
        if (firstTimeCall == 1) {
            firstTimeCall = 0;
            klee_make_symbolic(&_buggy_function3_symbolic, sizeof(_buggy_function3_symbolic), "_buggy_function3_symbolic");
            for (int it_33_0 = 0; it_33_0 < 10; it_33_0 ++) {
                klee_prefer_cex(_buggy_function3_symbolic, _buggy_function3_symbolic[it_33_0] >= -10  & _buggy_function3_symbolic[it_33_0] <= 10);
            }
        }
    #endif
    if (cntCall == 10) {
        cntCall--;
    }
    return _buggy_function3_symbolic[cntCall++];
}


