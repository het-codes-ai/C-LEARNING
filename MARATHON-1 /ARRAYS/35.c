#include <stdio.h>

int main() {
    char str[] = "radar";
    int len = 0, flag = 1;
    while (str[len] != '\0') len++;
    for (int i = 0; i < len / 2; i++) {
        if (str[i] != str[len - 1 - i]) {
            flag = 0;
            break;
        }
    }
    if (flag) printf("Palindrome\n");
    else printf("Not Palindrome\n");
    return 0;
}
