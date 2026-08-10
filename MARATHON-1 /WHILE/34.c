#include <stdio.h>

int main() {
    long long octal, binary = 0, place = 1;
    int rem;

    printf("Enter an octal number: ");
    scanf("%lld", &octal);

    while (octal > 0) {
        rem = octal % 10;
        int bin_digit = 0, b_place = 1;
        
        while (rem > 0) {
            bin_digit += (rem % 2) * b_place;
            rem /= 2;
            b_place *= 10;
        }
        
        binary += bin_digit * place;
        place *= 1000;
        octal /= 10;
    }

    printf("Binary number: %lld\n", binary);
    return 0;
}
