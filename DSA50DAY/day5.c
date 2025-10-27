//move all negative numbers to beginning and positive to end with constant space
#include <stdio.h>
void rearrange(int arr[], int n) {
    int j = 0; // index of the next negative element
    for (int i = 0; i < n; i++) {
        if (arr[i] < 0) {
            if (i != j) {
                // Swap arr[i] and arr[j]
                int temp = arr[i];
                arr[i] = arr[j];
                arr[j] = temp;
            }
            j++;
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
    rearrange(arr, n);
    printf("Rearranged array is: ");
    for (int i = 0; i < n; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");
    return 0;
}
//output
//Enter the number of elements in the array: 7
//Enter the elements of the array: 12 -7 -5 3 -1 9 -4
//Rearranged array is: -7 -5 -1 -4 12 3 9
