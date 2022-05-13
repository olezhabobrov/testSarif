// 1652437926000000000
// Please, do not change the line above

/*
 * This file is automatically generated by UnitTestBot. For further information see https://github.com/UnitTestBot/UTBotCpp
 * Copyright (c) Huawei Technologies Co., Ltd. 2012-2021. All rights reserved.
 */

#ifdef KLEE_MODE
extern void klee_make_symbolic(void *addr, unsigned long long nbytes, const char *name);
#endif
#include "types_stub.h"

#define NULL ((void*)0)

char a_or_b_symbolic[10];
char a_or_b_symbolic[10];
char a_or_b(char a, char b) {
    static int firstTimeCall = 1;
    static int cntCall = 0;
    #ifdef KLEE_MODE
        if (firstTimeCall == 1) {
            firstTimeCall = 0;
            klee_make_symbolic(&a_or_b_symbolic, sizeof(a_or_b_symbolic), "a_or_b_symbolic");
            for (int it_15_0 = 0; it_15_0 < 10; it_15_0 ++) {
                klee_prefer_cex(a_or_b_symbolic, a_or_b_symbolic[it_15_0] >= 'a' & a_or_b_symbolic[it_15_0] <= 'z' & a_or_b_symbolic[it_15_0] != '\0');
            }
        }
    #endif
    if (cntCall == 10) {
        cntCall--;
    }
    return a_or_b_symbolic[cntCall++];
}


long long max_long_symbolic[10];
long long max_long_symbolic[10];
long long max_long(long long a, long long b) {
    static int firstTimeCall = 1;
    static int cntCall = 0;
    #ifdef KLEE_MODE
        if (firstTimeCall == 1) {
            firstTimeCall = 0;
            klee_make_symbolic(&max_long_symbolic, sizeof(max_long_symbolic), "max_long_symbolic");
            for (int it_17_0 = 0; it_17_0 < 10; it_17_0 ++) {
                klee_prefer_cex(max_long_symbolic, max_long_symbolic[it_17_0] >= -10  & max_long_symbolic[it_17_0] <= 10);
            }
        }
    #endif
    if (cntCall == 10) {
        cntCall--;
    }
    return max_long_symbolic[cntCall++];
}


short min_short_symbolic[10];
short min_short_symbolic[10];
short min_short(short a, short b) {
    static int firstTimeCall = 1;
    static int cntCall = 0;
    #ifdef KLEE_MODE
        if (firstTimeCall == 1) {
            firstTimeCall = 0;
            klee_make_symbolic(&min_short_symbolic, sizeof(min_short_symbolic), "min_short_symbolic");
            for (int it_18_0 = 0; it_18_0 < 10; it_18_0 ++) {
                klee_prefer_cex(min_short_symbolic, min_short_symbolic[it_18_0] >= -10  & min_short_symbolic[it_18_0] <= 10);
            }
        }
    #endif
    if (cntCall == 10) {
        cntCall--;
    }
    return min_short_symbolic[cntCall++];
}


short min_divided_by_2_symbolic[10];
short min_divided_by_2_symbolic[10];
short min_divided_by_2(short a, short b) {
    static int firstTimeCall = 1;
    static int cntCall = 0;
    #ifdef KLEE_MODE
        if (firstTimeCall == 1) {
            firstTimeCall = 0;
            klee_make_symbolic(&min_divided_by_2_symbolic, sizeof(min_divided_by_2_symbolic), "min_divided_by_2_symbolic");
            for (int it_25_0 = 0; it_25_0 < 10; it_25_0 ++) {
                klee_prefer_cex(min_divided_by_2_symbolic, min_divided_by_2_symbolic[it_25_0] >= -10  & min_divided_by_2_symbolic[it_25_0] <= 10);
            }
        }
    #endif
    if (cntCall == 10) {
        cntCall--;
    }
    return min_divided_by_2_symbolic[cntCall++];
}


signed char some_func_symbolic[10];
signed char some_func_symbolic[10];
signed char some_func(char a, unsigned char b) {
    static int firstTimeCall = 1;
    static int cntCall = 0;
    #ifdef KLEE_MODE
        if (firstTimeCall == 1) {
            firstTimeCall = 0;
            klee_make_symbolic(&some_func_symbolic, sizeof(some_func_symbolic), "some_func_symbolic");
            for (int it_18_0 = 0; it_18_0 < 10; it_18_0 ++) {
                klee_prefer_cex(some_func_symbolic, some_func_symbolic[it_18_0] >= 'a' & some_func_symbolic[it_18_0] <= 'z' & some_func_symbolic[it_18_0] != '\0');
            }
        }
    #endif
    if (cntCall == 10) {
        cntCall--;
    }
    return some_func_symbolic[cntCall++];
}


