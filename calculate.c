#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>

/* Function prototypes */
int calculateFactorial(int n);
int calculatePermutation(int n, int k);
int calculateCombination(int n, int k);
double calculateStandardDeviation(int count, int values[]);

int main(int argc, char *argv[]) {

    if (argc < 3) {
        printf("Usage:\n");
        printf("  Factorial n\n");
        printf("  Permutation n k\n");
        printf("  Combination n k\n");
        printf("  StdDev a b c ...\n");
        return 1;
    }

    if (strcmp(argv[1], "Factorial") == 0) {
        int x = atoi(argv[2]);
        printf("The factorial is %d\n", calculateFactorial(x));
    }
    else if (strcmp(argv[1], "Permutation") == 0 && argc >= 4) {
        int n = atoi(argv[2]);
        int k = atoi(argv[3]);
        printf("The number of permutations is %d\n",
               calculatePermutation(n, k));
    }
    else if (strcmp(argv[1], "Combination") == 0 && argc >= 4) {
        int n = atoi(argv[2]);
        int k = atoi(argv[3]);
        printf("The number of combinations is %d\n",
               calculateCombination(n, k));
    }
    else if (strcmp(argv[1], "StdDev") == 0) {
        int count = argc - 2;
        int values[count];

        for (int i = 0; i < count; i++) {
            values[i] = atoi(argv[i + 2]);
        }

        printf("Standard deviation is %.2f\n",
               calculateStandardDeviation(count, values));
    }
    else {
        printf("Invalid command\n");
        return 1;
    }

    return 0;
}

/* Math functions */

int calculateFactorial(int n) {
    if (n < 0) return 0;

    int result = 1;
    for (int i = 2; i <= n; i++) {
        result *= i;
    }
    return result;
}

int calculatePermutation(int n, int k) {
    if (k > n || k < 0) return 0;
    return calculateFactorial(n) / calculateFactorial(n - k);
}

int calculateCombination(int n, int k) {
    if (k > n || k < 0) return 0;
    return calculateFactorial(n) /
           (calculateFactorial(k) * calculateFactorial(n - k));
}

double calculateStandardDeviation(int count, int values[]) {
    double sum = 0.0;
    for (int i = 0; i < count; i++) {
        sum += values[i];
    }

    double mean = sum / count;
    double variance = 0.0;

    for (int i = 0; i < count; i++) {
        variance += pow(values[i] - mean, 2);
    }

    variance /= count;
    return sqrt(variance);
}