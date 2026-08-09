#include <stdio.h>

int main() {
    int num, reversed = 0, digits = 0;

    printf("Enter an integer: ");
    scanf("%d", &num);

    if (num < 0) {
        printf("Minus ");
        num = -num;
    }

    if (num == 0) {
        printf("Zero\n");
        return 0;
    }

    int temp = num;
    while (temp > 0) {
        reversed = (reversed * 10) + (temp % 10);
        temp /= 10;
        digits++;
    }

    while (digits > 0) {
        switch (reversed % 10) {
            case 0: printf("Zero "); break;
            case 1: printf("One "); break;
            case 2: printf("Two "); break;
            case 3: printf("Three "); break;
            case 4: printf("Four "); break;
            case 5: printf("Five "); break;
            case 6: printf("Six "); break;
            case 7: printf("Seven "); break;
            case 8: printf("Eight "); break;
            case 9: printf("Nine "); break;
        }
        reversed /= 10;
        digits--;
    }
    printf("\n");

    return 0;
}
