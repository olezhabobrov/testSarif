// 1652437926000000000
// Please, do not change the line above

/*
 * This file is automatically generated by UnitTestBot. For further information see https://github.com/UnitTestBot/UTBotCpp
 * Copyright (c) Huawei Technologies Co., Ltd. 2012-2021. All rights reserved.
 */

#ifdef KLEE_MODE
extern void klee_make_symbolic(void *addr, unsigned long long nbytes, const char *name);
#endif
#include "function_pointers_stub.h"

#define NULL ((void*)0)

int worker_symbolic[10];
int worker_symbolic[10];
int worker(int a, int b) {
    static int firstTimeCall = 1;
    static int cntCall = 0;
    #ifdef KLEE_MODE
        if (firstTimeCall == 1) {
            firstTimeCall = 0;
            klee_make_symbolic(&worker_symbolic, sizeof(worker_symbolic), "worker_symbolic");
            for (int it_15_0 = 0; it_15_0 < 10; it_15_0 ++) {
                klee_prefer_cex(worker_symbolic, worker_symbolic[it_15_0] >= -10  & worker_symbolic[it_15_0] <= 10);
            }
        }
    #endif
    if (cntCall == 10) {
        cntCall--;
    }
    return worker_symbolic[cntCall++];
}


typedef int (*receiver_f_arg)(int, int);
int receiver_symbolic[10];
int receiver_symbolic[10];
int receiver(receiver_f_arg f, char c) {
    static int firstTimeCall = 1;
    static int cntCall = 0;
    #ifdef KLEE_MODE
        if (firstTimeCall == 1) {
            firstTimeCall = 0;
            klee_make_symbolic(&receiver_symbolic, sizeof(receiver_symbolic), "receiver_symbolic");
            for (int it_17_0 = 0; it_17_0 < 10; it_17_0 ++) {
                klee_prefer_cex(receiver_symbolic, receiver_symbolic[it_17_0] >= -10  & receiver_symbolic[it_17_0] <= 10);
            }
        }
    #endif
    if (cntCall == 10) {
        cntCall--;
    }
    return receiver_symbolic[cntCall++];
}


void entry_point_func() {
    return;
}


typedef char * (*pointerParam_f_arg)(int *);
char * pointerParam(pointerParam_f_arg f, int * x) {
    return "";
}


typedef int (*pointerToPointer_f_arg)(int);
typedef int (**pointerToPointer_f_arg_arr)(int);
char pointerToPointer_symbolic[10];
char pointerToPointer_symbolic[10];
char pointerToPointer(pointerToPointer_f_arg_arr f, char x) {
    static int firstTimeCall = 1;
    static int cntCall = 0;
    #ifdef KLEE_MODE
        if (firstTimeCall == 1) {
            firstTimeCall = 0;
            klee_make_symbolic(&pointerToPointer_symbolic, sizeof(pointerToPointer_symbolic), "pointerToPointer_symbolic");
            for (int it_25_0 = 0; it_25_0 < 10; it_25_0 ++) {
                klee_prefer_cex(pointerToPointer_symbolic, pointerToPointer_symbolic[it_25_0] >= 'a' & pointerToPointer_symbolic[it_25_0] <= 'z' & pointerToPointer_symbolic[it_25_0] != '\0');
            }
        }
    #endif
    if (cntCall == 10) {
        cntCall--;
    }
    return pointerToPointer_symbolic[cntCall++];
}


typedef int (*structParam_f_arg)(struct MyStruct);
int structParam_symbolic[10];
int structParam_symbolic[10];
int structParam(structParam_f_arg f, const char * s) {
    static int firstTimeCall = 1;
    static int cntCall = 0;
    #ifdef KLEE_MODE
        if (firstTimeCall == 1) {
            firstTimeCall = 0;
            klee_make_symbolic(&structParam_symbolic, sizeof(structParam_symbolic), "structParam_symbolic");
            for (int it_20_0 = 0; it_20_0 < 10; it_20_0 ++) {
                klee_prefer_cex(structParam_symbolic, structParam_symbolic[it_20_0] >= -10  & structParam_symbolic[it_20_0] <= 10);
            }
        }
    #endif
    if (cntCall == 10) {
        cntCall--;
    }
    return structParam_symbolic[cntCall++];
}


typedef int (*structPointerParam_f_arg)(struct MyStruct *);
int structPointerParam_symbolic[10];
int structPointerParam_symbolic[10];
int structPointerParam(structPointerParam_f_arg f, const int * arr) {
    static int firstTimeCall = 1;
    static int cntCall = 0;
    #ifdef KLEE_MODE
        if (firstTimeCall == 1) {
            firstTimeCall = 0;
            klee_make_symbolic(&structPointerParam_symbolic, sizeof(structPointerParam_symbolic), "structPointerParam_symbolic");
            for (int it_27_0 = 0; it_27_0 < 10; it_27_0 ++) {
                klee_prefer_cex(structPointerParam_symbolic, structPointerParam_symbolic[it_27_0] >= -10  & structPointerParam_symbolic[it_27_0] <= 10);
            }
        }
    #endif
    if (cntCall == 10) {
        cntCall--;
    }
    return structPointerParam_symbolic[cntCall++];
}


