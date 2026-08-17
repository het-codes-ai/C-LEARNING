#include <stdio.h>

int main() {
    char str[] = "Hello world welcome to C";
    int words = 0, i = 0;
    while (str[i] != '\0') {
        if (str[i] != ' ' && (str[i+1] == ' ' || str[i+1] == '\0')) {
            words++;
        }
        i++;
    }
    printf("Words: %d\n", words);
    return 0;
}
