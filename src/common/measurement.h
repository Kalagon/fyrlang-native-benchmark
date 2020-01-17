#include <time.h>

#define EVAL_LOOP_RUNS 100000
#define GAUSS_EVAL_LOOP_RUNS 1000
#define GAUSS_INNER_LOOP_RUNS 10000
#define OUTPUT_CPUTIME 1

extern clock_t startTime;

void start();
void end();
void print_address(int, void*);
