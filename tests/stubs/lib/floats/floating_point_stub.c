// 1656436367000000000
// Please, do not change the line above

/*
 * This file is automatically generated by UnitTestBot. For further information seehttps://unittestbot.org
 */

#ifdef KLEE_MODE
extern void klee_make_symbolic(void *addr, unsigned long long nbytes, const char *name);
#endif
#include "floating_point_stub.h"

#define NULL ((void*)0)

int get_double_sign_symbolic[10];
int _get_double_sign_symbolic[10];
int get_double_sign(double x) {
    static int firstTimeCall = 1;
    static int cntCall = 0;
    #ifdef KLEE_MODE
        if (firstTimeCall == 1) {
            firstTimeCall = 0;
            klee_make_symbolic(&_get_double_sign_symbolic, sizeof(_get_double_sign_symbolic), "_get_double_sign_symbolic");
            for (int it_78_0 = 0; it_78_0 < 10; it_78_0 ++) {
                klee_prefer_cex(_get_double_sign_symbolic, _get_double_sign_symbolic[it_78_0] >= -10  & _get_double_sign_symbolic[it_78_0] <= 10);
            }
        }
    #endif
    if (cntCall == 10) {
        cntCall--;
    }
    return _get_double_sign_symbolic[cntCall++];
}


int is_close_symbolic[10];
int _is_close_symbolic[10];
int is_close(float_t x, int y) {
    static int firstTimeCall = 1;
    static int cntCall = 0;
    #ifdef KLEE_MODE
        if (firstTimeCall == 1) {
            firstTimeCall = 0;
            klee_make_symbolic(&_is_close_symbolic, sizeof(_is_close_symbolic), "_is_close_symbolic");
            for (int it_79_0 = 0; it_79_0 < 10; it_79_0 ++) {
                klee_prefer_cex(_is_close_symbolic, _is_close_symbolic[it_79_0] >= -10  & _is_close_symbolic[it_79_0] <= 10);
            }
        }
    #endif
    if (cntCall == 10) {
        cntCall--;
    }
    return _is_close_symbolic[cntCall++];
}


float long_double_arith_symbolic[10];
float _long_double_arith_symbolic[10];
float long_double_arith(long double x) {
    static int firstTimeCall = 1;
    static int cntCall = 0;
    #ifdef KLEE_MODE
        if (firstTimeCall == 1) {
            firstTimeCall = 0;
            klee_make_symbolic(&_long_double_arith_symbolic, sizeof(_long_double_arith_symbolic), "_long_double_arith_symbolic");
            for (int it_80_0 = 0; it_80_0 < 10; it_80_0 ++) {
                klee_prefer_cex(_long_double_arith_symbolic, _long_double_arith_symbolic[it_80_0] >= -10  & _long_double_arith_symbolic[it_80_0] <= 10);
            }
        }
    #endif
    if (cntCall == 10) {
        cntCall--;
    }
    return _long_double_arith_symbolic[cntCall++];
}


int array_max_symbolic[10];
int _array_max_symbolic[10];
int array_max(float * arr) {
    static int firstTimeCall = 1;
    static int cntCall = 0;
    #ifdef KLEE_MODE
        if (firstTimeCall == 1) {
            firstTimeCall = 0;
            klee_make_symbolic(&_array_max_symbolic, sizeof(_array_max_symbolic), "_array_max_symbolic");
            for (int it_81_0 = 0; it_81_0 < 10; it_81_0 ++) {
                klee_prefer_cex(_array_max_symbolic, _array_max_symbolic[it_81_0] >= -10  & _array_max_symbolic[it_81_0] <= 10);
            }
        }
    #endif
    if (cntCall == 10) {
        cntCall--;
    }
    return _array_max_symbolic[cntCall++];
}


struct FParray fp_array_symbolic[10];
struct FParray _fp_array_symbolic[10];
struct FParray fp_array(int a) {
    static int firstTimeCall = 1;
    static int cntCall = 0;
    #ifdef KLEE_MODE
        if (firstTimeCall == 1) {
            firstTimeCall = 0;
            klee_make_symbolic(&_fp_array_symbolic, sizeof(_fp_array_symbolic), "_fp_array_symbolic");
            for (int it_82_0 = 0; it_82_0 < 10; it_82_0 ++) {
                // No constraints for _fp_array_symbolic[it_82_0]
            }
        }
    #endif
    if (cntCall == 10) {
        cntCall--;
    }
    return _fp_array_symbolic[cntCall++];
}


