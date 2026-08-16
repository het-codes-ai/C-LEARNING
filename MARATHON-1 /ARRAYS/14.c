#include <stdio.h>

int main() {
    int A[2][2] = {{1, 2}, {3, 4}};
    int B[2][2] = {{1, 2}, {3, 4}};
    int equal = 1;

    for (int i = 0; i < 2; i++) {
        for (int j = 0; j < 2; j++) {
            if (A[i][j] != B[i][j]) {
                equal = 0;
                break;
            }
        }
    }

    if (equal) {
        printf("Matrices are equal\n");
    } else {
        printf("Matrices are not equal\n");
    }
    return 0;
}
