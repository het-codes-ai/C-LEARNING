#include <stdio.h>

int main() {
    char str[] = "apple";
    char oldCh = 'p', newCh = 'x';
    int i = 0;
    while (str[i] != '\0') {
        if (str[i] == oldCh) {
            str[i] = newCh;
        }
        i++;
    }
    printf("Replaced: %s\n", str);
    return 0;
}
