#include <stdio.h>

int main() {
    int decimal, temp;
    long long binary = 0;
    long long place = 1;

    printf("Enter a decimal number: ");
    scanf("%d", &decimal);

    temp = decimal;
    while (temp > 0) {
        int rem = temp % 2;
        binary = binary + (rem * place);
        place *= 10;
        temp /= 2;
    }

    printf("Binary equivalent of %d is: %lld\n", decimal, binary);

    return 0;
}