int f_add_symbolic[10];
int f_add_symbolic[10];
int f_add(int a, int b) {
    static int firstTimeCall = 1;
    static int cntCall = 0;
    #ifdef KLEE_MODE
        if (firstTimeCall == 1) {
            firstTimeCall = 0;
            klee_make_symbolic(&f_add_symbolic, sizeof(f_add_symbolic), "f_add_symbolic");
            for (int it_14_0 = 0; it_14_0 < 10; it_14_0 ++) {
                klee_prefer_cex(f_add_symbolic, f_add_symbolic[it_14_0] >= -10  & f_add_symbolic[it_14_0] <= 10);
            }
        }
    #endif
    if (cntCall == 10) {
        cntCall--;
    }
    return f_add_symbolic[cntCall++];
}


int f_sub_symbolic[10];
int f_sub_symbolic[10];
int f_sub(int a, int b) {
    static int firstTimeCall = 1;
    static int cntCall = 0;
    #ifdef KLEE_MODE
        if (firstTimeCall == 1) {
            firstTimeCall = 0;
            klee_make_symbolic(&f_sub_symbolic, sizeof(f_sub_symbolic), "f_sub_symbolic");
            for (int it_14_0 = 0; it_14_0 < 10; it_14_0 ++) {
                klee_prefer_cex(f_sub_symbolic, f_sub_symbolic[it_14_0] >= -10  & f_sub_symbolic[it_14_0] <= 10);
            }
        }
    #endif
    if (cntCall == 10) {
        cntCall--;
    }
    return f_sub_symbolic[cntCall++];
}


int f_mul_symbolic[10];
int f_mul_symbolic[10];
int f_mul(int a, int b) {
    static int firstTimeCall = 1;
    static int cntCall = 0;
    #ifdef KLEE_MODE
        if (firstTimeCall == 1) {
            firstTimeCall = 0;
            klee_make_symbolic(&f_mul_symbolic, sizeof(f_mul_symbolic), "f_mul_symbolic");
            for (int it_14_0 = 0; it_14_0 < 10; it_14_0 ++) {
                klee_prefer_cex(f_mul_symbolic, f_mul_symbolic[it_14_0] >= -10  & f_mul_symbolic[it_14_0] <= 10);
            }
        }
    #endif
    if (cntCall == 10) {
        cntCall--;
    }
    return f_mul_symbolic[cntCall++];
}


typedef int (*return_op_return)(int, int);
return_op_return return_op(char op) {
    return (int (*)(int, int)){0};
}


typedef int (*f_chain_functions_arg)(int, int);
typedef int (**f_chain_functions_arg_arr)(int, int);
int f_chain_symbolic[10];
int f_chain_symbolic[10];
int f_chain(f_chain_functions_arg_arr functions, int a) {
    static int firstTimeCall = 1;
    static int cntCall = 0;
    #ifdef KLEE_MODE
        if (firstTimeCall == 1) {
            firstTimeCall = 0;
            klee_make_symbolic(&f_chain_symbolic, sizeof(f_chain_symbolic), "f_chain_symbolic");
            for (int it_16_0 = 0; it_16_0 < 10; it_16_0 ++) {
                klee_prefer_cex(f_chain_symbolic, f_chain_symbolic[it_16_0] >= -10  & f_chain_symbolic[it_16_0] <= 10);
            }
        }
    #endif
    if (cntCall == 10) {
        cntCall--;
    }
    return f_chain_symbolic[cntCall++];
}


typedef int (*get_chain_return)(int, int);
typedef int (**get_chain_return_arr)(int, int);
get_chain_return_arr get_chain(char * c) {
    return NULL;
}


int calcFunctionStruct_symbolic[10];
int calcFunctionStruct_symbolic[10];
int calcFunctionStruct(struct FStruct function_struct, int b) {
    static int firstTimeCall = 1;
    static int cntCall = 0;
    #ifdef KLEE_MODE
        if (firstTimeCall == 1) {
            firstTimeCall = 0;
            klee_make_symbolic(&calcFunctionStruct_symbolic, sizeof(calcFunctionStruct_symbolic), "calcFunctionStruct_symbolic");
            for (int it_27_0 = 0; it_27_0 < 10; it_27_0 ++) {
                klee_prefer_cex(calcFunctionStruct_symbolic, calcFunctionStruct_symbolic[it_27_0] >= -10  & calcFunctionStruct_symbolic[it_27_0] <= 10);
            }
        }
    #endif
    if (cntCall == 10) {
        cntCall--;
    }
    return calcFunctionStruct_symbolic[cntCall++];
}


