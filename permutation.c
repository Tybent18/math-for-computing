#include <stdio.h>

// Iterative factorial using long long
long long Fact(int n) {
    if (n < 0) return -1; // invalid input
    long long result = 1;
    for (int i = 2; i <= n; i++) {
        result *= i;
    }
    return result;
}

long long Permutation(int n, int k) {
    if (n < 0 || k < 0 || k > n) return -1; // input validation
    long long result = 1;
    for (int i = 0; i < k; i++) {
        result *= (n - i);
    }
    return result;
}

int main() {
    int n, k;

    printf("Enter n (sample size) and k (number of selections): ");
    if (scanf("%d %d", &n, &k) != 2 || n < 0 || k < 0 || k > n) {
        printf("Invalid input!\n");
        return 1;
    }

    long long perm = Permutation(n, k);
    printf("The number of permutations is: %lld\n", perm);

    return 0;
}