#include <stdio.h>

int main() {
    long long num, temp;
    long long ones = 0, twos = 0;
    long long place = 1;

    printf("Enter binary number: ");
    scanf("%lld", &num);

    temp = num;
    while (temp > 0) {
        int rem = temp % 10;
        if (rem == 0) {
            ones = ones + (1 * place);
        } else {
            ones = ones + (0 * place);
        }
        place *= 10;
        temp /= 10;
    }
    printf("One's complement: %0*lld\n", (int)printf("%lld", num) - 4, ones);

    twos = ones;
    temp = twos;
    place = 1;
    int carry = 1;
    twos = 0;

    while (temp > 0 || carry > 0) {
        int rem = temp % 10;
        int sum = rem + carry;

        if (sum == 2) {
            twos = twos + (0 * place);
            carry = 1;
        } else if (sum == 1) {
            twos = twos + (1 * place);
            carry = 0;
        } else {
            twos = twos + (0 * place);
            carry = 0;
        }
        place *= 10;
        temp /= 10;
    }
    printf("Two's complement: %lld\n", twos);

    return 0;
}
