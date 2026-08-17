#include <stdio.h>

int main() {
    char str[] = "abc test abc test abc";
    char sub[] = "abc";
    int n = 2;
    int i = 0, count = 0, pos = -1;
    while (str[i] != '\0') {
        int j = 0;
        while (str[i + j] == sub[j] && sub[j] != '\0') j++;
        if (sub[j] == '\0') {
            count++;
            if (count == n) {
                pos = i;
                break;
            }
        }
        i++;
    }
    printf("%d-th occurrence position: %d\n", n, pos);
    return 0;
}
