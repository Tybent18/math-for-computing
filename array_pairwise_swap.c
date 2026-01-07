#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#define SIZE 10

// Function to swap two adjacent elements
void swap(int x[], int i, int size) {
    if (i < 0 || i >= size - 1) return; // prevent out-of-bounds
    int temp = x[i];
    x[i] = x[i + 1];
    x[i + 1] = temp;
}

int main() {
    int A[SIZE], B[SIZE];

    srand(time(NULL)); // seed random number generator

    // Initialize arrays
    printf("Original array:\n");
    for (int i = 0; i < SIZE; i++) {
        A[i] = rand() % 10; // random values 0-9
        B[i] = A[i];
        printf("%d ", A[i]);
    }
    printf("\n\n");

    // Pairwise swap in B
    for (int i = 0; i < SIZE - 1; i += 2) {
        swap(B, i, SIZE);
    }

    // Display swapped array
    printf("Pairwise swapped array:\n");
    for (int i = 0; i < SIZE; i++) {
        printf("%d ", B[i]);
    }
    printf("\n");

    return 0;
}