// 1655943580000000000
// Please, do not change the line above

/*
 * This file is automatically generated by UnitTestBot. For further information seehttps://unittestbot.org
 */

#ifdef KLEE_MODE
extern void klee_make_symbolic(void *addr, unsigned long long nbytes, const char *name);
#endif
#include "basic_functions_stub.h"

#define NULL ((void*)0)

int max__symbolic[10];
int _max__symbolic[10];
int max_(int a, int b) {
    static int firstTimeCall = 1;
    static int cntCall = 0;
    #ifdef KLEE_MODE
        if (firstTimeCall == 1) {
            firstTimeCall = 0;
            klee_make_symbolic(&_max__symbolic, sizeof(_max__symbolic), "_max__symbolic");
            for (int it_83_0 = 0; it_83_0 < 10; it_83_0 ++) {
                klee_prefer_cex(_max__symbolic, _max__symbolic[it_83_0] >= -10  & _max__symbolic[it_83_0] <= 10);
            }
        }
    #endif
    if (cntCall == 10) {
        cntCall--;
    }
    return _max__symbolic[cntCall++];
}


int min_symbolic[10];
int _min_symbolic[10];
int min(int a, int b) {
    static int firstTimeCall = 1;
    static int cntCall = 0;
    #ifdef KLEE_MODE
        if (firstTimeCall == 1) {
            firstTimeCall = 0;
            klee_make_symbolic(&_min_symbolic, sizeof(_min_symbolic), "_min_symbolic");
            for (int it_84_0 = 0; it_84_0 < 10; it_84_0 ++) {
                klee_prefer_cex(_min_symbolic, _min_symbolic[it_84_0] >= -10  & _min_symbolic[it_84_0] <= 10);
            }
        }
    #endif
    if (cntCall == 10) {
        cntCall--;
    }
    return _min_symbolic[cntCall++];
}


int sqr_positive_symbolic[10];
int _sqr_positive_symbolic[10];
int sqr_positive(int a) {
    static int firstTimeCall = 1;
    static int cntCall = 0;
    #ifdef KLEE_MODE
        if (firstTimeCall == 1) {
            firstTimeCall = 0;
            klee_make_symbolic(&_sqr_positive_symbolic, sizeof(_sqr_positive_symbolic), "_sqr_positive_symbolic");
            for (int it_85_0 = 0; it_85_0 < 10; it_85_0 ++) {
                klee_prefer_cex(_sqr_positive_symbolic, _sqr_positive_symbolic[it_85_0] >= -10  & _sqr_positive_symbolic[it_85_0] <= 10);
            }
        }
    #endif
    if (cntCall == 10) {
        cntCall--;
    }
    return _sqr_positive_symbolic[cntCall++];
}


int simple_loop_symbolic[10];
int _simple_loop_symbolic[10];
int simple_loop(unsigned int n) {
    static int firstTimeCall = 1;
    static int cntCall = 0;
    #ifdef KLEE_MODE
        if (firstTimeCall == 1) {
            firstTimeCall = 0;
            klee_make_symbolic(&_simple_loop_symbolic, sizeof(_simple_loop_symbolic), "_simple_loop_symbolic");
            for (int it_86_0 = 0; it_86_0 < 10; it_86_0 ++) {
                klee_prefer_cex(_simple_loop_symbolic, _simple_loop_symbolic[it_86_0] >= -10  & _simple_loop_symbolic[it_86_0] <= 10);
            }
        }
    #endif
    if (cntCall == 10) {
        cntCall--;
    }
    return _simple_loop_symbolic[cntCall++];
}


