#include <stdio.h>

int main() {
    char str[] = "hello world";
    char ch = 'l';
    int first = -1, last = -1, i = 0;
    while (str[i] != '\0') {
        if (str[i] == ch) {
            if (first == -1) first = i;
            last = i;
        }
        i++;
    }
    printf("First: %d, Last: %d\n", first, last);
    return 0;
}
