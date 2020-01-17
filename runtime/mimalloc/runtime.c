#include "runtime.h"

static struct groupHeader_4db78c2db99b0ed1e81ab5015e323d4208b3393d4e914d75bf3e32955726accc* first_8e8a54813ab7df5b0fcced5eb493817bea30c0ba06730bbe1a5be1be48e2aac8(struct groupHeader_4db78c2db99b0ed1e81ab5015e323d4208b3393d4e914d75bf3e32955726accc* p_g);

extern void exit(int p_status);

extern uint8_t* mi_calloc(uint64_t p_count, uint64_t p_size);

extern void mi_free(uint8_t* p_ptr);

static struct groupHeader_4db78c2db99b0ed1e81ab5015e323d4208b3393d4e914d75bf3e32955726accc* last_16bd55673192911524f821df8b5ae2aab334d57389291ccf002f3ba68cdb9072(struct groupHeader_4db78c2db99b0ed1e81ab5015e323d4208b3393d4e914d75bf3e32955726accc* p_g);

void __init___a0deb5ebe09db172d62667761dc6bc16118f6fb5e048a991b1ca841a830f76f0() {

};

static struct groupHeader_4db78c2db99b0ed1e81ab5015e323d4208b3393d4e914d75bf3e32955726accc* first_8e8a54813ab7df5b0fcced5eb493817bea30c0ba06730bbe1a5be1be48e2aac8(struct groupHeader_4db78c2db99b0ed1e81ab5015e323d4208b3393d4e914d75bf3e32955726accc* p_g) {
    struct groupHeader_4db78c2db99b0ed1e81ab5015e323d4208b3393d4e914d75bf3e32955726accc* v_x;
    v_x = p_g;
    for (;;) {
        struct groupHeader_4db78c2db99b0ed1e81ab5015e323d4208b3393d4e914d75bf3e32955726accc* tmp_2 = v_x -> prev;
        bool tmp_3 = tmp_2 != ((struct groupHeader_4db78c2db99b0ed1e81ab5015e323d4208b3393d4e914d75bf3e32955726accc*)0);
        bool tmp_4 = !tmp_3;
        if (tmp_4) {
            break;
        };
        struct groupHeader_4db78c2db99b0ed1e81ab5015e323d4208b3393d4e914d75bf3e32955726accc* tmp_5 = v_x -> prev;
        v_x = tmp_5;
    };
    return v_x;

};

uint8_t* __calloc_25c0811e17cf9d78c27906435785866902f3999ee1490b4a52b7726f1dafea00(uint64_t p_count, uint64_t p_size) {
    uint8_t* tmp_2 = mi_calloc(p_count, p_size);
    return tmp_2;

};

void __free_40e2201c9898302b9e4bc96dc3d95b74e5c98ab9f0a135b2de6bdd491d8c4fee(uint8_t* p_ptr) {
    mi_free(p_ptr);

};

uint8_t* Malloc_5cdcff11cc4fe0b7702dcefd8e40a3205be2181cfbca6974337e1a1f974cd4e8(uint64_t p_count, uint64_t p_size, uintptr_t* p_group) {
    uintptr_t tmp_3 = *p_group;
    uintptr_t tmp_4 = tmp_3 & ~1ull;
    uint8_t* tmp_5 = (uint8_t*)tmp_4;
    uint8_t* v_g;
    v_g = tmp_5;
    uint64_t tmp_7 = p_count * p_size;
    int tmp_8 = sizeof(struct groupHeader_4db78c2db99b0ed1e81ab5015e323d4208b3393d4e914d75bf3e32955726accc);
    uint64_t tmp_9 = (uint64_t)tmp_8;
    uint64_t tmp_10 = tmp_7 + tmp_9;
    uint64_t v_s;
    v_s = tmp_10;
    uint8_t* tmp_12 = __calloc_25c0811e17cf9d78c27906435785866902f3999ee1490b4a52b7726f1dafea00(1ull, v_s);
    uint8_t* v_alloc;
    v_alloc = tmp_12;
    bool tmp_14 = v_alloc == ((uint8_t*)0);
    if (tmp_14) {
        exit(1);
    };
    struct groupHeader_4db78c2db99b0ed1e81ab5015e323d4208b3393d4e914d75bf3e32955726accc* tmp_15 = (struct groupHeader_4db78c2db99b0ed1e81ab5015e323d4208b3393d4e914d75bf3e32955726accc*)v_alloc;
    struct groupHeader_4db78c2db99b0ed1e81ab5015e323d4208b3393d4e914d75bf3e32955726accc* v_headerNew;
    v_headerNew = tmp_15;
    v_headerNew -> last = v_headerNew;
    bool tmp_17 = v_g == ((uint8_t*)0);
    if (tmp_17) {
        uintptr_t tmp_18 = (uintptr_t)v_headerNew;
        *p_group = tmp_18;
    } else {
        struct groupHeader_4db78c2db99b0ed1e81ab5015e323d4208b3393d4e914d75bf3e32955726accc* tmp_19 = (struct groupHeader_4db78c2db99b0ed1e81ab5015e323d4208b3393d4e914d75bf3e32955726accc*)v_g;
        struct groupHeader_4db78c2db99b0ed1e81ab5015e323d4208b3393d4e914d75bf3e32955726accc* v_headerPrev;
        v_headerPrev = tmp_19;
        struct groupHeader_4db78c2db99b0ed1e81ab5015e323d4208b3393d4e914d75bf3e32955726accc* tmp_21 = last_16bd55673192911524f821df8b5ae2aab334d57389291ccf002f3ba68cdb9072(v_headerPrev);
        v_headerNew -> prev = tmp_21;
        v_headerPrev -> last = v_headerNew;
    };
    int tmp_22 = sizeof(struct groupHeader_4db78c2db99b0ed1e81ab5015e323d4208b3393d4e914d75bf3e32955726accc);
    uintptr_t tmp_23 = (uintptr_t)tmp_22;
    uint8_t* tmp_24 = v_alloc + tmp_23;
    return tmp_24;

};

