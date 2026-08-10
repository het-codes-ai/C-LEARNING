#include <stdio.h>
#include <math.h>

int main() {
    long long binary;
    int decimal = 0, rem, base = 1;

    printf("Enter a binary number: ");
    scanf("%lld", &binary);

    long long temp = binary;
    while (temp > 0) {
        rem = temp % 10;
        decimal = decimal + rem * base;
        base = base * 2;
        temp = temp / 10;
    }

    printf("Decimal equivalent of %lld is: %d\n", binary, decimal);
    return 0;
}
