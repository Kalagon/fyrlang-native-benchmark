#include <stdint.h>
#include "measurement.h"
#include "runtime.h"


uint8_t* manual_calloc(uint64_t p_count, uint64_t p_size) {
    __calloc_25c0811e17cf9d78c27906435785866902f3999ee1490b4a52b7726f1dafea00(p_count, p_size);
}

void manual_free_all(uint8_t** ptr, int size) {
    for (int i = 0; i < size; i++) {
        __free_40e2201c9898302b9e4bc96dc3d95b74e5c98ab9f0a135b2de6bdd491d8c4fee(ptr[i]);
    }
}
