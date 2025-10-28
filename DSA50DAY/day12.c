//12. Count the number of occurrences of an element

#include <stdio.h>
int countOccurr(int arr[], int n, int k) {
    int c = 0;
    for (int i = 0; i < n; i++) {
        if (arr[i] == k) {
            c++;
        }
    }
    return c;
}
int main() {
    int arr[] = {1, 2, 3, 2, 4, 2, 5};
    int n = sizeof(arr) / sizeof(arr[0]);
    int k = 2;
    int result = countOccurr(arr, n, k);

    printf("Element %d occurs %d times in the array: [", k, result);
    for (int i = 0; i < n; i++) {
        printf("%d", arr[i]);
        if (i < n - 1) {
            printf(", ");
        }
    }
    printf("]\n");

    return 0;
}
