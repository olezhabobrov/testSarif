// 1655816143000000000
// Please, do not change the line above

/*
 * This file is automatically generated by UnitTestBot. For further information see https://github.com/UnitTestBot/UTBotCpp
 * Copyright (c) Huawei Technologies Co., Ltd. 2012-2021. All rights reserved.
 */

#ifdef KLEE_MODE
extern void klee_make_symbolic(void *addr, unsigned long long nbytes, const char *name);
#endif
#include "multi_arrays_stub.h"

#define NULL ((void*)0)

int kek_symbolic[10];
int kek_symbolic[10];
int kek(int (*a)[2]) {
    static int firstTimeCall = 1;
    static int cntCall = 0;
    #ifdef KLEE_MODE
        if (firstTimeCall == 1) {
            firstTimeCall = 0;
            klee_make_symbolic(&kek_symbolic, sizeof(kek_symbolic), "kek_symbolic");
            for (int it_12_0 = 0; it_12_0 < 10; it_12_0 ++) {
                klee_prefer_cex(kek_symbolic, kek_symbolic[it_12_0] >= -10  & kek_symbolic[it_12_0] <= 10);
            }
        }
    #endif
    if (cntCall == 10) {
        cntCall--;
    }
    return kek_symbolic[cntCall++];
}


int sumSign_symbolic[10];
int sumSign_symbolic[10];
int sumSign(int (*a)[2]) {
    static int firstTimeCall = 1;
    static int cntCall = 0;
    #ifdef KLEE_MODE
        if (firstTimeCall == 1) {
            firstTimeCall = 0;
            klee_make_symbolic(&sumSign_symbolic, sizeof(sumSign_symbolic), "sumSign_symbolic");
            for (int it_16_0 = 0; it_16_0 < 10; it_16_0 ++) {
                klee_prefer_cex(sumSign_symbolic, sumSign_symbolic[it_16_0] >= -10  & sumSign_symbolic[it_16_0] <= 10);
            }
        }
    #endif
    if (cntCall == 10) {
        cntCall--;
    }
    return sumSign_symbolic[cntCall++];
}


int value_symbolic[10];
int value_symbolic[10];
int value(int (*a)[3]) {
    static int firstTimeCall = 1;
    static int cntCall = 0;
    #ifdef KLEE_MODE
        if (firstTimeCall == 1) {
            firstTimeCall = 0;
            klee_make_symbolic(&value_symbolic, sizeof(value_symbolic), "value_symbolic");
            for (int it_14_0 = 0; it_14_0 < 10; it_14_0 ++) {
                klee_prefer_cex(value_symbolic, value_symbolic[it_14_0] >= -10  & value_symbolic[it_14_0] <= 10);
            }
        }
    #endif
    if (cntCall == 10) {
        cntCall--;
    }
    return value_symbolic[cntCall++];
}


int value2_symbolic[10];
int value2_symbolic[10];
int value2(int (*a)[3]) {
    static int firstTimeCall = 1;
    static int cntCall = 0;
    #ifdef KLEE_MODE
        if (firstTimeCall == 1) {
            firstTimeCall = 0;
            klee_make_symbolic(&value2_symbolic, sizeof(value2_symbolic), "value2_symbolic");
            for (int it_15_0 = 0; it_15_0 < 10; it_15_0 ++) {
                klee_prefer_cex(value2_symbolic, value2_symbolic[it_15_0] >= -10  & value2_symbolic[it_15_0] <= 10);
            }
        }
    #endif
    if (cntCall == 10) {
        cntCall--;
    }
    return value2_symbolic[cntCall++];
}


int some_method_symbolic[10];
int some_method_symbolic[10];
int some_method(int ** pointer2d) {
    static int firstTimeCall = 1;
    static int cntCall = 0;
    #ifdef KLEE_MODE
        if (firstTimeCall == 1) {
            firstTimeCall = 0;
            klee_make_symbolic(&some_method_symbolic, sizeof(some_method_symbolic), "some_method_symbolic");
            for (int it_20_0 = 0; it_20_0 < 10; it_20_0 ++) {
                klee_prefer_cex(some_method_symbolic, some_method_symbolic[it_20_0] >= -10  & some_method_symbolic[it_20_0] <= 10);
            }
        }
    #endif
    if (cntCall == 10) {
        cntCall--;
    }
    return some_method_symbolic[cntCall++];
}


int return_sign_sum_symbolic[10];
int return_sign_sum_symbolic[10];
int return_sign_sum(struct MyStructMult st) {
    static int firstTimeCall = 1;
    static int cntCall = 0;
    #ifdef KLEE_MODE
        if (firstTimeCall == 1) {
            firstTimeCall = 0;
            klee_make_symbolic(&return_sign_sum_symbolic, sizeof(return_sign_sum_symbolic), "return_sign_sum_symbolic");
            for (int it_24_0 = 0; it_24_0 < 10; it_24_0 ++) {
                klee_prefer_cex(return_sign_sum_symbolic, return_sign_sum_symbolic[it_24_0] >= -10  & return_sign_sum_symbolic[it_24_0] <= 10);
            }
        }
    #endif
    if (cntCall == 10) {
        cntCall--;
    }
    return return_sign_sum_symbolic[cntCall++];
}


