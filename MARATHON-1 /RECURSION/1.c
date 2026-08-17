#include <stdio.h>

void printHello(int n) {
    if (n <= 0) {
        return;
    }
    printf("Hello\n");
    printHello(n - 1);
}

int main() {
    int n = 5;
    printHello(n);
    return 0;
}
