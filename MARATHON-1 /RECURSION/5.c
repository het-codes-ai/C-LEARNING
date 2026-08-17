#include <stdio.h>

int power(int x, int y) {
    if (y == 0) {
        return 1;
    }
    return x * power(x, y - 1);
}

int main() {
    int x = 2, y = 3;
    printf("%d to the power %d is %d\n", x, y, power(x, y));
    return 0;
}
