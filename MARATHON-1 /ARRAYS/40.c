#include <stdio.h>

int main() {
    char str[] = "   hello world   ";
    int start = 0, end = 0, i = 0;
    while (str[start] == ' ' || str[start] == '\t') start++;
    while (str[i] != '\0') {
        if (str[i] != ' ' && str[i] != '\t') end = i;
        i++;
    }
    int k = 0;
    char trimmed[50];
    for (int j = start; j <= end; j++) {
        trimmed[k++] = str[j];
    }
    trimmed[k] = '\0';
    printf("Trimmed: '%s'\n", trimmed);
    return 0;
}
