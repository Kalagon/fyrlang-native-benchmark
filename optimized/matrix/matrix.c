#include "matrix.h"
#include "measurement.h"
#ifdef DEBUG
#include <stdio.h>
#endif

void __init___80fdbaf177663807a62b7fd44b36b7ed533ba4fe496ece945f2f71b5ec67a3dd() {

};

void Main_7877ee78375728661b20baa119c27d52e08f8733a4bfab5bb996e913ea1d72d0() {
    start();
    int v_loop;
    v_loop = 0;
    uintptr_t* v_gv_m1;
    uintptr_t* v_gv_m2;
    uintptr_t v_g_4;
    v_g_4 = 0;
    uintptr_t v_g_0;
    v_g_0 = 0;
    for (;;) {
        #ifdef DEBUG
        bool tmp_1 = v_loop < 3;
        #else
        bool tmp_1 = v_loop < EVAL_LOOP_RUNS;
        #endif
        bool tmp_2 = !tmp_1;
        if (tmp_2) {
            break;
        };
        t_7c8c88665f5d7d690e67ae72d2de5b3729538848f0d1729c0f9e9f844488bf08 tmp_3 = (t_7c8c88665f5d7d690e67ae72d2de5b3729538848f0d1729c0f9e9f844488bf08){(int*)Malloc_5cdcff11cc4fe0b7702dcefd8e40a3205be2181cfbca6974337e1a1f974cd4e8(1, ((9 * sizeof(int)) + (3 * sizeof(t_7c8c88665f5d7d690e67ae72d2de5b3729538848f0d1729c0f9e9f844488bf08))) , &v_g_0), 3, 3};
        tmp_3.ptr[0] = 1;
        tmp_3.ptr[1] = 2;
        tmp_3.ptr[2] = 3;
        t_7c8c88665f5d7d690e67ae72d2de5b3729538848f0d1729c0f9e9f844488bf08 tmp_4 = {tmp_3.ptr + 3, 3, 3};
        tmp_4.ptr[0] = 2;
        tmp_4.ptr[1] = 3;
        tmp_4.ptr[2] = 4;
        t_7c8c88665f5d7d690e67ae72d2de5b3729538848f0d1729c0f9e9f844488bf08 tmp_5 = {tmp_4.ptr + 3, 3, 3};
        tmp_5.ptr[0] = 3;
        tmp_5.ptr[1] = 4;
        tmp_5.ptr[2] = 5;
        t_8d8bacf4fb969b903737629d1af147fd46bab13065410901d5fe80bc81b7c69b tmp_6 = {(t_7c8c88665f5d7d690e67ae72d2de5b3729538848f0d1729c0f9e9f844488bf08*)(tmp_5.ptr + 3), 3, 3};
        tmp_6.ptr[0] = tmp_3;
        tmp_6.ptr[1] = tmp_4;
        tmp_6.ptr[2] = tmp_5;
        v_gv_m1 = &v_g_0;
        t_8d8bacf4fb969b903737629d1af147fd46bab13065410901d5fe80bc81b7c69b v_m1;
        v_gv_m1 = &v_g_0;
        v_m1 = tmp_6;
        t_7c8c88665f5d7d690e67ae72d2de5b3729538848f0d1729c0f9e9f844488bf08 tmp_8 = (t_7c8c88665f5d7d690e67ae72d2de5b3729538848f0d1729c0f9e9f844488bf08){(int*)Malloc_5cdcff11cc4fe0b7702dcefd8e40a3205be2181cfbca6974337e1a1f974cd4e8(1, ((9 * sizeof(int)) + (3 * sizeof(t_7c8c88665f5d7d690e67ae72d2de5b3729538848f0d1729c0f9e9f844488bf08))), &v_g_4), 3, 3};
        tmp_8.ptr[0] = 3;
        tmp_8.ptr[1] = 5;
        tmp_8.ptr[2] = 1;
        t_7c8c88665f5d7d690e67ae72d2de5b3729538848f0d1729c0f9e9f844488bf08 tmp_9 = {tmp_8.ptr + 3, 3, 3};
        tmp_9.ptr[0] = 5;
        tmp_9.ptr[1] = 7;
        tmp_9.ptr[2] = 3;
        t_7c8c88665f5d7d690e67ae72d2de5b3729538848f0d1729c0f9e9f844488bf08 tmp_10 = {tmp_9.ptr + 3, 3, 3};
        tmp_10.ptr[0] = 7;
        tmp_10.ptr[1] = 9;
        tmp_10.ptr[2] = 5;
        t_8d8bacf4fb969b903737629d1af147fd46bab13065410901d5fe80bc81b7c69b tmp_11 = {(t_7c8c88665f5d7d690e67ae72d2de5b3729538848f0d1729c0f9e9f844488bf08*)(tmp_10.ptr + 3), 3, 3};
        tmp_11.ptr[0] = tmp_8;
        tmp_11.ptr[1] = tmp_9;
        tmp_11.ptr[2] = tmp_10;
        v_gv_m2 = &v_g_4;
        t_8d8bacf4fb969b903737629d1af147fd46bab13065410901d5fe80bc81b7c69b v_m2;
        v_gv_m2 = &v_g_4;
        v_m2 = tmp_11;
        t_8998f33d4a0cf4b4c2584e14b3255b9c70974f303ee7f3067c5c46b315b62a9e v_m_res;
        v_m_res = (t_8998f33d4a0cf4b4c2584e14b3255b9c70974f303ee7f3067c5c46b315b62a9e){(t_eafb402d1f50c877bc4855995a8ff7954c48ac022f129817f13ea6211343e7f0){1, 2, 3}, (t_eafb402d1f50c877bc4855995a8ff7954c48ac022f129817f13ea6211343e7f0){1, 2, 3}, (t_eafb402d1f50c877bc4855995a8ff7954c48ac022f129817f13ea6211343e7f0){1, 2, 3}};
        int v_i;
        v_i = 0;
        for (;;) {
            bool tmp_15 = v_i < 3;
            bool tmp_16 = !tmp_15;
            if (tmp_16) {
                break;
            };
            int v_j;
            v_j = 0;
            for (;;) {
                bool tmp_18 = v_j < 3;
                bool tmp_19 = !tmp_18;
                if (tmp_19) {
                    break;
                };
                int tmp_20 = (((v_m1.ptr)[v_i]).ptr)[v_j];
                int tmp_21 = (((v_m2.ptr)[v_i]).ptr)[v_j];
                int tmp_22 = tmp_20 + tmp_21;
                int idx_6 = v_i;
                if (idx_6 >= 3) {
                    exit(1);
                };
                int idx_8 = v_j;
                if (idx_8 >= 3) {
                    exit(1);
                };
                (((v_m_res.arr)[idx_6]).arr)[idx_8] = tmp_22;
                #ifdef DEBUG
                printf("%d\t", tmp_22);
                #endif
                v_j++;
            };
            #ifdef DEBUG
            printf("\n");
            #endif
            v_i++;
        };
        v_loop++;
        Free_17cd220e161d0642d8eb85204f15c78e318810795cb3cfa0160f7806603a731a(&v_g_4);
        Free_17cd220e161d0642d8eb85204f15c78e318810795cb3cfa0160f7806603a731a(&v_g_0);
    };
    end();

};

int main(int argc, char **argv) {
    #ifdef RPMALLOC
    rpmalloc_initialize();
    #endif
    __init___a0deb5ebe09db172d62667761dc6bc16118f6fb5e048a991b1ca841a830f76f0();
    __init___80fdbaf177663807a62b7fd44b36b7ed533ba4fe496ece945f2f71b5ec67a3dd();
    Main_7877ee78375728661b20baa119c27d52e08f8733a4bfab5bb996e913ea1d72d0();
    #ifdef RPMALLOC
    rpmalloc_finalize();
    #endif
    return 0;
}
