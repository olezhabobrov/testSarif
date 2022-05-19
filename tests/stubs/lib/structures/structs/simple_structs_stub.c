// 1652985893000000000
// Please, do not change the line above

/*
 * This file is automatically generated by UnitTestBot. For further information see https://github.com/UnitTestBot/UTBotCpp
 * Copyright (c) Huawei Technologies Co., Ltd. 2012-2021. All rights reserved.
 */

#ifdef KLEE_MODE
extern void klee_make_symbolic(void *addr, unsigned long long nbytes, const char *name);
#endif
#include "simple_structs_stub.h"

#define NULL ((void*)0)

int get_sign_struct_symbolic[10];
int get_sign_struct_symbolic[10];
int get_sign_struct(struct MyStruct st) {
    static int firstTimeCall = 1;
    static int cntCall = 0;
    #ifdef KLEE_MODE
        if (firstTimeCall == 1) {
            firstTimeCall = 0;
            klee_make_symbolic(&get_sign_struct_symbolic, sizeof(get_sign_struct_symbolic), "get_sign_struct_symbolic");
            for (int it_24_0 = 0; it_24_0 < 10; it_24_0 ++) {
                klee_prefer_cex(get_sign_struct_symbolic, get_sign_struct_symbolic[it_24_0] >= -10  & get_sign_struct_symbolic[it_24_0] <= 10);
            }
        }
    #endif
    if (cntCall == 10) {
        cntCall--;
    }
    return get_sign_struct_symbolic[cntCall++];
}


int calculate_something_symbolic[10];
int calculate_something_symbolic[10];
int calculate_something(struct OneMoreStruct str) {
    static int firstTimeCall = 1;
    static int cntCall = 0;
    #ifdef KLEE_MODE
        if (firstTimeCall == 1) {
            firstTimeCall = 0;
            klee_make_symbolic(&calculate_something_symbolic, sizeof(calculate_something_symbolic), "calculate_something_symbolic");
            for (int it_28_0 = 0; it_28_0 < 10; it_28_0 ++) {
                klee_prefer_cex(calculate_something_symbolic, calculate_something_symbolic[it_28_0] >= -10  & calculate_something_symbolic[it_28_0] <= 10);
            }
        }
    #endif
    if (cntCall == 10) {
        cntCall--;
    }
    return calculate_something_symbolic[cntCall++];
}


char get_symbol_by_struct_symbolic[10];
char get_symbol_by_struct_symbolic[10];
char get_symbol_by_struct(struct StructWithChars st) {
    static int firstTimeCall = 1;
    static int cntCall = 0;
    #ifdef KLEE_MODE
        if (firstTimeCall == 1) {
            firstTimeCall = 0;
            klee_make_symbolic(&get_symbol_by_struct_symbolic, sizeof(get_symbol_by_struct_symbolic), "get_symbol_by_struct_symbolic");
            for (int it_29_0 = 0; it_29_0 < 10; it_29_0 ++) {
                klee_prefer_cex(get_symbol_by_struct_symbolic, get_symbol_by_struct_symbolic[it_29_0] >= 'a' & get_symbol_by_struct_symbolic[it_29_0] <= 'z' & get_symbol_by_struct_symbolic[it_29_0] != '\0');
            }
        }
    #endif
    if (cntCall == 10) {
        cntCall--;
    }
    return get_symbol_by_struct_symbolic[cntCall++];
}


signed char operate_with_inner_structs_symbolic[10];
signed char operate_with_inner_structs_symbolic[10];
signed char operate_with_inner_structs(struct MainStruct st) {
    static int firstTimeCall = 1;
    static int cntCall = 0;
    #ifdef KLEE_MODE
        if (firstTimeCall == 1) {
            firstTimeCall = 0;
            klee_make_symbolic(&operate_with_inner_structs_symbolic, sizeof(operate_with_inner_structs_symbolic), "operate_with_inner_structs_symbolic");
            for (int it_35_0 = 0; it_35_0 < 10; it_35_0 ++) {
                klee_prefer_cex(operate_with_inner_structs_symbolic, operate_with_inner_structs_symbolic[it_35_0] >= 'a' & operate_with_inner_structs_symbolic[it_35_0] <= 'z' & operate_with_inner_structs_symbolic[it_35_0] != '\0');
            }
        }
    #endif
    if (cntCall == 10) {
        cntCall--;
    }
    return operate_with_inner_structs_symbolic[cntCall++];
}


