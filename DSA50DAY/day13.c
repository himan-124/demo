//find all pairs with given sum in an array
#include <stdio.h>
void findPairs(int arr[], int n, int sum) {
    for (int i = 0; i < n; i++) {
        for (int j = i + 1; j < n; j++) {
            if (arr[i] + arr[j] == sum) {
                printf("(%d, %d)\n", arr[i], arr[j]);
            }
        }
    }
}
int main() {
    int arr[] = {1, 2, 3, 4, 5, 6, 7, 8, 9};
    int n = sizeof(arr) / sizeof(arr[0]);
    int sum = 10;
    printf("Pairs with sum %d are:\n", sum);
    findPairs(arr, n, sum);
    return 0;
}
//output
//Pairs with sum 10 are:
//(1, 9)
//(2, 8)
//(3, 7)
//(4, 6)
//(5, 5)