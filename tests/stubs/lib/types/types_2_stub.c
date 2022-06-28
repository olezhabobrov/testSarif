// 1656436367000000000
// Please, do not change the line above

/*
 * This file is automatically generated by UnitTestBot. For further information seehttps://unittestbot.org
 */

#ifdef KLEE_MODE
extern void klee_make_symbolic(void *addr, unsigned long long nbytes, const char *name);
#endif
#include "types_2_stub.h"

#define NULL ((void*)0)

unsigned long foo_symbolic[10];
unsigned long _foo_symbolic[10];
unsigned long foo(int x) {
    static int firstTimeCall = 1;
    static int cntCall = 0;
    #ifdef KLEE_MODE
        if (firstTimeCall == 1) {
            firstTimeCall = 0;
            klee_make_symbolic(&_foo_symbolic, sizeof(_foo_symbolic), "_foo_symbolic");
            for (int it_75_0 = 0; it_75_0 < 10; it_75_0 ++) {
                klee_prefer_cex(_foo_symbolic, _foo_symbolic[it_75_0]<= 10);
            }
        }
    #endif
    if (cntCall == 10) {
        cntCall--;
    }
    return _foo_symbolic[cntCall++];
}


int bar_symbolic[10];
int _bar_symbolic[10];
int bar(size_t a, int b) {
    static int firstTimeCall = 1;
    static int cntCall = 0;
    #ifdef KLEE_MODE
        if (firstTimeCall == 1) {
            firstTimeCall = 0;
            klee_make_symbolic(&_bar_symbolic, sizeof(_bar_symbolic), "_bar_symbolic");
            for (int it_76_0 = 0; it_76_0 < 10; it_76_0 ++) {
                klee_prefer_cex(_bar_symbolic, _bar_symbolic[it_76_0] >= -10  & _bar_symbolic[it_76_0] <= 10);
            }
        }
    #endif
    if (cntCall == 10) {
        cntCall--;
    }
    return _bar_symbolic[cntCall++];
}


unsigned int diff_symbolic[10];
unsigned int _diff_symbolic[10];
unsigned int diff(int x) {
    static int firstTimeCall = 1;
    static int cntCall = 0;
    #ifdef KLEE_MODE
        if (firstTimeCall == 1) {
            firstTimeCall = 0;
            klee_make_symbolic(&_diff_symbolic, sizeof(_diff_symbolic), "_diff_symbolic");
            for (int it_77_0 = 0; it_77_0 < 10; it_77_0 ++) {
                klee_prefer_cex(_diff_symbolic, _diff_symbolic[it_77_0]<= 10);
            }
        }
    #endif
    if (cntCall == 10) {
        cntCall--;
    }
    return _diff_symbolic[cntCall++];
}


