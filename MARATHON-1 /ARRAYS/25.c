#include <stdio.h>

int main() {
    char src[] = "Source";
    char dest[20];
    int i = 0;
    while (src[i] != '\0') {
        dest[i] = src[i];
        i++;
    }
    dest[i] = '\0';
    printf("Copied: %s\n", dest);
    return 0;
}
