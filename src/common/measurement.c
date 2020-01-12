#include <stdio.h>
#include <time.h>
#include "measurement.h"

clock_t startTime;

void start() {
#ifdef OUTPUT_CPUTIME
    startTime = clock();
#endif
}

void end() {
#ifdef OUTPUT_CPUTIME
    clock_t end = clock();
    double dur = 1000000.0 * (end - startTime) / CLOCKS_PER_SEC;
    printf("CPU time used: %.0f μs\n", dur);
#endif
}

void print_address(void* ptr) {
    printf("Group starts at %p\n", ptr);
}
