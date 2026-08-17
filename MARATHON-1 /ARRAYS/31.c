#include <stdio.h>

int main() {
    char str[] = "Code123!";
    int alphabets = 0, digits = 0, special = 0, i = 0;
    while (str[i] != '\0') {
        if ((str[i] >= 'a' && str[i] <= 'z') || (str[i] >= 'A' && str[i] <= 'Z')) alphabets++;
        else if (str[i] >= '0' && str[i] <= '9') digits++;
        else special++;
        i++;
    }
    printf("Alphabets: %d, Digits: %d, Special: %d\n", alphabets, digits, special);
    return 0;
}
