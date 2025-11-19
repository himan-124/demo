//move all zeros to end of array

#include <stdio.h>
void moveZeros(int arr[], int n) {
    int count = 0; // Count of non-zero elements
    for (int i = 0; i < n; i++) {
        if (arr[i] != 0) {
            arr[count++] = arr[i]; // Move non-zero element to the front
        }
    }
    while (count < n) {
        arr[count++] = 0; // Fill remaining positions with zeros
    }
}
int main() {
    int arr[] = {5, 4, 0, 2, 0, 12};
    int n = sizeof(arr) / sizeof(arr[0]);
    moveZeros(arr, n);
    printf("Array after moving zeros to the end: ");
    for (int i = 0; i < n; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");
    return 0;
}