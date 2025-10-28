// reverse an array in its place
#include <stdio.h>
void reverseArray(int arr[], int n) {
    int start = 0;
    int end = n - 1;
    while (start < end) {//here we using loop to now the position an size of element
        // Swap arr[start] and arr[end]
        int temp = arr[start];
        arr[start] = arr[end];
        arr[end] = temp;
        start++;
        end--;
    }
}
int main() {
    int arr[] = {1, 2, 3, 4, 5};
    int n = sizeof(arr) / sizeof(arr[0]);
    reverseArray(arr, n);
    printf("Reversed array ia : \n");
    for (int i = 0; i < n; i++) {
        printf("%d ", arr[i]);
    }
    return 0;
}
//output
//Reversed array ia :
//5 4 3 2 1
