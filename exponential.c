#include <stdio.h>
#include <math.h>

// Iterative factorial using double to avoid overflow quickly
double fact(int n) {
    double result = 1.0;
    for (int i = 2; i <= n; i++) {
        result *= i;
    }
    return result;
}

// Exponential approximation: e^x using series sum up to n terms
double exponent(double x, int n) {
    double sum = 1.0;   // first term is 1
    double term = 1.0;

    for (int i = 1; i <= n; i++) {
        term *= x / i;  // efficient: x^i / i! iteratively
        sum += term;
    }

    return sum;
}

int main() {
    int n;
    double x;

    printf("Enter number of terms (n) and x for e^x approximation:\n");
    if (scanf("%d %lf", &n, &x) != 2 || n < 0) {
        printf("Invalid input!\n");
        return 1;
    }

    double approx = exponent(x, n);
    double exact = exp(x);

    printf("Approximation (n=%d) = %.10lf\n", n, approx);
    printf("Exact e^%.2lf = %.10lf\n", x, exact);
    printf("Error = %.10lf\n", fabs(approx - exact));

    return 0;
}