long long return_sign_sum_of_struct_array_symbolic[10];
long long return_sign_sum_of_struct_array_symbolic[10];
long long return_sign_sum_of_struct_array(struct PointStruct (*arr)[2]) {
    static int firstTimeCall = 1;
    static int cntCall = 0;
    #ifdef KLEE_MODE
        if (firstTimeCall == 1) {
            firstTimeCall = 0;
            klee_make_symbolic(&return_sign_sum_of_struct_array_symbolic, sizeof(return_sign_sum_of_struct_array_symbolic), "return_sign_sum_of_struct_array_symbolic");
            for (int it_40_0 = 0; it_40_0 < 10; it_40_0 ++) {
                klee_prefer_cex(return_sign_sum_of_struct_array_symbolic, return_sign_sum_of_struct_array_symbolic[it_40_0] >= -10  & return_sign_sum_of_struct_array_symbolic[it_40_0] <= 10);
            }
        }
    #endif
    if (cntCall == 10) {
        cntCall--;
    }
    return return_sign_sum_of_struct_array_symbolic[cntCall++];
}


int point_quart_symbolic[10];
int point_quart_symbolic[10];
int point_quart(struct PointStruct ** point) {
    static int firstTimeCall = 1;
    static int cntCall = 0;
    #ifdef KLEE_MODE
        if (firstTimeCall == 1) {
            firstTimeCall = 0;
            klee_make_symbolic(&point_quart_symbolic, sizeof(point_quart_symbolic), "point_quart_symbolic");
            for (int it_20_0 = 0; it_20_0 < 10; it_20_0 ++) {
                klee_prefer_cex(point_quart_symbolic, point_quart_symbolic[it_20_0] >= -10  & point_quart_symbolic[it_20_0] <= 10);
            }
        }
    #endif
    if (cntCall == 10) {
        cntCall--;
    }
    return point_quart_symbolic[cntCall++];
}


struct IntArray return_struct_with_2d_array_symbolic[10];
struct IntArray return_struct_with_2d_array_symbolic[10];
struct IntArray return_struct_with_2d_array(int a) {
    static int firstTimeCall = 1;
    static int cntCall = 0;
    #ifdef KLEE_MODE
        if (firstTimeCall == 1) {
            firstTimeCall = 0;
            klee_make_symbolic(&return_struct_with_2d_array_symbolic, sizeof(return_struct_with_2d_array_symbolic), "return_struct_with_2d_array_symbolic");
            for (int it_36_0 = 0; it_36_0 < 10; it_36_0 ++) {
                // No constraints for return_struct_with_2d_array_symbolic[it_36_0]
            }
        }
    #endif
    if (cntCall == 10) {
        cntCall--;
    }
    return return_struct_with_2d_array_symbolic[cntCall++];
}


int sum_matrix_symbolic[10];
int sum_matrix_symbolic[10];
int sum_matrix() {
    static int firstTimeCall = 1;
    static int cntCall = 0;
    #ifdef KLEE_MODE
        if (firstTimeCall == 1) {
            firstTimeCall = 0;
            klee_make_symbolic(&sum_matrix_symbolic, sizeof(sum_matrix_symbolic), "sum_matrix_symbolic");
            for (int it_19_0 = 0; it_19_0 < 10; it_19_0 ++) {
                klee_prefer_cex(sum_matrix_symbolic, sum_matrix_symbolic[it_19_0] >= -10  & sum_matrix_symbolic[it_19_0] <= 10);
            }
        }
    #endif
    if (cntCall == 10) {
        cntCall--;
    }
    return sum_matrix_symbolic[cntCall++];
}


int count_dashes_symbolic[10];
int count_dashes_symbolic[10];
int count_dashes() {
    static int firstTimeCall = 1;
    static int cntCall = 0;
    #ifdef KLEE_MODE
        if (firstTimeCall == 1) {
            firstTimeCall = 0;
            klee_make_symbolic(&count_dashes_symbolic, sizeof(count_dashes_symbolic), "count_dashes_symbolic");
            for (int it_21_0 = 0; it_21_0 < 10; it_21_0 ++) {
                klee_prefer_cex(count_dashes_symbolic, count_dashes_symbolic[it_21_0] >= -10  & count_dashes_symbolic[it_21_0] <= 10);
            }
        }
    #endif
    if (cntCall == 10) {
        cntCall--;
    }
    return count_dashes_symbolic[cntCall++];
}


