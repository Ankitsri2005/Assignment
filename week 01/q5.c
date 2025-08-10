/*Rotate array by one*/

#include <stdio.h>

void rotateArray(int arr[], int n) {
    int last = arr[n - 1];
    for (int i = n - 1; i > 0; i--) {
        arr[i] = arr[i - 1];
    }
    arr[0] = last;
}

int main() {
    int n, arr[100];

    printf("Enter the number of elements: ");
    scanf("%d", &n);

    printf("Enter %d elements:\n", n);
    for (int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    rotateArray(arr, n);

    printf("New array:\n");
    for (int i = 0; i < n; i++) {
        printf("%d ", arr[i]);  
    }

    return 0;
}
