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

void print_address(int num, void* ptr) {
    printf("Group %d starts at %p\n", num, ptr);
}

void print_list(void* ptr) {
    struct ListItem *item = (struct ListItem*)ptr;
    while (item -> prev != ((struct ListItem*)0)) {
        printf("%d\n", item -> Value);
        item = item -> prev;
    }
}
