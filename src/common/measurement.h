#include <time.h>
#include <stdint.h>

#define EVAL_LOOP_RUNS 100000
#define GAUSS_EVAL_LOOP_RUNS 1000
#define GAUSS_INNER_LOOP_RUNS 10000
#define OUTPUT_CPUTIME 1

extern clock_t startTime;

void start();
void end();
void print_address(int, void*);
void print_list(void*);

struct ListItem;
struct ListItem {
    int Value;
    struct ListItem* prev;
    struct ListItem* next;
};

uint8_t* manual_calloc(uint64_t, uint64_t);
void manual_free_all(uint8_t**, int);
