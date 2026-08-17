#include <stdio.h>

int main() {
    char str1[] = "apple";
    char str2[] = "apricot";
    int i = 0, flag = 0;
    while (str1[i] != '\0' || str2[i] != '\0') {
        if (str1[i] != str2[i]) {
            flag = str1[i] - str2[i];
            break;
        }
        i++;
    }
    printf("Comparison Result: %d\n", flag);
    return 0;
}
