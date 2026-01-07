#include <stdio.h>

int main() {
    int x;

    printf("Enter a positive integer: ");
    if (scanf("%d", &x) != 1 || x <= 0) {
        printf("Invalid input! Please enter a positive integer.\n");
        return 1;
    }

    printf("Collatz sequence starting at %d:\n", x);
    printf("%d\n", x);

    while (x != 1) {
        if (x % 2 == 0) {
            x /= 2;
        } else {
            x = x * 3 + 1;
        }
        printf("%d\n", x);
    }

    return 0;
}