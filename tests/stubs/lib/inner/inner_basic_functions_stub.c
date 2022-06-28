// 1656436367000000000
// Please, do not change the line above

/*
 * This file is automatically generated by UnitTestBot. For further information seehttps://unittestbot.org
 */

#ifdef KLEE_MODE
extern void klee_make_symbolic(void *addr, unsigned long long nbytes, const char *name);
#endif
#include "inner_basic_functions_stub.h"

#define NULL ((void*)0)

int sum_up_to_symbolic[10];
int _sum_up_to_symbolic[10];
int sum_up_to(unsigned int n) {
    static int firstTimeCall = 1;
    static int cntCall = 0;
    #ifdef KLEE_MODE
        if (firstTimeCall == 1) {
            firstTimeCall = 0;
            klee_make_symbolic(&_sum_up_to_symbolic, sizeof(_sum_up_to_symbolic), "_sum_up_to_symbolic");
            for (int it_62_0 = 0; it_62_0 < 10; it_62_0 ++) {
                klee_prefer_cex(_sum_up_to_symbolic, _sum_up_to_symbolic[it_62_0] >= -10  & _sum_up_to_symbolic[it_62_0] <= 10);
            }
        }
    #endif
    if (cntCall == 10) {
        cntCall--;
    }
    return _sum_up_to_symbolic[cntCall++];
}


int median_symbolic[10];
int _median_symbolic[10];
int median(int a, int b, int c) {
    static int firstTimeCall = 1;
    static int cntCall = 0;
    #ifdef KLEE_MODE
        if (firstTimeCall == 1) {
            firstTimeCall = 0;
            klee_make_symbolic(&_median_symbolic, sizeof(_median_symbolic), "_median_symbolic");
            for (int it_63_0 = 0; it_63_0 < 10; it_63_0 ++) {
                klee_prefer_cex(_median_symbolic, _median_symbolic[it_63_0] >= -10  & _median_symbolic[it_63_0] <= 10);
            }
        }
    #endif
    if (cntCall == 10) {
        cntCall--;
    }
    return _median_symbolic[cntCall++];
}


