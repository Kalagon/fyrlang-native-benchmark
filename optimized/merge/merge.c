#include "merge.h"
#include "measurement.h"

void __init___b5382c4c8d3dbf0533d4b9c0498e6b887f48595007795f231c48bb9ddaa254ff() {

};

void Main_8687703d335a261e2781a3e232b08164cfe708d5045da19ba88993863afd1d60() {
    start();
    int v_i;
    v_i = 0;
    for (;;) {
        #ifdef DEBUG
        int mallocsInnerSize = 3;
        bool tmp_1 = v_i < 3;
        #else
        int mallocsInnerSize = GAUSS_INNER_LOOP_RUNS;
        bool tmp_1 = v_i < GAUSS_EVAL_LOOP_RUNS;
        #endif
        bool tmp_2 = !tmp_1;
        if (tmp_2) {
            break;
        };
        uint8_t* mallocsOuter[2];
        mallocsOuter[0] = manual_calloc(1, sizeof(struct Element_95396c59a6799651af88e7484877ef75a414d96b5fb0493b975965b470c30d99));
        struct Element_95396c59a6799651af88e7484877ef75a414d96b5fb0493b975965b470c30d99* tmp_3 = (struct Element_95396c59a6799651af88e7484877ef75a414d96b5fb0493b975965b470c30d99*)((struct Element_95396c59a6799651af88e7484877ef75a414d96b5fb0493b975965b470c30d99*)mallocsOuter[0]);
        *tmp_3 = (struct Element_95396c59a6799651af88e7484877ef75a414d96b5fb0493b975965b470c30d99){v_i, ((struct Element_95396c59a6799651af88e7484877ef75a414d96b5fb0493b975965b470c30d99*)0), ((struct Element_95396c59a6799651af88e7484877ef75a414d96b5fb0493b975965b470c30d99*)0)};
        struct Element_95396c59a6799651af88e7484877ef75a414d96b5fb0493b975965b470c30d99* v_e1;
        v_e1 = tmp_3;
        mallocsOuter[1] = manual_calloc(1, sizeof(struct Element_95396c59a6799651af88e7484877ef75a414d96b5fb0493b975965b470c30d99));
        struct Element_95396c59a6799651af88e7484877ef75a414d96b5fb0493b975965b470c30d99* tmp_5 = (struct Element_95396c59a6799651af88e7484877ef75a414d96b5fb0493b975965b470c30d99*)((struct Element_95396c59a6799651af88e7484877ef75a414d96b5fb0493b975965b470c30d99*)mallocsOuter[1]);
        *tmp_5 = (struct Element_95396c59a6799651af88e7484877ef75a414d96b5fb0493b975965b470c30d99){1, ((struct Element_95396c59a6799651af88e7484877ef75a414d96b5fb0493b975965b470c30d99*)0), ((struct Element_95396c59a6799651af88e7484877ef75a414d96b5fb0493b975965b470c30d99*)0)};
        struct Element_95396c59a6799651af88e7484877ef75a414d96b5fb0493b975965b470c30d99* v_e2;
        v_e2 = tmp_5;
        uint8_t* mallocsInner[mallocsInnerSize];
        int v_j;
        v_j = 0;
        for (;;) {
            #ifdef DEBUG
            bool tmp_8 = v_j < 3;
            #else
            bool tmp_8 = v_j < GAUSS_INNER_LOOP_RUNS;
            #endif
            bool tmp_9 = !tmp_8;
            if (tmp_9) {
                break;
            };
            mallocsInner[v_j] = manual_calloc(1, sizeof(struct Element_95396c59a6799651af88e7484877ef75a414d96b5fb0493b975965b470c30d99));
            struct Element_95396c59a6799651af88e7484877ef75a414d96b5fb0493b975965b470c30d99* tmp_10 = (struct Element_95396c59a6799651af88e7484877ef75a414d96b5fb0493b975965b470c30d99*)((struct Element_95396c59a6799651af88e7484877ef75a414d96b5fb0493b975965b470c30d99*)mallocsInner[v_j]);
            *tmp_10 = (struct Element_95396c59a6799651af88e7484877ef75a414d96b5fb0493b975965b470c30d99){v_j, ((struct Element_95396c59a6799651af88e7484877ef75a414d96b5fb0493b975965b470c30d99*)0), ((struct Element_95396c59a6799651af88e7484877ef75a414d96b5fb0493b975965b470c30d99*)0)};
            v_e2 = tmp_10;
            struct Element_95396c59a6799651af88e7484877ef75a414d96b5fb0493b975965b470c30d99* tmp_11 = Chain_c9c1d95f3ab133116ff2b8cb92faa926da3a1e9528f7416b20df0775a6c1c1b6_23f7449dd99b17e96e30887da78a12e04444397745044f39683c3783a3ba2a05(v_e1, v_e2);
            v_e1 = tmp_11;
            v_j++;
        };
        v_i++;
        #ifdef DEBUG
        print_list((void*)v_e1);
        #endif
        manual_free_all(mallocsInner, mallocsInnerSize);
        manual_free_all(mallocsOuter, 2);
    };
    end();

};

struct Element_95396c59a6799651af88e7484877ef75a414d96b5fb0493b975965b470c30d99* Chain_c9c1d95f3ab133116ff2b8cb92faa926da3a1e9528f7416b20df0775a6c1c1b6_23f7449dd99b17e96e30887da78a12e04444397745044f39683c3783a3ba2a05(struct Element_95396c59a6799651af88e7484877ef75a414d96b5fb0493b975965b470c30d99* p_this, struct Element_95396c59a6799651af88e7484877ef75a414d96b5fb0493b975965b470c30d99* p_e2) {
    p_this -> next = p_e2;
    p_e2 -> prev = p_this;
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
