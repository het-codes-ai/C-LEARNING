#include <stdio.h>

int main() {
    char str[] = "HELLO 123";
    int i = 0;
    while (str[i] != '\0') {
        if (str[i] >= 'A' && str[i] <= 'Z') {
            str[i] = str[i] + 32;
        }
        i++;
    }
    printf("Lowercase: %s\n", str);
    return 0;
}
