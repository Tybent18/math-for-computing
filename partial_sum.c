#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#define SIZE 15
#define MIN_VAL 10
#define MAX_VAL 19  // rand() % (MAX_VAL - MIN_VAL + 1) + MIN_VAL

// Compute sum of array elements from start to end (inclusive)
int psum(int data[], int start, int end, int size) {
    if (start < 0) start = 0;
    if (end >= size) end = size - 1;
    int sum = 0;
    for (int i = start; i <= end; i++) {
        sum += data[i];
    }
    return sum;
}

// Print array elements from start to end (inclusive)
void pprint(int data[], int start, int end, int size) {
    if (start < 0) start = 0;
    if (end >= size) end = size - 1;
    for (int i = start; i <= end; i++) {
        printf("[%d] = %d\n", i, data[i]);
    }
}

int main() {
    int data[SIZE];
    int start, end;

    srand(time(NULL));  // Seed random number generator

    // Fill dataset with random numbers between MIN_VAL and MAX_VAL
    for (int i = 0; i < SIZE; i++) {
        data[i] = rand() % (MAX_VAL - MIN_VAL + 1) + MIN_VAL;
    }

    printf("Enter starting and ending index (0-%d): ", SIZE - 1);
    if (scanf("%d %d", &start, &end) != 2) {
        printf("Invalid input!\n");
        return 1;
    }

    if (start > end) {
        int temp = start; // swap
        start = end;
        end = temp;
    }

    printf("\nPartial Array Output:\n");
    pprint(data, start, end, SIZE);

    int sum = psum(data, start, end, SIZE);
    printf("\nSum from data[%d] to data[%d] is %d\n", start, end, sum);

    return 0;
}