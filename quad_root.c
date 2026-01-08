#include <stdio.h>
#include <math.h>

// Function to compute and print roots (real or complex)
void findRoots(double a, double b, double c) {
    if (a == 0) {
        if (b == 0) {
            printf("Invalid equation (a and b cannot both be 0).\n");
        } else {
            // Linear case: bx + c = 0
            double root = -c / b;
            printf("Linear equation root: %.2lf\n", root);
        }
        return;
    }

    double discriminant = b*b - 4*a*c;

    printf("Equation: %.2lfx^2 + %.2lfx + %.2lf = 0\n", a, b, c);

    if (discriminant > 0) {
        // Two distinct real roots
        double sqrtDisc = sqrt(discriminant);
        double root1 = (-b + sqrtDisc) / (2*a);
        double root2 = (-b - sqrtDisc) / (2*a);
        printf("Two distinct real roots: %.2lf and %.2lf\n", root1, root2);
    } 
    else if (discriminant == 0) {
        // One real root (double root)
        double root = -b / (2*a);
        printf("One real double root: %.2lf\n", root);
    } 
    else {
        // Complex roots
        double realPart = -b / (2*a);
        double imagPart = sqrt(-discriminant) / (2*a);
        printf("Two complex roots: %.2lf + %.2lfi and %.2lf - %.2lfi\n",
               realPart, imagPart, realPart, imagPart);
    }
}

int main() {
    double a, b, c;

    printf("Enter coefficients a, b, c: ");
    if (scanf("%lf %lf %lf", &a, &b, &c) != 3) {
        printf("Invalid input.\n");
        return 1;
    }

    findRoots(a, b, c);

    return 0;
}