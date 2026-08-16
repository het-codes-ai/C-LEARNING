#include <stdio.h>

int main() {
    int arr[] = {10, 25, 45, 60, 75, 90};
    int n = sizeof(arr) / sizeof(arr[0]);
    int target = 60;
    int index = -1;

    for (int i = 0; i < n; i++) {
        if (arr[i] == target) {
            index = i;
            break;
        }
    }

    if (index != -1) {
        printf("Element %d found at index %d\n", target, index);
    } else {
        printf("Element %d not found\n", target);
    }
    return 0;
}