void Free_17cd220e161d0642d8eb85204f15c78e318810795cb3cfa0160f7806603a731a(uintptr_t* p_group) {
    uintptr_t tmp_1 = *p_group;
    bool tmp_2 = tmp_1 == 0ull;
    if (tmp_2) {
        return;
    } else {
        uintptr_t tmp_3 = *p_group;
        uintptr_t tmp_4 = tmp_3 & 1ull;
        bool tmp_5 = tmp_4 != 0ull;
        if (tmp_5) {
            *p_group = 0ull;
            return;
        };
    };
    struct groupHeader_4db78c2db99b0ed1e81ab5015e323d4208b3393d4e914d75bf3e32955726accc* tmp_6 = (struct groupHeader_4db78c2db99b0ed1e81ab5015e323d4208b3393d4e914d75bf3e32955726accc*)(*p_group);
    struct groupHeader_4db78c2db99b0ed1e81ab5015e323d4208b3393d4e914d75bf3e32955726accc* tmp_7 = last_16bd55673192911524f821df8b5ae2aab334d57389291ccf002f3ba68cdb9072(tmp_6);
    struct groupHeader_4db78c2db99b0ed1e81ab5015e323d4208b3393d4e914d75bf3e32955726accc* v_h;
    v_h = tmp_7;
    for (;;) {
        bool tmp_9 = v_h != ((struct groupHeader_4db78c2db99b0ed1e81ab5015e323d4208b3393d4e914d75bf3e32955726accc*)0);
        bool tmp_10 = !tmp_9;
        if (tmp_10) {
            break;
        };
        struct groupHeader_4db78c2db99b0ed1e81ab5015e323d4208b3393d4e914d75bf3e32955726accc* tmp_11 = v_h -> prev;
        struct groupHeader_4db78c2db99b0ed1e81ab5015e323d4208b3393d4e914d75bf3e32955726accc* v_h2;
        v_h2 = tmp_11;
        uint8_t* tmp_13 = (uint8_t*)v_h;
        __free_40e2201c9898302b9e4bc96dc3d95b74e5c98ab9f0a135b2de6bdd491d8c4fee(tmp_13);
        v_h = v_h2;
    };
    *p_group = 0ull;

};

