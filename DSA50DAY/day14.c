//Subarray with given sum (Two pointer / Sliding window)
#include <stdio.h>
void SubarrSum(int arr[], int n, int targetSum) {
    int currSum = arr[0], start = 0;
    for (int end = 1; end <= n; end++) { // Shrink the window as long as currentSum is greater than targetSum
        while (currSum > targetSum && start < end - 1) {
            currSum -= arr[start];
            start++;
        }// Check if currentSum equals targetSum
        if (currSum == targetSum) {
            printf("Subarray with given sum %d found from index %d to %d\n", targetSum, start, end - 1);
            return;
        }// Add the next element to currentSum
        if (end < n) {
            currSum += arr[end];
        }
    }
    printf("No subarray with given sum %d found\n", targetSum);
}
int main() {
    int arr[] = {1, 2, 3, 7, 5};
    int n = sizeof(arr) / sizeof(arr[0]);
    int targetSum = 12;
    SubarrSum(arr, n, targetSum);
    return 0;
}
//output
//Subarray with given sum 12 found from index 1 to 3
