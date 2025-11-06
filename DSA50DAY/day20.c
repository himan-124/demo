//Maximum Product Subarray
#include<stdio.h>
#include<math.h>
// Function to find the maximum product subarray
int maxProduct(int arr[], int n) {
    int maxending = arr[0];
    int minending = arr[0];
    int maxsofar = arr[0];
    for (int i = 1; i < n; i++) {
        int temp = maxending;
        maxending = fmax(arr[i], fmax(arr[i] * maxending, arr[i] * minending));
        minending = fmin(arr[i], fmin(arr[i] * temp, arr[i] * minending));
        if (maxending > maxsofar)
            maxsofar = maxending;
    }
    return maxsofar;
}
int main() {
    int arr[] = {2, 3, -2, 4, -1};
    int n = sizeof(arr) / sizeof(arr[0]);
    int result = maxProduct(arr, n);
    printf("Maximum product subarray is: %d\n", result);
    return 0;
}
