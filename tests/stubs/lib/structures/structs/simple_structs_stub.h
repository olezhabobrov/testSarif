//1652985894000000000
//Please, do not change the line above
/*
 * This file is automatically generated by UnitTestBot. For further information see https://github.com/UnitTestBot/UTBotCpp
 * Copyright (c) Huawei Technologies Co., Ltd. 2012-2021. All rights reserved.
 */

#define _Alignas(x)
struct MyStruct {
    short x;
    const int a;
};

struct OneMoreStruct {
    int a;
    unsigned short c;
    long long b;
};

struct StructWithChars {
    char a;
    signed char c;
    unsigned char u;
    int b;
};

struct MainStruct {
    struct InnerStruct {
        struct InInnerStruct {
            unsigned int u;
            long long l;
        };
        char c;
        struct InInnerStruct ininner;
        short s;
    } inner;
    int x;
    long long y;
};

struct StructWithUnion {
    union InnerUnion {
        char c;
        int x;
    } un;
    struct InnerStructWithUnion {
        union Inner2Union {
            char c;
            int x;
        } un2;
    } is;
    int x;
};

struct A {
    union B {
        struct C {
            union D {
                char c;
                int x;
                double y;
            } arr;
        } t;
    } a;
};

struct StructWithUnionInUnion {
    union Union1 {
        int x;
        union Union2 {
            double y;
            char c;
        } t;
        char c;
    } un;
};

struct StructWithStructInUnion {
    union DeepUnion {
        int x;
        struct DeepStruct {
            char c;
            double d;
        } ds;
        long long *ptr;
    } un;
};


