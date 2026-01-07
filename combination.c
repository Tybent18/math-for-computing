#include <stdio.h>

// Use long long to handle bigger numbers
long long Factorial(int n) {
    if (n < 0) return -1; // invalid input
    long long result = 1;
    for (int i = 2; i <= n; i++) {
        result *= i;
    }
    return result;
}

long long Permutation(int n, int k) {
    if (n < 0 || k < 0 || k > n) return -1;
    long long result = 1;
    for (int i = 0; i < k; i++) {
        result *= (n - i);
    }
    return result;
}

long long Combination(int n, int k) {
    if (n < 0 || k < 0 || k > n) return -1;
    long long numerator = Permutation(n, k);
    long long denominator = Factorial(k);
    return numerator / denominator;
}

int main() {
    int n, k;

    printf("Enter n and k (n choose k): ");
    if (scanf("%d %d", &n, &k) != 2 || n < 0 || k < 0 || k > n) {
        printf("Invalid input!\n");
        return 1;
    }

    printf("C(%d, %d) = %lld\n", n, k, Combination(n, k));
    printf("P(%d, %d) = %lld\n", n, k, Permutation(n, k));

    return 0;
}