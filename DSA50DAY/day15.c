//Missing number in array [1 to n]
#include <stdio.h>
int missingnum(int arr[], int n) {
    int total = n * (n + 1) / 2; // Sum of first n natural numbers
    int sum = 0;
    for (int i = 0; i < n - 1; i++) {
        sum += arr[i];
    }
    return total - sum; // The missing number
}
int main() {
    int arr[] = {1, 2, 4, 5, 6};
    int n = sizeof(arr) / sizeof(arr[0]) + 1; // Since one number is missing
    int missnum = missingnum(arr, n);
    printf("The missing number is %d\n", missnum);
    return 0;
}
//output
//The missing number is 3
