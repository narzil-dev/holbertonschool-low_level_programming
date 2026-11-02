
#include <stdio.h>
#include <time.h>

#define DATASET_SIZE 50000
#define SEED_VALUE 42u

static int dataset[DATASET_SIZE];

static unsigned int next_value(unsigned int *state)
{
    *state = (*state * 1103515245u) + 12345u;
    return *state;
}

static void build_dataset(void)
{
    unsigned int state;
    int i;

    state = SEED_VALUE;

    for (i = 0; i < DATASET_SIZE; i++)
        dataset[i] = (int)(next_value(&state) % 100000);
}

static void process_dataset(void)
{
    int i;
    int v;

    for (i = 0; i < DATASET_SIZE; i++)
    {
        v = dataset[i];
        v = (v * 3) + (v / 7) - (v % 11);
        if (v < 0)
            v = -v;
        dataset[i] = v;
    }
}

static unsigned long reduce_checksum(void)
{
    unsigned long sum;
    int i;

    sum = 0;
    for (i = 0; i < DATASET_SIZE; i++)
        sum = (sum * 131ul) + (unsigned long)dataset[i];

    return sum;
}

int main(void)
{
    unsigned long checksum;
    clock_t T1;
    clock_t T2;
    clock_t T3;
    clock_t T4;
    double total;
    double build_data;
    double process;
    double reduce;

    T1 = clock();
    build_dataset();

    T2 = clock();
    process_dataset();

    T3 = clock();
    checksum = reduce_checksum();

    T4 = clock();

    build_data = (double)(T2 - T1) / CLOCKS_PER_SEC;
    process = (double)(T3 - T2) / CLOCKS_PER_SEC;
    reduce = (double)(T4 - T3) / CLOCKS_PER_SEC;
    total = (double)(T4 - T1) / CLOCKS_PER_SEC;

    if (checksum == 0ul)
        printf("impossible\n");

    printf("TOTAL seconds: %.6f\n", total);
    printf("BUILD_DATA seconds: %.6f\n", build_data);
    printf("PROCESS seconds: %.6f\n", process);
    printf("REDUCE seconds: %.6f\n", reduce);

    return (0);
}
