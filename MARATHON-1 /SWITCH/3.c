#include <stdio.h>

int main() {
    char ch;
    printf("Enter any alphabet: ");
    scanf(" %c", &ch);
    
    switch(ch) {
        case 'a': case 'e': case 'i': case 'o': case 'u':
        case 'A': case 'E': case 'I': case 'O': case 'U':
            printf("Vowel\n");
            break;
        default:
            if((ch >= 'a' && ch <= 'z') || (ch >= 'A' && ch <= 'Z')) {
                printf("Consonant\n");
            } else {
                printf("Not an alphabet\n");
            }
    }
    return 0;
}
