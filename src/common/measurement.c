#include <stdio.h>
#include <time.h>

clock_t startTime;

void start() {
    startTime = clock();
}

void end() {
    clock_t end = clock();
    double dur = 1000000.0 * (end - startTime) / CLOCKS_PER_SEC;
    printf("CPU time used: %.0f μs\n", dur);
}

void print_address(void* ptr) {
    printf("Group starts at %p\n", ptr);
}
