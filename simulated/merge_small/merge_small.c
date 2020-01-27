#include "merge_small.h"
#include "measurement.h"

void __init___b5382c4c8d3dbf0533d4b9c0498e6b887f48595007795f231c48bb9ddaa254ff() {

};

void Main_8687703d335a261e2781a3e232b08164cfe708d5045da19ba88993863afd1d60() {
    start();
    int v_i;
    v_i = 0;
    uintptr_t* v_gv_e2;
    uintptr_t* v_gv_e1;
    uintptr_t v_g_10;
    v_g_10 = 0;
    uintptr_t v_g_7;
    v_g_7 = 0;
    for (;;) {
        #ifdef DEBUG
        bool tmp_1 = v_i < 3;
        #else
        bool tmp_1 = v_i < (GAUSS_EVAL_LOOP_RUNS * 100);
        #endif
        bool tmp_2 = !tmp_1;
        if (tmp_2) {
            break;
        };
        struct Element_95396c59a6799651af88e7484877ef75a414d96b5fb0493b975965b470c30d99* tmp_3 = (struct Element_95396c59a6799651af88e7484877ef75a414d96b5fb0493b975965b470c30d99*)((struct Element_95396c59a6799651af88e7484877ef75a414d96b5fb0493b975965b470c30d99*)Malloc_5cdcff11cc4fe0b7702dcefd8e40a3205be2181cfbca6974337e1a1f974cd4e8(1, sizeof(struct Element_95396c59a6799651af88e7484877ef75a414d96b5fb0493b975965b470c30d99), &v_g_7));
        *tmp_3 = (struct Element_95396c59a6799651af88e7484877ef75a414d96b5fb0493b975965b470c30d99){v_i, ((struct Element_95396c59a6799651af88e7484877ef75a414d96b5fb0493b975965b470c30d99*)0), ((struct Element_95396c59a6799651af88e7484877ef75a414d96b5fb0493b975965b470c30d99*)0)};
        v_gv_e1 = &v_g_7;
        struct Element_95396c59a6799651af88e7484877ef75a414d96b5fb0493b975965b470c30d99* v_e1;
        v_gv_e1 = &v_g_7;
        v_e1 = tmp_3;
        struct Element_95396c59a6799651af88e7484877ef75a414d96b5fb0493b975965b470c30d99* tmp_5 = (struct Element_95396c59a6799651af88e7484877ef75a414d96b5fb0493b975965b470c30d99*)((struct Element_95396c59a6799651af88e7484877ef75a414d96b5fb0493b975965b470c30d99*)Malloc_5cdcff11cc4fe0b7702dcefd8e40a3205be2181cfbca6974337e1a1f974cd4e8(1, sizeof(struct Element_95396c59a6799651af88e7484877ef75a414d96b5fb0493b975965b470c30d99), &v_g_10));
        *tmp_5 = (struct Element_95396c59a6799651af88e7484877ef75a414d96b5fb0493b975965b470c30d99){1, ((struct Element_95396c59a6799651af88e7484877ef75a414d96b5fb0493b975965b470c30d99*)0), ((struct Element_95396c59a6799651af88e7484877ef75a414d96b5fb0493b975965b470c30d99*)0)};
        v_gv_e2 = &v_g_10;
        struct Element_95396c59a6799651af88e7484877ef75a414d96b5fb0493b975965b470c30d99* v_e2;
        v_gv_e2 = &v_g_10;
        v_e2 = tmp_5;
        int v_j;
        v_j = 0;
        for (;;) {
            #ifdef DEBUG
            bool tmp_8 = v_j < 3;
            #else
            bool tmp_8 = v_j < (GAUSS_INNER_LOOP_RUNS / 100);
            #endif
            bool tmp_9 = !tmp_8;
            if (tmp_9) {
                break;
            };
            struct Element_95396c59a6799651af88e7484877ef75a414d96b5fb0493b975965b470c30d99* tmp_10 = (struct Element_95396c59a6799651af88e7484877ef75a414d96b5fb0493b975965b470c30d99*)((struct Element_95396c59a6799651af88e7484877ef75a414d96b5fb0493b975965b470c30d99*)Malloc_5cdcff11cc4fe0b7702dcefd8e40a3205be2181cfbca6974337e1a1f974cd4e8(1, sizeof(struct Element_95396c59a6799651af88e7484877ef75a414d96b5fb0493b975965b470c30d99), &v_g_10));
            *tmp_10 = (struct Element_95396c59a6799651af88e7484877ef75a414d96b5fb0493b975965b470c30d99){v_j, ((struct Element_95396c59a6799651af88e7484877ef75a414d96b5fb0493b975965b470c30d99*)0), ((struct Element_95396c59a6799651af88e7484877ef75a414d96b5fb0493b975965b470c30d99*)0)};
            v_gv_e2 = &v_g_10;
            v_e2 = tmp_10;
            struct Element_95396c59a6799651af88e7484877ef75a414d96b5fb0493b975965b470c30d99* tmp_11 = Chain_c9c1d95f3ab133116ff2b8cb92faa926da3a1e9528f7416b20df0775a6c1c1b6_23f7449dd99b17e96e30887da78a12e04444397745044f39683c3783a3ba2a05(v_e1, v_e2, &v_g_7, &v_g_10, &v_g_7);
            v_gv_e1 = &v_g_7;
            v_e1 = tmp_11;
            v_j++;
        };
        v_i++;
        #ifdef DEBUG
        print_list((void*)v_e1);
        #endif
        Free_17cd220e161d0642d8eb85204f15c78e318810795cb3cfa0160f7806603a731a(&v_g_10);
        Free_17cd220e161d0642d8eb85204f15c78e318810795cb3cfa0160f7806603a731a(&v_g_7);
    };
    end();

};

struct Element_95396c59a6799651af88e7484877ef75a414d96b5fb0493b975965b470c30d99* Chain_c9c1d95f3ab133116ff2b8cb92faa926da3a1e9528f7416b20df0775a6c1c1b6_23f7449dd99b17e96e30887da78a12e04444397745044f39683c3783a3ba2a05(struct Element_95396c59a6799651af88e7484877ef75a414d96b5fb0493b975965b470c30d99* p_this, struct Element_95396c59a6799651af88e7484877ef75a414d96b5fb0493b975965b470c30d99* p_e2, uintptr_t* g_this, uintptr_t* g_e2, uintptr_t* g_0_return) {
    p_this -> next = p_e2;
    p_e2 -> prev = p_this;
    Merge_0a07642b5f32c65a63a806dde3e254e9db9e84ab40901a0b432741643f03ac64(g_this, g_e2);
    *g_e2 = 0; // This is a workaround. It's needed to prevent loops in the group list. This breaks the lifetime guarantees!
    return p_e2;

};

int main(int argc, char **argv) {
    #ifdef RPMALLOC
    rpmalloc_initialize();
    #endif
    __init___a0deb5ebe09db172d62667761dc6bc16118f6fb5e048a991b1ca841a830f76f0();
    __init___b5382c4c8d3dbf0533d4b9c0498e6b887f48595007795f231c48bb9ddaa254ff();
    Main_8687703d335a261e2781a3e232b08164cfe708d5045da19ba88993863afd1d60();
    #ifdef RPMALLOC
    rpmalloc_finalize();
    #endif
    return 0;
}
