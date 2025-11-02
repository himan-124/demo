//Find duplicate number in array
#include <stdio.h>
int find(int arr[], int n) {
    int seen[n + 1]; // Create an auxiliary array to track seen numbers
    for (int i = 0; i <= n; i++) {
        seen[i] = 0; // Initialize all elements to 0
    }
    for (int i = 0; i < n; i++) {
        if (seen[arr[i]] == 1) {
            return arr[i]; // Duplicate found
        }
        seen[arr[i]] = 1; // Mark this number as seen
    }
    return -1; // No duplicate found
}
int main() {
    int arr[] = {1, 3, 4, 2, 2};
    int n = sizeof(arr) / sizeof(arr[0]);
    int duplicate = find(arr, n);
    if (duplicate != -1) {
        printf("The duplicate number is %d\n", duplicate);
    } else {
        printf("No duplicate number found\n");
    }
    return 0;
}
//output
//The duplicate number is 2