int fun_that_accept_bools_symbolic[10];
int fun_that_accept_bools_symbolic[10];
int fun_that_accept_bools(_Bool a, _Bool b) {
    static int firstTimeCall = 1;
    static int cntCall = 0;
    #ifdef KLEE_MODE
        if (firstTimeCall == 1) {
            firstTimeCall = 0;
            klee_make_symbolic(&fun_that_accept_bools_symbolic, sizeof(fun_that_accept_bools_symbolic), "fun_that_accept_bools_symbolic");
            for (int it_30_0 = 0; it_30_0 < 10; it_30_0 ++) {
                klee_prefer_cex(fun_that_accept_bools_symbolic, fun_that_accept_bools_symbolic[it_30_0] >= -10  & fun_that_accept_bools_symbolic[it_30_0] <= 10);
            }
        }
    #endif
    if (cntCall == 10) {
        cntCall--;
    }
    return fun_that_accept_bools_symbolic[cntCall++];
}


_Bool is_positive_symbolic[10];
_Bool is_positive_symbolic[10];
_Bool is_positive(int arg) {
    static int firstTimeCall = 1;
    static int cntCall = 0;
    #ifdef KLEE_MODE
        if (firstTimeCall == 1) {
            firstTimeCall = 0;
            klee_make_symbolic(&is_positive_symbolic, sizeof(is_positive_symbolic), "is_positive_symbolic");
            for (int it_20_0 = 0; it_20_0 < 10; it_20_0 ++) {
                // No constraints for is_positive_symbolic[it_20_0]
            }
        }
    #endif
    if (cntCall == 10) {
        cntCall--;
    }
    return is_positive_symbolic[cntCall++];
}


int supported_parameter_1_symbolic[10];
int supported_parameter_1_symbolic[10];
int supported_parameter_1(struct SupportedStruct1 st) {
    static int firstTimeCall = 1;
    static int cntCall = 0;
    #ifdef KLEE_MODE
        if (firstTimeCall == 1) {
            firstTimeCall = 0;
            klee_make_symbolic(&supported_parameter_1_symbolic, sizeof(supported_parameter_1_symbolic), "supported_parameter_1_symbolic");
            for (int it_30_0 = 0; it_30_0 < 10; it_30_0 ++) {
                klee_prefer_cex(supported_parameter_1_symbolic, supported_parameter_1_symbolic[it_30_0] >= -10  & supported_parameter_1_symbolic[it_30_0] <= 10);
            }
        }
    #endif
    if (cntCall == 10) {
        cntCall--;
    }
    return supported_parameter_1_symbolic[cntCall++];
}


int supported_parameter_2_symbolic[10];
int supported_parameter_2_symbolic[10];
int supported_parameter_2(struct SupportedStruct2 st) {
    static int firstTimeCall = 1;
    static int cntCall = 0;
    #ifdef KLEE_MODE
        if (firstTimeCall == 1) {
            firstTimeCall = 0;
            klee_make_symbolic(&supported_parameter_2_symbolic, sizeof(supported_parameter_2_symbolic), "supported_parameter_2_symbolic");
            for (int it_30_0 = 0; it_30_0 < 10; it_30_0 ++) {
                klee_prefer_cex(supported_parameter_2_symbolic, supported_parameter_2_symbolic[it_30_0] >= -10  & supported_parameter_2_symbolic[it_30_0] <= 10);
            }
        }
    #endif
    if (cntCall == 10) {
        cntCall--;
    }
    return supported_parameter_2_symbolic[cntCall++];
}


void pointer_to_pointer(int ** a) {
    return;
}


int void_pointer_symbolic[10];
int void_pointer_symbolic[10];
int void_pointer(void * a) {
    static int firstTimeCall = 1;
    static int cntCall = 0;
    #ifdef KLEE_MODE
        if (firstTimeCall == 1) {
            firstTimeCall = 0;
            klee_make_symbolic(&void_pointer_symbolic, sizeof(void_pointer_symbolic), "void_pointer_symbolic");
            for (int it_21_0 = 0; it_21_0 < 10; it_21_0 ++) {
                klee_prefer_cex(void_pointer_symbolic, void_pointer_symbolic[it_21_0] >= -10  & void_pointer_symbolic[it_21_0] <= 10);
            }
        }
    #endif
    if (cntCall == 10) {
        cntCall--;
    }
    return void_pointer_symbolic[cntCall++];
}


