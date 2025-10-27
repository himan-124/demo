//find the "Kth" maximum and minimum element of an array which is given "Kth"


#include <stdio.h>
#include <stdlib.h>//it is required for qsort function
int compare(const void *a, const void *b) {
    return (*(int *)a - *(int *)b);
}
int main() {
    int n, k;
    printf("Enter the number of elements in the array: ");
    scanf("%d", &n);
    int arr[n];
    printf("Enter the elements of the array: ");
    for (int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }
    printf("Enter the value of k: ");
    scanf("%d", &k);
    if (k > n || k <= 0) {
        printf("Invalid value of k\n");
        return 1;
    }
    qsort(arr, n, sizeof(int), compare);
    printf("The %dth smallest element is %d\n", k, arr[k - 1]);
    printf("The %dth largest element is %d\n", k, arr[n - k]);
    return 0;
}

//output
//Enter the number of elements in the array: 5
//Enter the elements of the array: 3 1 4 5 2
//Enter the value of k: 2
//The 2th smallest element is 2
//The 2th largest element is 4