struct MainStruct struct_as_return_type_symbolic[10];
struct MainStruct struct_as_return_type_symbolic[10];
struct MainStruct struct_as_return_type(int a) {
    static int firstTimeCall = 1;
    static int cntCall = 0;
    #ifdef KLEE_MODE
        if (firstTimeCall == 1) {
            firstTimeCall = 0;
            klee_make_symbolic(&struct_as_return_type_symbolic, sizeof(struct_as_return_type_symbolic), "struct_as_return_type_symbolic");
            for (int it_30_0 = 0; it_30_0 < 10; it_30_0 ++) {
                // No constraints for struct_as_return_type_symbolic[it_30_0]
            }
        }
    #endif
    if (cntCall == 10) {
        cntCall--;
    }
    return struct_as_return_type_symbolic[cntCall++];
}


struct StructWithUnion struct_with_union_as_return_type_symbolic[10];
struct StructWithUnion struct_with_union_as_return_type_symbolic[10];
struct StructWithUnion struct_with_union_as_return_type(int t) {
    static int firstTimeCall = 1;
    static int cntCall = 0;
    #ifdef KLEE_MODE
        if (firstTimeCall == 1) {
            firstTimeCall = 0;
            klee_make_symbolic(&struct_with_union_as_return_type_symbolic, sizeof(struct_with_union_as_return_type_symbolic), "struct_with_union_as_return_type_symbolic");
            for (int it_41_0 = 0; it_41_0 < 10; it_41_0 ++) {
                // No constraints for struct_with_union_as_return_type_symbolic[it_41_0]
            }
        }
    #endif
    if (cntCall == 10) {
        cntCall--;
    }
    return struct_with_union_as_return_type_symbolic[cntCall++];
}


struct A complex_struct_with_union_as_return_type_symbolic[10];
struct A complex_struct_with_union_as_return_type_symbolic[10];
struct A complex_struct_with_union_as_return_type(int t) {
    static int firstTimeCall = 1;
    static int cntCall = 0;
    #ifdef KLEE_MODE
        if (firstTimeCall == 1) {
            firstTimeCall = 0;
            klee_make_symbolic(&complex_struct_with_union_as_return_type_symbolic, sizeof(complex_struct_with_union_as_return_type_symbolic), "complex_struct_with_union_as_return_type_symbolic");
            for (int it_49_0 = 0; it_49_0 < 10; it_49_0 ++) {
                // No constraints for complex_struct_with_union_as_return_type_symbolic[it_49_0]
            }
        }
    #endif
    if (cntCall == 10) {
        cntCall--;
    }
    return complex_struct_with_union_as_return_type_symbolic[cntCall++];
}


struct StructWithUnionInUnion struct_with_union_in_union_as_return_type_symbolic[10];
struct StructWithUnionInUnion struct_with_union_in_union_as_return_type_symbolic[10];
struct StructWithUnionInUnion struct_with_union_in_union_as_return_type(int a, int b) {
    static int firstTimeCall = 1;
    static int cntCall = 0;
    #ifdef KLEE_MODE
        if (firstTimeCall == 1) {
            firstTimeCall = 0;
            klee_make_symbolic(&struct_with_union_in_union_as_return_type_symbolic, sizeof(struct_with_union_in_union_as_return_type_symbolic), "struct_with_union_in_union_as_return_type_symbolic");
            for (int it_50_0 = 0; it_50_0 < 10; it_50_0 ++) {
                // No constraints for struct_with_union_in_union_as_return_type_symbolic[it_50_0]
            }
        }
    #endif
    if (cntCall == 10) {
        cntCall--;
    }
    return struct_with_union_in_union_as_return_type_symbolic[cntCall++];
}


struct StructWithStructInUnion struct_with_struct_in_union_as_return_type_symbolic[10];
struct StructWithStructInUnion struct_with_struct_in_union_as_return_type_symbolic[10];
struct StructWithStructInUnion struct_with_struct_in_union_as_return_type(int a, int b) {
    static int firstTimeCall = 1;
    static int cntCall = 0;
    #ifdef KLEE_MODE
        if (firstTimeCall == 1) {
            firstTimeCall = 0;
            klee_make_symbolic(&struct_with_struct_in_union_as_return_type_symbolic, sizeof(struct_with_struct_in_union_as_return_type_symbolic), "struct_with_struct_in_union_as_return_type_symbolic");
            for (int it_51_0 = 0; it_51_0 < 10; it_51_0 ++) {
                // No constraints for struct_with_struct_in_union_as_return_type_symbolic[it_51_0]
            }
        }
    #endif
    if (cntCall == 10) {
        cntCall--;
    }
    return struct_with_struct_in_union_as_return_type_symbolic[cntCall++];
}