_Bool bool_array_head_symbolic[10];
_Bool bool_array_head_symbolic[10];
_Bool bool_array_head(_Bool * b) {
    static int firstTimeCall = 1;
    static int cntCall = 0;
    #ifdef KLEE_MODE
        if (firstTimeCall == 1) {
            firstTimeCall = 0;
            klee_make_symbolic(&bool_array_head_symbolic, sizeof(bool_array_head_symbolic), "bool_array_head_symbolic");
            for (int it_24_0 = 0; it_24_0 < 10; it_24_0 ++) {
                // No constraints for bool_array_head_symbolic[it_24_0]
            }
        }
    #endif
    if (cntCall == 10) {
        cntCall--;
    }
    return bool_array_head_symbolic[cntCall++];
}


struct SupportedStruct4 structWithConstPointerReturn_symbolic[10];
struct SupportedStruct4 structWithConstPointerReturn_symbolic[10];
struct SupportedStruct4 structWithConstPointerReturn(int a) {
    static int firstTimeCall = 1;
    static int cntCall = 0;
    #ifdef KLEE_MODE
        if (firstTimeCall == 1) {
            firstTimeCall = 0;
            klee_make_symbolic(&structWithConstPointerReturn_symbolic, sizeof(structWithConstPointerReturn_symbolic), "structWithConstPointerReturn_symbolic");
            for (int it_37_0 = 0; it_37_0 < 10; it_37_0 ++) {
                // No constraints for structWithConstPointerReturn_symbolic[it_37_0]
            }
        }
    #endif
    if (cntCall == 10) {
        cntCall--;
    }
    return structWithConstPointerReturn_symbolic[cntCall++];
}


struct UnsupportedStruct3 structWithUnion_symbolic[10];
struct UnsupportedStruct3 structWithUnion_symbolic[10];
struct UnsupportedStruct3 structWithUnion(int a) {
    static int firstTimeCall = 1;
    static int cntCall = 0;
    #ifdef KLEE_MODE
        if (firstTimeCall == 1) {
            firstTimeCall = 0;
            klee_make_symbolic(&structWithUnion_symbolic, sizeof(structWithUnion_symbolic), "structWithUnion_symbolic");
            for (int it_24_0 = 0; it_24_0 < 10; it_24_0 ++) {
                // No constraints for structWithUnion_symbolic[it_24_0]
            }
        }
    #endif
    if (cntCall == 10) {
        cntCall--;
    }
    return structWithUnion_symbolic[cntCall++];
}


const struct SupportedStruct4 * structWithConstPointerReturnPointer(int a) {
    return NULL;
}


int structWithConstPointerParam_symbolic[10];
int structWithConstPointerParam_symbolic[10];
int structWithConstPointerParam(struct SupportedStruct4 st) {
    static int firstTimeCall = 1;
    static int cntCall = 0;
    #ifdef KLEE_MODE
        if (firstTimeCall == 1) {
            firstTimeCall = 0;
            klee_make_symbolic(&structWithConstPointerParam_symbolic, sizeof(structWithConstPointerParam_symbolic), "structWithConstPointerParam_symbolic");
            for (int it_36_0 = 0; it_36_0 < 10; it_36_0 ++) {
                klee_prefer_cex(structWithConstPointerParam_symbolic, structWithConstPointerParam_symbolic[it_36_0] >= -10  & structWithConstPointerParam_symbolic[it_36_0] <= 10);
            }
        }
    #endif
    if (cntCall == 10) {
        cntCall--;
    }
    return structWithConstPointerParam_symbolic[cntCall++];
}


int structWithConstFields_symbolic[10];
int structWithConstFields_symbolic[10];
int structWithConstFields(struct SupportedStruct5 st) {
    static int firstTimeCall = 1;
    static int cntCall = 0;
    #ifdef KLEE_MODE
        if (firstTimeCall == 1) {
            firstTimeCall = 0;
            klee_make_symbolic(&structWithConstFields_symbolic, sizeof(structWithConstFields_symbolic), "structWithConstFields_symbolic");
            for (int it_30_0 = 0; it_30_0 < 10; it_30_0 ++) {
                klee_prefer_cex(structWithConstFields_symbolic, structWithConstFields_symbolic[it_30_0] >= -10  & structWithConstFields_symbolic[it_30_0] <= 10);
            }
        }
    #endif
    if (cntCall == 10) {
        cntCall--;
    }
    return structWithConstFields_symbolic[cntCall++];
}

