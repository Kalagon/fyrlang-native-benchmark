#include "gauss30.h"
#include "measurement.h"

void __init___69996d6d28981b271992bd7c578abcbb7738ac82e10654759a094c117d536fdd() {

};

void Main_a893a1c3729779a9d1de343fc1ad3c902c58006a1b99d00ad57beb47e8e69d96() {
    start();
    uintptr_t* v_gv_order;
    uintptr_t v_g_0;
    v_g_0 = 0;
    t_7c8c88665f5d7d690e67ae72d2de5b3729538848f0d1729c0f9e9f844488bf08 tmp_0 = (t_7c8c88665f5d7d690e67ae72d2de5b3729538848f0d1729c0f9e9f844488bf08){(int*)Malloc_5cdcff11cc4fe0b7702dcefd8e40a3205be2181cfbca6974337e1a1f974cd4e8(30, sizeof(int), &v_g_0), 30, 30};
    tmp_0.ptr[0] = 104;
    tmp_0.ptr[1] = 72;
    tmp_0.ptr[2] = 76;
    tmp_0.ptr[3] = 96;
    tmp_0.ptr[4] = 4;
    tmp_0.ptr[5] = 84;
    tmp_0.ptr[6] = 116;
    tmp_0.ptr[7] = 108;
    tmp_0.ptr[8] = 12;
    tmp_0.ptr[9] = 8;
    tmp_0.ptr[10] = 96;
    tmp_0.ptr[11] = 108;
    tmp_0.ptr[12] = 12;
    tmp_0.ptr[13] = 12;
    tmp_0.ptr[14] = 116;
    tmp_0.ptr[15] = 108;
    tmp_0.ptr[16] = 64;
    tmp_0.ptr[17] = 116;
    tmp_0.ptr[18] = 88;
    tmp_0.ptr[19] = 92;
    tmp_0.ptr[20] = 76;
    tmp_0.ptr[21] = 100;
    tmp_0.ptr[22] = 96;
    tmp_0.ptr[23] = 92;
    tmp_0.ptr[24] = 8;
    tmp_0.ptr[25] = 8;
    tmp_0.ptr[26] = 12;
    tmp_0.ptr[27] = 64;
    tmp_0.ptr[28] = 96;
    tmp_0.ptr[29] = 88;
    v_gv_order = &v_g_0;
    t_7c8c88665f5d7d690e67ae72d2de5b3729538848f0d1729c0f9e9f844488bf08 v_order;
    v_gv_order = &v_g_0;
    v_order = tmp_0;
    int v_i;
    v_i = 0;
    uintptr_t* v_gv_arr;
    uintptr_t v_g_2;
    v_g_2 = 0;
    for (;;) {
        bool tmp_3 = v_i < EVAL_LOOP_RUNS;
        bool tmp_4 = !tmp_3;
        if (tmp_4) {
            break;
        };
        t_7c8c88665f5d7d690e67ae72d2de5b3729538848f0d1729c0f9e9f844488bf08 tmp_5;
        v_gv_arr = &v_g_2;
        t_7c8c88665f5d7d690e67ae72d2de5b3729538848f0d1729c0f9e9f844488bf08 v_arr;
        v_gv_arr = &v_g_2;
        v_arr = tmp_5;
        int v_s;
        v_s = 0;
        for (;;) {
            int tmp_8 = v_order.size;
            bool tmp_9 = v_s < tmp_8;
            bool tmp_10 = !tmp_9;
            if (tmp_10) {
                break;
            };
            int tmp_11 = (v_order.ptr)[v_s];
            t_7c8c88665f5d7d690e67ae72d2de5b3729538848f0d1729c0f9e9f844488bf08 tmp_12 = (t_7c8c88665f5d7d690e67ae72d2de5b3729538848f0d1729c0f9e9f844488bf08){(int*)Malloc_5cdcff11cc4fe0b7702dcefd8e40a3205be2181cfbca6974337e1a1f974cd4e8(tmp_11, sizeof(int), &v_g_2), 1, 1};
            v_gv_arr = &v_g_2;
            v_arr = tmp_12;
            v_s++;
        };
        int tmp_13 = (v_arr.ptr)[3];
        int v_b;
        v_b = tmp_13;
        v_i++;
        Free_17cd220e161d0642d8eb85204f15c78e318810795cb3cfa0160f7806603a731a(&v_g_2);
    };
    Free_17cd220e161d0642d8eb85204f15c78e318810795cb3cfa0160f7806603a731a(&v_g_0);
    end();

};

int main(int argc, char **argv) {
    __init___a0deb5ebe09db172d62667761dc6bc16118f6fb5e048a991b1ca841a830f76f0();
    __init___69996d6d28981b271992bd7c578abcbb7738ac82e10654759a094c117d536fdd();
    Main_a893a1c3729779a9d1de343fc1ad3c902c58006a1b99d00ad57beb47e8e69d96();
    return 0;
}
