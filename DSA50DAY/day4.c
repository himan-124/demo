//sort an array of 0s,1s and 2s(dutch national flag problem)
#include <stdio.h>
void sort012(int arr[], int n) {
    int low = 0, mid = 0, high = n - 1;
    while (mid <= high) {
        switch (arr[mid]) {
            case 0:
                // Swap arr[low] and arr[mid]
                {
                    int temp = arr[low];
                    arr[low] = arr[mid];
                    arr[mid] = temp;
                }
                low++;
                mid++;
                break;
            case 1:
                mid++;
                break;
            case 2:
                // Swap arr[mid] and arr[high]
                {
                    int temp = arr[mid];
                    arr[mid] = arr[high];
                    arr[high] = temp;
                }
                high--;
                break;
        }
    }
}
int main() {
    int n;
    printf("Enter the number of elements in the array: ");
    scanf("%d", &n);
    int arr[n];
    printf("Enter the elements of the array: ");
    for (int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }
    sort012(arr, n);
    printf("Sorted array is: ");
    for (int i = 0; i < n; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");
    return 0;
}
//output
//Enter the number of elements in the array: 8
//Enter the elements of the array: 2 0 1 2 1 0 0 1
//Sorted array is: 0 0 0 1 1 1 2 2
