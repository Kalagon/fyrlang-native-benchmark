#include <time.h>

#define EVAL_LOOP_RUNS 1000
#define OUTPUT_CPUTIME 1

extern clock_t startTime;

void start();
void end();
void print_address(void*);
