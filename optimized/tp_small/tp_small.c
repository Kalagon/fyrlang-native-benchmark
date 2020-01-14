#include "tp_small.h"
#include "measurement.h"

void __init___285fca2a6b0bb45d151588769d4dc522882b1830e096e1b174b04e3914106b29() {

};

void Main_71128e6f4d7596de4f4b65bb1708c701ea80a086d698ced6798306f529b80275() {
    start();
    int v_i;
    v_i = 0;
    uintptr_t v_g_0;
    v_g_0 = 0;
    for (;;) {
        bool tmp_1 = v_i < EVAL_LOOP_RUNS;
        bool tmp_2 = !tmp_1;
        if (tmp_2) {
            break;
        };
        t_7c8c88665f5d7d690e67ae72d2de5b3729538848f0d1729c0f9e9f844488bf08 tmp_3 = (t_7c8c88665f5d7d690e67ae72d2de5b3729538848f0d1729c0f9e9f844488bf08){(int*)Malloc_5cdcff11cc4fe0b7702dcefd8e40a3205be2181cfbca6974337e1a1f974cd4e8(140, sizeof(int), &v_g_0), 0, 8};
        t_7c8c88665f5d7d690e67ae72d2de5b3729538848f0d1729c0f9e9f844488bf08 v_arr0;
        v_arr0 = tmp_3;
        t_7c8c88665f5d7d690e67ae72d2de5b3729538848f0d1729c0f9e9f844488bf08 tmp_5 = {tmp_3.ptr + 8, 0, 12};
        t_7c8c88665f5d7d690e67ae72d2de5b3729538848f0d1729c0f9e9f844488bf08 v_arr1;
        v_arr1 = tmp_5;
        t_7c8c88665f5d7d690e67ae72d2de5b3729538848f0d1729c0f9e9f844488bf08 tmp_7 = {tmp_5.ptr + 12, 0, 16};
        t_7c8c88665f5d7d690e67ae72d2de5b3729538848f0d1729c0f9e9f844488bf08 v_arr2;
        v_arr2 = tmp_7;
        t_7c8c88665f5d7d690e67ae72d2de5b3729538848f0d1729c0f9e9f844488bf08 tmp_9 = {tmp_7.ptr + 16, 0, 20};
        t_7c8c88665f5d7d690e67ae72d2de5b3729538848f0d1729c0f9e9f844488bf08 v_arr3;
        v_arr3 = tmp_9;
        t_7c8c88665f5d7d690e67ae72d2de5b3729538848f0d1729c0f9e9f844488bf08 tmp_11 = {tmp_9.ptr + 20, 0, 24};
        t_7c8c88665f5d7d690e67ae72d2de5b3729538848f0d1729c0f9e9f844488bf08 v_arr4;
        v_arr4 = tmp_11;
        t_7c8c88665f5d7d690e67ae72d2de5b3729538848f0d1729c0f9e9f844488bf08 tmp_13 = {tmp_11.ptr + 24, 0, 28};
        t_7c8c88665f5d7d690e67ae72d2de5b3729538848f0d1729c0f9e9f844488bf08 v_arr5;
        v_arr5 = tmp_13;
        t_7c8c88665f5d7d690e67ae72d2de5b3729538848f0d1729c0f9e9f844488bf08 tmp_15 = {tmp_13.ptr + 28, 0, 32};
        t_7c8c88665f5d7d690e67ae72d2de5b3729538848f0d1729c0f9e9f844488bf08 v_arr6;
        v_arr6 = tmp_15;
        v_i++;
        Free_17cd220e161d0642d8eb85204f15c78e318810795cb3cfa0160f7806603a731a(&v_g_0);
    };
    end();
};

int main(int argc, char **argv) {
    __init___a0deb5ebe09db172d62667761dc6bc16118f6fb5e048a991b1ca841a830f76f0();
    __init___285fca2a6b0bb45d151588769d4dc522882b1830e096e1b174b04e3914106b29();
    Main_71128e6f4d7596de4f4b65bb1708c701ea80a086d698ced6798306f529b80275();
    return 0;
}
