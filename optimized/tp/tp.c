#include "tp.h"
#include "measurement.h"

void __init___db8105ebc40ff92e1d9ccbbf72a26c68478a266fefba2f004bc9d50537e849d2() {

};

void Main_e2623014893e6b82d1f1ce8ab269c0be12a42bacbcdcbe7ee54a8348eec4b985() {
    int v_i;
    v_i = 0;
    uintptr_t v_g_0;
    v_g_0 = 0;
    start();
    for (;;) {
        bool tmp_1 = v_i < EVAL_LOOP_RUNS;
        bool tmp_2 = !tmp_1;
        if (tmp_2) {
            break;
        };
        t_7c8c88665f5d7d690e67ae72d2de5b3729538848f0d1729c0f9e9f844488bf08 tmp_3 = (t_7c8c88665f5d7d690e67ae72d2de5b3729538848f0d1729c0f9e9f844488bf08){(int*)Malloc_5cdcff11cc4fe0b7702dcefd8e40a3205be2181cfbca6974337e1a1f974cd4e8(31, sizeof(int), &v_g_0), 1, 1};
        tmp_3.ptr[0] = 1;
        // print_address(tmp_3.ptr);
        t_7c8c88665f5d7d690e67ae72d2de5b3729538848f0d1729c0f9e9f844488bf08 v_arr1;
        v_arr1 = tmp_3;
        t_7c8c88665f5d7d690e67ae72d2de5b3729538848f0d1729c0f9e9f844488bf08 tmp_5;
        tmp_5.ptr = tmp_3.ptr + 2 * sizeof(int);
        tmp_5.ptr[0] = 1;
        tmp_5.ptr[1] = 2;
        // print_address(tmp_5.ptr);
        t_7c8c88665f5d7d690e67ae72d2de5b3729538848f0d1729c0f9e9f844488bf08 v_arr2;
        v_arr2 = tmp_5;
        t_7c8c88665f5d7d690e67ae72d2de5b3729538848f0d1729c0f9e9f844488bf08 tmp_7;
        tmp_7.ptr = tmp_5.ptr + 4 * sizeof(int);
        tmp_7.ptr[0] = 1;
        tmp_7.ptr[1] = 2;
        tmp_7.ptr[2] = 3;
        // print_address(tmp_7.ptr);
        t_7c8c88665f5d7d690e67ae72d2de5b3729538848f0d1729c0f9e9f844488bf08 v_arr3;
        v_arr3 = tmp_7;
        t_7c8c88665f5d7d690e67ae72d2de5b3729538848f0d1729c0f9e9f844488bf08 tmp_9;
        tmp_9.ptr = tmp_7.ptr + 8 * sizeof(int);
        tmp_9.ptr[0] = 1;
        tmp_9.ptr[1] = 2;
        tmp_9.ptr[2] = 3;
        tmp_9.ptr[3] = 4;
        // print_address(tmp_9.ptr);
        t_7c8c88665f5d7d690e67ae72d2de5b3729538848f0d1729c0f9e9f844488bf08 v_arr4;
        v_arr4 = tmp_9;
        t_7c8c88665f5d7d690e67ae72d2de5b3729538848f0d1729c0f9e9f844488bf08 tmp_11;
        tmp_11.ptr = tmp_9.ptr + 8 * sizeof(int);
        tmp_11.ptr[0] = 1;
        tmp_11.ptr[1] = 2;
        tmp_11.ptr[2] = 3;
        tmp_11.ptr[3] = 4;
        tmp_11.ptr[4] = 5;
        // print_address(tmp_11.ptr);
        t_7c8c88665f5d7d690e67ae72d2de5b3729538848f0d1729c0f9e9f844488bf08 v_arr5;
        v_arr5 = tmp_11;
        v_i++;
        Free_17cd220e161d0642d8eb85204f15c78e318810795cb3cfa0160f7806603a731a(&v_g_0);
    };
    end();

};

int main(int argc, char **argv) {
    __init___a0deb5ebe09db172d62667761dc6bc16118f6fb5e048a991b1ca841a830f76f0();
    __init___db8105ebc40ff92e1d9ccbbf72a26c68478a266fefba2f004bc9d50537e849d2();
    Main_e2623014893e6b82d1f1ce8ab269c0be12a42bacbcdcbe7ee54a8348eec4b985();
    return 0;
}