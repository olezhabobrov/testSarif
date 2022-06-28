// 1656436367000000000
// Please, do not change the line above

/*
 * This file is automatically generated by UnitTestBot. For further information seehttps://unittestbot.org
 */

#ifdef KLEE_MODE
extern void klee_make_symbolic(void *addr, unsigned long long nbytes, const char *name);
#endif
#include "memory_stub.h"

#define NULL ((void*)0)

int out_of_bound_access_to_heap_symbolic[10];
int _out_of_bound_access_to_heap_symbolic[10];
int out_of_bound_access_to_heap(int num) {
    static int firstTimeCall = 1;
    static int cntCall = 0;
    #ifdef KLEE_MODE
        if (firstTimeCall == 1) {
            firstTimeCall = 0;
            klee_make_symbolic(&_out_of_bound_access_to_heap_symbolic, sizeof(_out_of_bound_access_to_heap_symbolic), "_out_of_bound_access_to_heap_symbolic");
            for (int it_45_0 = 0; it_45_0 < 10; it_45_0 ++) {
                klee_prefer_cex(_out_of_bound_access_to_heap_symbolic, _out_of_bound_access_to_heap_symbolic[it_45_0] >= -10  & _out_of_bound_access_to_heap_symbolic[it_45_0] <= 10);
            }
        }
    #endif
    if (cntCall == 10) {
        cntCall--;
    }
    return _out_of_bound_access_to_heap_symbolic[cntCall++];
}


int out_of_bound_access_to_stack_symbolic[10];
int _out_of_bound_access_to_stack_symbolic[10];
int out_of_bound_access_to_stack(int num) {
    static int firstTimeCall = 1;
    static int cntCall = 0;
    #ifdef KLEE_MODE
        if (firstTimeCall == 1) {
            firstTimeCall = 0;
            klee_make_symbolic(&_out_of_bound_access_to_stack_symbolic, sizeof(_out_of_bound_access_to_stack_symbolic), "_out_of_bound_access_to_stack_symbolic");
            for (int it_46_0 = 0; it_46_0 < 10; it_46_0 ++) {
                klee_prefer_cex(_out_of_bound_access_to_stack_symbolic, _out_of_bound_access_to_stack_symbolic[it_46_0] >= -10  & _out_of_bound_access_to_stack_symbolic[it_46_0] <= 10);
            }
        }
    #endif
    if (cntCall == 10) {
        cntCall--;
    }
    return _out_of_bound_access_to_stack_symbolic[cntCall++];
}


int out_of_bound_access_to_globals_symbolic[10];
int _out_of_bound_access_to_globals_symbolic[10];
int out_of_bound_access_to_globals(int i) {
    static int firstTimeCall = 1;
    static int cntCall = 0;
    #ifdef KLEE_MODE
        if (firstTimeCall == 1) {
            firstTimeCall = 0;
            klee_make_symbolic(&_out_of_bound_access_to_globals_symbolic, sizeof(_out_of_bound_access_to_globals_symbolic), "_out_of_bound_access_to_globals_symbolic");
            for (int it_47_0 = 0; it_47_0 < 10; it_47_0 ++) {
                klee_prefer_cex(_out_of_bound_access_to_globals_symbolic, _out_of_bound_access_to_globals_symbolic[it_47_0] >= -10  & _out_of_bound_access_to_globals_symbolic[it_47_0] <= 10);
            }
        }
    #endif
    if (cntCall == 10) {
        cntCall--;
    }
    return _out_of_bound_access_to_globals_symbolic[cntCall++];
}


int use_after_free_symbolic[10];
int _use_after_free_symbolic[10];
int use_after_free() {
    static int firstTimeCall = 1;
    static int cntCall = 0;
    #ifdef KLEE_MODE
        if (firstTimeCall == 1) {
            firstTimeCall = 0;
            klee_make_symbolic(&_use_after_free_symbolic, sizeof(_use_after_free_symbolic), "_use_after_free_symbolic");
            for (int it_48_0 = 0; it_48_0 < 10; it_48_0 ++) {
                klee_prefer_cex(_use_after_free_symbolic, _use_after_free_symbolic[it_48_0] >= -10  & _use_after_free_symbolic[it_48_0] <= 10);
            }
        }
    #endif
    if (cntCall == 10) {
        cntCall--;
    }
    return _use_after_free_symbolic[cntCall++];
}


char use_after_return_symbolic[10];
char _use_after_return_symbolic[10];
char use_after_return() {
    static int firstTimeCall = 1;
    static int cntCall = 0;
    #ifdef KLEE_MODE
        if (firstTimeCall == 1) {
            firstTimeCall = 0;
            klee_make_symbolic(&_use_after_return_symbolic, sizeof(_use_after_return_symbolic), "_use_after_return_symbolic");
            for (int it_49_0 = 0; it_49_0 < 10; it_49_0 ++) {
                klee_prefer_cex(_use_after_return_symbolic, _use_after_return_symbolic[it_49_0] >= 'a' & _use_after_return_symbolic[it_49_0] <= 'z' & _use_after_return_symbolic[it_49_0] != '\0');
            }
        }
    #endif
    if (cntCall == 10) {
        cntCall--;
    }
    return _use_after_return_symbolic[cntCall++];
}


int use_after_scope_symbolic[10];
int _use_after_scope_symbolic[10];
int use_after_scope() {
    static int firstTimeCall = 1;
    static int cntCall = 0;
    #ifdef KLEE_MODE
        if (firstTimeCall == 1) {
            firstTimeCall = 0;
            klee_make_symbolic(&_use_after_scope_symbolic, sizeof(_use_after_scope_symbolic), "_use_after_scope_symbolic");
            for (int it_50_0 = 0; it_50_0 < 10; it_50_0 ++) {
                klee_prefer_cex(_use_after_scope_symbolic, _use_after_scope_symbolic[it_50_0] >= -10  & _use_after_scope_symbolic[it_50_0] <= 10);
            }
        }
    #endif
    if (cntCall == 10) {
        cntCall--;
    }
    return _use_after_scope_symbolic[cntCall++];
}


void double_free() {
    return;
}


int invalid_free_symbolic[10];
int _invalid_free_symbolic[10];
int invalid_free() {
    static int firstTimeCall = 1;
    static int cntCall = 0;
    #ifdef KLEE_MODE
        if (firstTimeCall == 1) {
            firstTimeCall = 0;
            klee_make_symbolic(&_invalid_free_symbolic, sizeof(_invalid_free_symbolic), "_invalid_free_symbolic");
            for (int it_51_0 = 0; it_51_0 < 10; it_51_0 ++) {
                klee_prefer_cex(_invalid_free_symbolic, _invalid_free_symbolic[it_51_0] >= -10  & _invalid_free_symbolic[it_51_0] <= 10);
            }
        }
    #endif
    if (cntCall == 10) {
        cntCall--;
    }
    return _invalid_free_symbolic[cntCall++];
}