void Merge_0a07642b5f32c65a63a806dde3e254e9db9e84ab40901a0b432741643f03ac64(uintptr_t* p_gptr1, uintptr_t* p_gptr2) {
    uintptr_t tmp_2 = *p_gptr1;
    uintptr_t tmp_3 = tmp_2 & ~1ull;
    struct groupHeader_4db78c2db99b0ed1e81ab5015e323d4208b3393d4e914d75bf3e32955726accc* tmp_4 = (struct groupHeader_4db78c2db99b0ed1e81ab5015e323d4208b3393d4e914d75bf3e32955726accc*)tmp_3;
    struct groupHeader_4db78c2db99b0ed1e81ab5015e323d4208b3393d4e914d75bf3e32955726accc* v_g1;
    v_g1 = tmp_4;
    uintptr_t tmp_6 = *p_gptr2;
    uintptr_t tmp_7 = tmp_6 & ~1ull;
    struct groupHeader_4db78c2db99b0ed1e81ab5015e323d4208b3393d4e914d75bf3e32955726accc* tmp_8 = (struct groupHeader_4db78c2db99b0ed1e81ab5015e323d4208b3393d4e914d75bf3e32955726accc*)tmp_7;
    struct groupHeader_4db78c2db99b0ed1e81ab5015e323d4208b3393d4e914d75bf3e32955726accc* v_g2;
    v_g2 = tmp_8;
    bool tmp_10 = v_g1 == ((struct groupHeader_4db78c2db99b0ed1e81ab5015e323d4208b3393d4e914d75bf3e32955726accc*)0);
    if (tmp_10) {
        uintptr_t tmp_11 = (uintptr_t)v_g1;
        uintptr_t tmp_12 = tmp_11 | 1ull;
        *p_gptr2 = tmp_12;
        return;
    };
    bool tmp_13 = v_g2 == ((struct groupHeader_4db78c2db99b0ed1e81ab5015e323d4208b3393d4e914d75bf3e32955726accc*)0);
    if (tmp_13) {
        uintptr_t tmp_14 = (uintptr_t)v_g2;
        uintptr_t tmp_15 = tmp_14 | 1ull;
        *p_gptr1 = tmp_15;
        return;
    };
    bool tmp_16 = v_g1 == v_g2;
    if (tmp_16) {
        return;
    };
    struct groupHeader_4db78c2db99b0ed1e81ab5015e323d4208b3393d4e914d75bf3e32955726accc* tmp_17 = last_16bd55673192911524f821df8b5ae2aab334d57389291ccf002f3ba68cdb9072(v_g1);
    struct groupHeader_4db78c2db99b0ed1e81ab5015e323d4208b3393d4e914d75bf3e32955726accc* v_last1;
    v_last1 = tmp_17;
    struct groupHeader_4db78c2db99b0ed1e81ab5015e323d4208b3393d4e914d75bf3e32955726accc* tmp_19 = last_16bd55673192911524f821df8b5ae2aab334d57389291ccf002f3ba68cdb9072(v_g2);
    struct groupHeader_4db78c2db99b0ed1e81ab5015e323d4208b3393d4e914d75bf3e32955726accc* v_last2;
    v_last2 = tmp_19;
    bool tmp_21 = v_last1 == v_last2;
    if (tmp_21) {
        return;
    };
    struct groupHeader_4db78c2db99b0ed1e81ab5015e323d4208b3393d4e914d75bf3e32955726accc* tmp_22 = first_8e8a54813ab7df5b0fcced5eb493817bea30c0ba06730bbe1a5be1be48e2aac8(v_g2);
    struct groupHeader_4db78c2db99b0ed1e81ab5015e323d4208b3393d4e914d75bf3e32955726accc* v_first2;
    v_first2 = tmp_22;
    v_first2 -> prev = v_last1;
    v_last1 -> last = v_last2;
    v_g1 -> last = v_last2;
    v_g2 -> last = v_last2;
    uintptr_t tmp_24 = *p_gptr1;
    uintptr_t tmp_25 = tmp_24 & 1ull;
    bool tmp_26 = tmp_25 == 0ull;
    uintptr_t tmp_27 = *p_gptr2;
    uintptr_t tmp_28 = tmp_27 & 1ull;
    bool tmp_29 = tmp_28 == 0ull;
    bool tmp_30 = tmp_26 && tmp_29;
    if (tmp_30) {
        uintptr_t tmp_31 = (uintptr_t)v_g2;
        uintptr_t tmp_32 = tmp_31 | 1ull;
        *p_gptr2 = tmp_32;
    };

};

static struct groupHeader_4db78c2db99b0ed1e81ab5015e323d4208b3393d4e914d75bf3e32955726accc* last_16bd55673192911524f821df8b5ae2aab334d57389291ccf002f3ba68cdb9072(struct groupHeader_4db78c2db99b0ed1e81ab5015e323d4208b3393d4e914d75bf3e32955726accc* p_g) {
    struct groupHeader_4db78c2db99b0ed1e81ab5015e323d4208b3393d4e914d75bf3e32955726accc* v_x;
    v_x = p_g;
    for (;;) {
        struct groupHeader_4db78c2db99b0ed1e81ab5015e323d4208b3393d4e914d75bf3e32955726accc* tmp_2 = v_x -> last;
        bool tmp_3 = tmp_2 != v_x;
        bool tmp_4 = !tmp_3;
        if (tmp_4) {
            break;
        };
        struct groupHeader_4db78c2db99b0ed1e81ab5015e323d4208b3393d4e914d75bf3e32955726accc* tmp_5 = v_x -> last;
        v_x = tmp_5;
    };
    return v_x;

};

