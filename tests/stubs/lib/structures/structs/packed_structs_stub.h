//1652985894000000000
//Please, do not change the line above
/*
 * This file is automatically generated by UnitTestBot. For further information see https://github.com/UnitTestBot/UTBotCpp
 * Copyright (c) Huawei Technologies Co., Ltd. 2012-2021. All rights reserved.
 */

#define _Alignas(x)
#pragma pack(push, 1)
struct PackedStruct1 {
    short s;
    int i;
};
#pragma pack(pop)

struct myUnpackedStruct {
    char c;
    int i;
};

struct __attribute__((packed)) PackedStruct2 {
    char c;
    int i;
    struct myUnpackedStruct s;
};

#pragma pack(push, 8)
struct OtherPackedStruct {
    char a;
    struct PackedStruct2 str;
    char b;
    short s;
};
#pragma pack(pop)


