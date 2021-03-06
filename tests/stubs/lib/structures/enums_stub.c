// 1656436367000000000
// Please, do not change the line above

/*
 * This file is automatically generated by UnitTestBot. For further information seehttps://unittestbot.org
 */

#ifdef KLEE_MODE
extern void klee_make_symbolic(void *addr, unsigned long long nbytes, const char *name);
#endif
#include "enums_stub.h"

#define NULL ((void*)0)

int enumSignToInt_symbolic[10];
int _enumSignToInt_symbolic[10];
int enumSignToInt(enum Sign s) {
    static int firstTimeCall = 1;
    static int cntCall = 0;
    #ifdef KLEE_MODE
        if (firstTimeCall == 1) {
            firstTimeCall = 0;
            klee_make_symbolic(&_enumSignToInt_symbolic, sizeof(_enumSignToInt_symbolic), "_enumSignToInt_symbolic");
            for (int it_158_0 = 0; it_158_0 < 10; it_158_0 ++) {
                klee_prefer_cex(_enumSignToInt_symbolic, _enumSignToInt_symbolic[it_158_0] >= -10  & _enumSignToInt_symbolic[it_158_0] <= 10);
            }
        }
    #endif
    if (cntCall == 10) {
        cntCall--;
    }
    return _enumSignToInt_symbolic[cntCall++];
}


enum Sign intToSign_symbolic[10];
enum Sign _intToSign_symbolic[10];
enum Sign intToSign(int a) {
    static int firstTimeCall = 1;
    static int cntCall = 0;
    #ifdef KLEE_MODE
        if (firstTimeCall == 1) {
            firstTimeCall = 0;
            klee_make_symbolic(&_intToSign_symbolic, sizeof(_intToSign_symbolic), "_intToSign_symbolic");
            for (int it_159_0 = 0; it_159_0 < 10; it_159_0 ++) {
                // No constraints for _intToSign_symbolic[it_159_0]
            }
        }
    #endif
    if (cntCall == 10) {
        cntCall--;
    }
    return _intToSign_symbolic[cntCall++];
}


int structWithSignToInt_symbolic[10];
int _structWithSignToInt_symbolic[10];
int structWithSignToInt(struct EnumStruct st) {
    static int firstTimeCall = 1;
    static int cntCall = 0;
    #ifdef KLEE_MODE
        if (firstTimeCall == 1) {
            firstTimeCall = 0;
            klee_make_symbolic(&_structWithSignToInt_symbolic, sizeof(_structWithSignToInt_symbolic), "_structWithSignToInt_symbolic");
            for (int it_160_0 = 0; it_160_0 < 10; it_160_0 ++) {
                klee_prefer_cex(_structWithSignToInt_symbolic, _structWithSignToInt_symbolic[it_160_0] >= -10  & _structWithSignToInt_symbolic[it_160_0] <= 10);
            }
        }
    #endif
    if (cntCall == 10) {
        cntCall--;
    }
    return _structWithSignToInt_symbolic[cntCall++];
}


int sumSignArray_symbolic[10];
int _sumSignArray_symbolic[10];
int sumSignArray(struct EnumArrayWrapper enWrapper) {
    static int firstTimeCall = 1;
    static int cntCall = 0;
    #ifdef KLEE_MODE
        if (firstTimeCall == 1) {
            firstTimeCall = 0;
            klee_make_symbolic(&_sumSignArray_symbolic, sizeof(_sumSignArray_symbolic), "_sumSignArray_symbolic");
            for (int it_161_0 = 0; it_161_0 < 10; it_161_0 ++) {
                klee_prefer_cex(_sumSignArray_symbolic, _sumSignArray_symbolic[it_161_0] >= -10  & _sumSignArray_symbolic[it_161_0] <= 10);
            }
        }
    #endif
    if (cntCall == 10) {
        cntCall--;
    }
    return _sumSignArray_symbolic[cntCall++];
}


int enumSignPointerToInt_symbolic[10];
int _enumSignPointerToInt_symbolic[10];
int enumSignPointerToInt(enum Sign * s) {
    static int firstTimeCall = 1;
    static int cntCall = 0;
    #ifdef KLEE_MODE
        if (firstTimeCall == 1) {
            firstTimeCall = 0;
            klee_make_symbolic(&_enumSignPointerToInt_symbolic, sizeof(_enumSignPointerToInt_symbolic), "_enumSignPointerToInt_symbolic");
            for (int it_162_0 = 0; it_162_0 < 10; it_162_0 ++) {
                klee_prefer_cex(_enumSignPointerToInt_symbolic, _enumSignPointerToInt_symbolic[it_162_0] >= -10  & _enumSignPointerToInt_symbolic[it_162_0] <= 10);
            }
        }
    #endif
    if (cntCall == 10) {
        cntCall--;
    }
    return _enumSignPointerToInt_symbolic[cntCall++];
}


enum Sign * intToSignPointer(int a) {
    return NULL;
}


int getSignValue_symbolic[10];
int _getSignValue_symbolic[10];
int getSignValue(enum Sign s) {
    static int firstTimeCall = 1;
    static int cntCall = 0;
    #ifdef KLEE_MODE
        if (firstTimeCall == 1) {
            firstTimeCall = 0;
            klee_make_symbolic(&_getSignValue_symbolic, sizeof(_getSignValue_symbolic), "_getSignValue_symbolic");
            for (int it_163_0 = 0; it_163_0 < 10; it_163_0 ++) {
                klee_prefer_cex(_getSignValue_symbolic, _getSignValue_symbolic[it_163_0] >= -10  & _getSignValue_symbolic[it_163_0] <= 10);
            }
        }
    #endif
    if (cntCall == 10) {
        cntCall--;
    }
    return _getSignValue_symbolic[cntCall++];
}


