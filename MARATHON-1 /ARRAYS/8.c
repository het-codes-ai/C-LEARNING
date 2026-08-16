#include <stdio.h>

int main() {
    int arr[] = {12, 35, 40, 9, 8, 93, 16};
    int n = sizeof(arr) / sizeof(arr[0]);
    int even[n], odd[n];
    int e = 0, o = 0;

    for (int i = 0; i < n; i++) {
        if (arr[i] % 2 == 0) {
            even[e++] = arr[i];
        } else {
            odd[o++] = arr[i];
        }
    }

    printf("Even elements: ");
    for (int i = 0; i < e; i++) {
        printf("%d ", even[i]);
    }
    printf("\nOdd elements: ");
    for (int i = 0; i < o; i++) {
        printf("%d ", odd[i]);
    }
    printf("\n");
    return 0;
}
