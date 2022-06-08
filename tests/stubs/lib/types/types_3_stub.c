// 1654711952000000000
// Please, do not change the line above

/*
 * This file is automatically generated by UnitTestBot. For further information see https://github.com/UnitTestBot/UTBotCpp
 * Copyright (c) Huawei Technologies Co., Ltd. 2012-2021. All rights reserved.
 */

#ifdef KLEE_MODE
extern void klee_make_symbolic(void *addr, unsigned long long nbytes, const char *name);
#endif
#include "types_3_stub.h"

#define NULL ((void*)0)

int extract_value_symbolic[10];
int extract_value_symbolic[10];
int extract_value(struct UnnamedTypeUnionField arg) {
    static int firstTimeCall = 1;
    static int cntCall = 0;
    #ifdef KLEE_MODE
        if (firstTimeCall == 1) {
            firstTimeCall = 0;
            klee_make_symbolic(&extract_value_symbolic, sizeof(extract_value_symbolic), "extract_value_symbolic");
            for (int it_22_0 = 0; it_22_0 < 10; it_22_0 ++) {
                klee_prefer_cex(extract_value_symbolic, extract_value_symbolic[it_22_0] >= -10  & extract_value_symbolic[it_22_0] <= 10);
            }
        }
    #endif
    if (cntCall == 10) {
        cntCall--;
    }
    return extract_value_symbolic[cntCall++];
}


int extract_value_2_symbolic[10];
int extract_value_2_symbolic[10];
int extract_value_2(union UnnamedTypeStructField arg) {
    static int firstTimeCall = 1;
    static int cntCall = 0;
    #ifdef KLEE_MODE
        if (firstTimeCall == 1) {
            firstTimeCall = 0;
            klee_make_symbolic(&extract_value_2_symbolic, sizeof(extract_value_2_symbolic), "extract_value_2_symbolic");
            for (int it_24_0 = 0; it_24_0 < 10; it_24_0 ++) {
                klee_prefer_cex(extract_value_2_symbolic, extract_value_2_symbolic[it_24_0] >= -10  & extract_value_2_symbolic[it_24_0] <= 10);
            }
        }
    #endif
    if (cntCall == 10) {
        cntCall--;
    }
    return extract_value_2_symbolic[cntCall++];
}


int extract_value_3_symbolic[10];
int extract_value_3_symbolic[10];
int extract_value_3(struct AnonymousUnionField arg) {
    static int firstTimeCall = 1;
    static int cntCall = 0;
    #ifdef KLEE_MODE
        if (firstTimeCall == 1) {
            firstTimeCall = 0;
            klee_make_symbolic(&extract_value_3_symbolic, sizeof(extract_value_3_symbolic), "extract_value_3_symbolic");
            for (int it_24_0 = 0; it_24_0 < 10; it_24_0 ++) {
                klee_prefer_cex(extract_value_3_symbolic, extract_value_3_symbolic[it_24_0] >= -10  & extract_value_3_symbolic[it_24_0] <= 10);
            }
        }
    #endif
    if (cntCall == 10) {
        cntCall--;
    }
    return extract_value_3_symbolic[cntCall++];
}


int extract_value_4_symbolic[10];
int extract_value_4_symbolic[10];
int extract_value_4(union AnonymousStructField arg) {
    static int firstTimeCall = 1;
    static int cntCall = 0;
    #ifdef KLEE_MODE
        if (firstTimeCall == 1) {
            firstTimeCall = 0;
            klee_make_symbolic(&extract_value_4_symbolic, sizeof(extract_value_4_symbolic), "extract_value_4_symbolic");
            for (int it_24_0 = 0; it_24_0 < 10; it_24_0 ++) {
                klee_prefer_cex(extract_value_4_symbolic, extract_value_4_symbolic[it_24_0] >= -10  & extract_value_4_symbolic[it_24_0] <= 10);
            }
        }
    #endif
    if (cntCall == 10) {
        cntCall--;
    }
    return extract_value_4_symbolic[cntCall++];
}


long sum_of_symbolic[10];
long sum_of_symbolic[10];
long sum_of(struct Vector arg) {
    static int firstTimeCall = 1;
    static int cntCall = 0;
    #ifdef KLEE_MODE
        if (firstTimeCall == 1) {
            firstTimeCall = 0;
            klee_make_symbolic(&sum_of_symbolic, sizeof(sum_of_symbolic), "sum_of_symbolic");
            for (int it_15_0 = 0; it_15_0 < 10; it_15_0 ++) {
                klee_prefer_cex(sum_of_symbolic, sum_of_symbolic[it_15_0] >= -10  & sum_of_symbolic[it_15_0] <= 10);
            }
        }
    #endif
    if (cntCall == 10) {
        cntCall--;
    }
    return sum_of_symbolic[cntCall++];
}


void accept_incomplete(struct IncompleteType * arg) {
    return;
}


struct IncompleteType * return_incomplete() {
    return NULL;
}


struct ForwardDecl * pass_forward_decl(struct ForwardDecl * arg) {
    return NULL;
}


long mul_of_symbolic[10];
long mul_of_symbolic[10];
long mul_of(struct SupportedStruct1 arg) {
    static int firstTimeCall = 1;
    static int cntCall = 0;
    #ifdef KLEE_MODE
        if (firstTimeCall == 1) {
            firstTimeCall = 0;
            klee_make_symbolic(&mul_of_symbolic, sizeof(mul_of_symbolic), "mul_of_symbolic");
            for (int it_15_0 = 0; it_15_0 < 10; it_15_0 ++) {
                klee_prefer_cex(mul_of_symbolic, mul_of_symbolic[it_15_0] >= -10  & mul_of_symbolic[it_15_0] <= 10);
            }
        }
    #endif
    if (cntCall == 10) {
        cntCall--;
    }
    return mul_of_symbolic[cntCall++];
}


_Bool check_option_symbolic[10];
_Bool check_option_symbolic[10];
_Bool check_option() {
    static int firstTimeCall = 1;
    static int cntCall = 0;
    #ifdef KLEE_MODE
        if (firstTimeCall == 1) {
            firstTimeCall = 0;
            klee_make_symbolic(&check_option_symbolic, sizeof(check_option_symbolic), "check_option_symbolic");
            for (int it_21_0 = 0; it_21_0 < 10; it_21_0 ++) {
                // No constraints for check_option_symbolic[it_21_0]
            }
        }
    #endif
    if (cntCall == 10) {
        cntCall--;
    }
    return check_option_symbolic[cntCall++];
}


