// 1655943580000000000
// Please, do not change the line above

/*
 * This file is automatically generated by UnitTestBot. For further information seehttps://unittestbot.org
 */

#ifdef KLEE_MODE
extern void klee_make_symbolic(void *addr, unsigned long long nbytes, const char *name);
#endif
#include "bits_stub.h"

#define NULL ((void*)0)

unsigned int NSE_BITS_CLZ64_symbolic[10];
unsigned int _NSE_BITS_CLZ64_symbolic[10];
unsigned int NSE_BITS_CLZ64(unsigned long long uiiData) {
    static int firstTimeCall = 1;
    static int cntCall = 0;
    #ifdef KLEE_MODE
        if (firstTimeCall == 1) {
            firstTimeCall = 0;
            klee_make_symbolic(&_NSE_BITS_CLZ64_symbolic, sizeof(_NSE_BITS_CLZ64_symbolic), "_NSE_BITS_CLZ64_symbolic");
            for (int it_10_0 = 0; it_10_0 < 10; it_10_0 ++) {
                klee_prefer_cex(_NSE_BITS_CLZ64_symbolic, _NSE_BITS_CLZ64_symbolic[it_10_0]<= 10);
            }
        }
    #endif
    if (cntCall == 10) {
        cntCall--;
    }
    return _NSE_BITS_CLZ64_symbolic[cntCall++];
}


unsigned int foo1_symbolic[10];
unsigned int _foo1_symbolic[10];
unsigned int foo1(const FOO_ATTRIBUTE * attrib, unsigned int num, unsigned int id, unsigned int * offset, unsigned int * len) {
    static int firstTimeCall = 1;
    static int cntCall = 0;
    #ifdef KLEE_MODE
        if (firstTimeCall == 1) {
            firstTimeCall = 0;
            klee_make_symbolic(&_foo1_symbolic, sizeof(_foo1_symbolic), "_foo1_symbolic");
            for (int it_11_0 = 0; it_11_0 < 10; it_11_0 ++) {
                klee_prefer_cex(_foo1_symbolic, _foo1_symbolic[it_11_0]<= 10);
            }
        }
    #endif
    if (cntCall == 10) {
        cntCall--;
    }
    return _foo1_symbolic[cntCall++];
}


