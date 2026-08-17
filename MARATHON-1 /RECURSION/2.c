#include <stdio.h>

void print1ToN(int n) {
    if (n <= 0) {
        return;
    }
    print1ToN(n - 1);
    printf("%d ", n);
}

int main() {
    int n = 5;
    print1ToN(n);
    printf("\n");
    return 0;
}
