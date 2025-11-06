//Merge two sorted arrays in one array without using extra space 
//after showing sorted order like 
//First Array: 1 2 3 4 7
//Second Array: 8 9 10
//then print merged array: 1 2 3 4 7 8 9 10

#include <stdio.h>
void mergeSortedArrays(int arr1[], int n1, int arr2[], int n2) {
    int i = 0, j = 0, k = 0;
    int merged[n1 + n2]; // Create a new array to hold the merged result
    // Merge the two arrays
    while (i < n1 && j < n2) {
        if (arr1[i] < arr2[j]) {
            merged[k++] = arr1[i++];
        } else {
            merged[k++] = arr2[j++];
        }
    } // Copy remaining elements of arr1, if any
    while (i < n1) {
        merged[k++] = arr1[i++];
    } // Copy remaining elements of arr2, if any
    while (j < n2) {
        merged[k++] = arr2[j++];
    }// Print the merged array
    printf("Merged array: ");
    for (i = 0; i < n1 + n2; i++) {
        printf("%d ", merged[i]);
    }
    printf("\n");
}   
int main() {
    int arr1[] = {1, 3, 4, 7};
    int arr2[] = {2, 8, 9, 10};
    int n1 = sizeof(arr1) / sizeof(arr1[0]);
    int n2 = sizeof(arr2) / sizeof(arr2[0]);

    printf("First Array: ");
    for (int i = 0; i < n1; i++) {
        printf("%d ", arr1[i]);
    }
    printf("\n");

    printf("Second Array: ");
    for (int i = 0; i < n2; i++) {
        printf("%d ", arr2[i]);
    }
    printf("\n");

    mergeSortedArrays(arr1, n1, arr2, n2); // Call the function to merge and print arrays

    return 0;
}
//output
//First Array: 1 3 5 7
//Second Array: 2 4 6 8 9 10
//Merged array: 1 2 3 4 5 6 7 8 9 10