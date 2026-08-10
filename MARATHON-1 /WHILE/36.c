#include <stdio.h>

int main() {
    long long binary, octal = 0, place = 1;
    int rem;

    printf("Enter a binary number: ");
    scanf("%lld", &binary);

    while (binary > 0) {
        rem = binary % 1000;
        int oct_digit = 0, base = 1;
        
        while (rem > 0) {
            oct_digit += (rem % 10) * base;
            rem /= 10;
            base *= 2;
        }
        
        octal += oct_digit * place;
        place *= 10;
        binary /= 1000;
    }

    printf("Octal number: %lld\n", octal);
    return 0;
}
