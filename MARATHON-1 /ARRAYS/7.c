#include <stdio.h>

int main() {
    int A[] = {1, 3, 5};
    int B[] = {2, 4, 6, 8};
    int sizeA = sizeof(A) / sizeof(A[0]);
    int sizeB = sizeof(B) / sizeof(B[0]);
    int C[sizeA + sizeB];

    for (int i = 0; i < sizeA; i++) {
        C[i] = A[i];
    }
    for (int i = 0; i < sizeB; i++) {
        C[sizeA + i] = B[i];
    }

    for (int i = 0; i < sizeA + sizeB; i++) {
        printf("%d ", C[i]);
    }
    printf("\n");
    return 0;
}
