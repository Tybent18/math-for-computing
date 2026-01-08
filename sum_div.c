#include <stdio.h>

#define SIZE 7

// Compute sum of integers from a to b (inclusive)
int computesum(int a, int b) {
    int sum = 0;
    if (a > b) { // swap if a > b
        int temp = a;
        a = b;
        b = temp;
    }
    for (int i = a; i <= b; i++) {
        sum += i;
    }
    return sum;
}

// Check if x is divisible by y
int divisible(int x, int y) {
    return x % y == 0;
}

// Count how many elements in array are divisible by k
int count(int data[], int n, int k) {
    int total = 0;
    for (int i = 0; i < n; i++) {
        total += divisible(data[i], k);
    }
    return total;
}

int main() {
    int data[SIZE];
    int divisor, a, b;

    printf("Enter %d numbers for the dataset:\n", SIZE);
    for (int i = 0; i < SIZE; i++) {
        scanf("%d", &data[i]);
    }

    printf("Enter the divisor: ");
    scanf("%d", &divisor);

    printf("%d elements are divisible by %d\n", count(data, SIZE, divisor), divisor);

    printf("Enter the range for sum (a b): ");
    scanf("%d %d", &a, &b);

    printf("The sum from %d to %d is %d\n", a, b, computesum(a, b));

    return 0;
}