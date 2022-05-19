// 1652985893000000000
// Please, do not change the line above

/*
 * This file is automatically generated by UnitTestBot. For further information see https://github.com/UnitTestBot/UTBotCpp
 * Copyright (c) Huawei Technologies Co., Ltd. 2012-2021. All rights reserved.
 */

#ifdef KLEE_MODE
extern void klee_make_symbolic(void *addr, unsigned long long nbytes, const char *name);
#endif
#include "complex_structs_stub.h"

#define NULL ((void*)0)

int struct_has_alphabet_symbolic[10];
int struct_has_alphabet_symbolic[10];
int struct_has_alphabet(struct One st) {
    static int firstTimeCall = 1;
    static int cntCall = 0;
    #ifdef KLEE_MODE
        if (firstTimeCall == 1) {
            firstTimeCall = 0;
            klee_make_symbolic(&struct_has_alphabet_symbolic, sizeof(struct_has_alphabet_symbolic), "struct_has_alphabet_symbolic");
            for (int it_28_0 = 0; it_28_0 < 10; it_28_0 ++) {
                klee_prefer_cex(struct_has_alphabet_symbolic, struct_has_alphabet_symbolic[it_28_0] >= -10  & struct_has_alphabet_symbolic[it_28_0] <= 10);
            }
        }
    #endif
    if (cntCall == 10) {
        cntCall--;
    }
    return struct_has_alphabet_symbolic[cntCall++];
}


char arrays_in_inner_structs_symbolic[10];
char arrays_in_inner_structs_symbolic[10];
char arrays_in_inner_structs(struct Three st) {
    static int firstTimeCall = 1;
    static int cntCall = 0;
    #ifdef KLEE_MODE
        if (firstTimeCall == 1) {
            firstTimeCall = 0;
            klee_make_symbolic(&arrays_in_inner_structs_symbolic, sizeof(arrays_in_inner_structs_symbolic), "arrays_in_inner_structs_symbolic");
            for (int it_32_0 = 0; it_32_0 < 10; it_32_0 ++) {
                klee_prefer_cex(arrays_in_inner_structs_symbolic, arrays_in_inner_structs_symbolic[it_32_0] >= 'a' & arrays_in_inner_structs_symbolic[it_32_0] <= 'z' & arrays_in_inner_structs_symbolic[it_32_0] != '\0');
            }
        }
    #endif
    if (cntCall == 10) {
        cntCall--;
    }
    return arrays_in_inner_structs_symbolic[cntCall++];
}


struct One alphabet_symbolic[10];
struct One alphabet_symbolic[10];
struct One alphabet(int a) {
    static int firstTimeCall = 1;
    static int cntCall = 0;
    #ifdef KLEE_MODE
        if (firstTimeCall == 1) {
            firstTimeCall = 0;
            klee_make_symbolic(&alphabet_symbolic, sizeof(alphabet_symbolic), "alphabet_symbolic");
            for (int it_17_0 = 0; it_17_0 < 10; it_17_0 ++) {
                // No constraints for alphabet_symbolic[it_17_0]
            }
        }
    #endif
    if (cntCall == 10) {
        cntCall--;
    }
    return alphabet_symbolic[cntCall++];
}


