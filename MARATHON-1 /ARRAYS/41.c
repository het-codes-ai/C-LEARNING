#include <stdio.h>

int main() {
    char str[] = "Hello   world   from    C";
    char res[50];
    int i = 0, j = 0;
    while (str[i] != '\0') {
        if (!(str[i] == ' ' && str[i + 1] == ' ')) {
            res[j++] = str[i];
        }
        i++;
    }
    res[j] = '\0';
    printf("Result: %s\n", res);
    return 0;
}
