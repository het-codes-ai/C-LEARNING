#include <stdio.h>

void printHex(int decimal) {
    if (decimal == 0) {
        return;
    }
    int rem = decimal % 16;
    printHex(decimal / 16);
    if (rem < 10) {
        printf("%c", rem + '0');
    } else {
        printf("%c", rem - 10 + 'A');
    }
}

int main() {
    long long binary;
    int decimal = 0, base = 1, rem;

    printf("Enter a binary number: ");
    scanf("%lld", &binary);

    if (binary == 0) {
        printf("Hexadecimal number: 0\n");
        return 0;
    }

    while (binary > 0) {
        rem = binary % 10;
        decimal = decimal + rem * base;
        binary = binary / 10;
        base = base * 2;
    }

    printf("Hexadecimal number: ");
    printHex(decimal);
    printf("\n");

    return 0;
}
