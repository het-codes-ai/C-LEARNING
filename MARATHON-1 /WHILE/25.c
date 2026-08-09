#include <stdio.h>

int main() {
    double base, result = 1.0;
    int exponent, exp;

    printf("Enter base: ");
    scanf("%lf", &base);
    printf("Enter exponent: ");
    scanf("%d", &exponent);

    exp = (exponent < 0) ? -exponent : exponent;

    for (int i = 0; i < exp; i++) {
        result *= base;
    }

    if (exponent < 0) {
        result = 1.0 / result;
    }

    printf("Result: %.2lf\n", result);

    return 0;
}
