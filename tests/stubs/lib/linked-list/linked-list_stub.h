//1652885112000000000
//Please, do not change the line above
/*
 * This file is automatically generated by UnitTestBot. For further information see https://github.com/UnitTestBot/UTBotCpp
 * Copyright (c) Huawei Technologies Co., Ltd. 2012-2021. All rights reserved.
 */

#define _Alignas(x)
typedef long ptrdiff_t;

typedef unsigned long size_t;

typedef struct {
    long long __clang_max_align_nonce1 __attribute__((aligned(__alignof(long long))));
    long double __clang_max_align_nonce2 __attribute__((aligned(__alignof(long double))));
} max_align_t;

struct Node {
    int x;
    struct Node *next;
};

struct HardNode {
    struct Inner {
        int x;
        struct SuperInner {
            struct HardNode *next;
            int step;
        } superIn;
        double d;
    } in;
    char letter;
    struct HardNode *randomRef;
};

struct Kuku {
    struct Ququ {
        struct Kuku *next;
        char letter;
    } in;
    int x;
};


