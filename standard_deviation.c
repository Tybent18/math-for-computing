#include <stdio.h>
#include <math.h>

// Calculate standard deviation
double StandardDeviation(int a[], int n) {
    double sum = 0.0, mean, variance = 0.0;

    for (int i = 0; i < n; i++) {
        sum += a[i];
    }
    mean = sum / n;

    for (int i = 0; i < n; i++) {
        variance += (a[i] - mean) * (a[i] - mean);
    }

    variance /= n;  // Population standard deviation; use n-1 for sample
    return sqrt(variance);
}

int main() {
    int n;
    printf("Enter the number of elements: ");
    scanf("%d", &n);

    int a[n];  // C99 variable-length array
    printf("Enter %d numbers: ", n);
    for (int i = 0; i < n; i++) {
        scanf("%d", &a[i]);
    }

    double std = StandardDeviation(a, n);
    printf("The standard deviation is %.2lf\n", std);

    return 0;
}