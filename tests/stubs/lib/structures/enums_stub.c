// 1654082892000000000
// Please, do not change the line above

/*
 * This file is automatically generated by UnitTestBot. For further information see https://github.com/UnitTestBot/UTBotCpp
 * Copyright (c) Huawei Technologies Co., Ltd. 2012-2021. All rights reserved.
 */

#ifdef KLEE_MODE
extern void klee_make_symbolic(void *addr, unsigned long long nbytes, const char *name);
#endif
#include "enums_stub.h"

#define NULL ((void*)0)

int enumSignToInt_symbolic[10];
int enumSignToInt_symbolic[10];
int enumSignToInt(enum Sign s) {
    static int firstTimeCall = 1;
    static int cntCall = 0;
    #ifdef KLEE_MODE
        if (firstTimeCall == 1) {
            firstTimeCall = 0;
            klee_make_symbolic(&enumSignToInt_symbolic, sizeof(enumSignToInt_symbolic), "enumSignToInt_symbolic");
            for (int it_22_0 = 0; it_22_0 < 10; it_22_0 ++) {
                klee_prefer_cex(enumSignToInt_symbolic, enumSignToInt_symbolic[it_22_0] >= -10  & enumSignToInt_symbolic[it_22_0] <= 10);
            }
        }
    #endif
    if (cntCall == 10) {
        cntCall--;
    }
    return enumSignToInt_symbolic[cntCall++];
}


enum Sign intToSign_symbolic[10];
enum Sign intToSign_symbolic[10];
enum Sign intToSign(int a) {
    static int firstTimeCall = 1;
    static int cntCall = 0;
    #ifdef KLEE_MODE
        if (firstTimeCall == 1) {
            firstTimeCall = 0;
            klee_make_symbolic(&intToSign_symbolic, sizeof(intToSign_symbolic), "intToSign_symbolic");
            for (int it_18_0 = 0; it_18_0 < 10; it_18_0 ++) {
                // No constraints for intToSign_symbolic[it_18_0]
            }
        }
    #endif
    if (cntCall == 10) {
        cntCall--;
    }
    return intToSign_symbolic[cntCall++];
}


int structWithSignToInt_symbolic[10];
int structWithSignToInt_symbolic[10];
int structWithSignToInt(struct EnumStruct st) {
    static int firstTimeCall = 1;
    static int cntCall = 0;
    #ifdef KLEE_MODE
        if (firstTimeCall == 1) {
            firstTimeCall = 0;
            klee_make_symbolic(&structWithSignToInt_symbolic, sizeof(structWithSignToInt_symbolic), "structWithSignToInt_symbolic");
            for (int it_28_0 = 0; it_28_0 < 10; it_28_0 ++) {
                klee_prefer_cex(structWithSignToInt_symbolic, structWithSignToInt_symbolic[it_28_0] >= -10  & structWithSignToInt_symbolic[it_28_0] <= 10);
            }
        }
    #endif
    if (cntCall == 10) {
        cntCall--;
    }
    return structWithSignToInt_symbolic[cntCall++];
}


int sumSignArray_symbolic[10];
int sumSignArray_symbolic[10];
int sumSignArray(struct EnumArrayWrapper enWrapper) {
    static int firstTimeCall = 1;
    static int cntCall = 0;
    #ifdef KLEE_MODE
        if (firstTimeCall == 1) {
            firstTimeCall = 0;
            klee_make_symbolic(&sumSignArray_symbolic, sizeof(sumSignArray_symbolic), "sumSignArray_symbolic");
            for (int it_21_0 = 0; it_21_0 < 10; it_21_0 ++) {
                klee_prefer_cex(sumSignArray_symbolic, sumSignArray_symbolic[it_21_0] >= -10  & sumSignArray_symbolic[it_21_0] <= 10);
            }
        }
    #endif
    if (cntCall == 10) {
        cntCall--;
    }
    return sumSignArray_symbolic[cntCall++];
}


int enumSignPointerToInt_symbolic[10];
int enumSignPointerToInt_symbolic[10];
int enumSignPointerToInt(enum Sign * s) {
    static int firstTimeCall = 1;
    static int cntCall = 0;
    #ifdef KLEE_MODE
        if (firstTimeCall == 1) {
            firstTimeCall = 0;
            klee_make_symbolic(&enumSignPointerToInt_symbolic, sizeof(enumSignPointerToInt_symbolic), "enumSignPointerToInt_symbolic");
            for (int it_29_0 = 0; it_29_0 < 10; it_29_0 ++) {
                klee_prefer_cex(enumSignPointerToInt_symbolic, enumSignPointerToInt_symbolic[it_29_0] >= -10  & enumSignPointerToInt_symbolic[it_29_0] <= 10);
            }
        }
    #endif
    if (cntCall == 10) {
        cntCall--;
    }
    return enumSignPointerToInt_symbolic[cntCall++];
}


enum Sign * intToSignPointer(int a) {
    return NULL;
}


int getSignValue_symbolic[10];
int getSignValue_symbolic[10];
int getSignValue(enum Sign s) {
    static int firstTimeCall = 1;
    static int cntCall = 0;
    #ifdef KLEE_MODE
        if (firstTimeCall == 1) {
            firstTimeCall = 0;
            klee_make_symbolic(&getSignValue_symbolic, sizeof(getSignValue_symbolic), "getSignValue_symbolic");
            for (int it_21_0 = 0; it_21_0 < 10; it_21_0 ++) {
                klee_prefer_cex(getSignValue_symbolic, getSignValue_symbolic[it_21_0] >= -10  & getSignValue_symbolic[it_21_0] <= 10);
            }
        }
    #endif
    if (cntCall == 10) {
        cntCall--;
    }
    return getSignValue_symbolic[cntCall++];
}


