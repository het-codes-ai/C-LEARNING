#include <stdio.h>

int main() {
    char str[] = "I love programming";
    int len = 0;
    while (str[len] != '\0') len++;
    char rev[50];
    int k = 0;
    int end = len;
    for (int i = len - 1; i >= -1; i--) {
        if (i == -1 || str[i] == ' ') {
            for (int j = i + 1; j < end; j++) {
                rev[k++] = str[j];
            }
            if (i != -1) rev[k++] = ' ';
            end = i;
        }
    }
    rev[k] = '\0';
    printf("Reversed words: %s\n", rev);
    return 0;
}
