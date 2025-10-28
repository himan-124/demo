// writie a program to find union and intersection of two arrays 

#include <stdio.h>
#define MAX 100
void unionArrays(int arr1[], int n1, int arr2[], int n2, int result[], int *n3) {
    int i, j;
    *n3 = 0;
    for (i = 0; i < n1; i++) {
        result[(*n3)++] = arr1[i];
    }
    for (i = 0; i < n2; i++) {
        int found = 0;
        for (j = 0; j < n1; j++) {
            if (arr2[i] == arr1[j]) {
                found = 1;
                break;
            }
        }
        if (!found) {
            result[(*n3)++] = arr2[i];
        }
    }
}
void intersectionArrays(int arr1[], int n1, int arr2[], int n2, int result[], int *n3) {
    int i, j;
    *n3 = 0;
    for (i = 0; i < n1; i++) {
        for (j = 0; j < n2; j++) {
            if (arr1[i] == arr2[j]) {
                result[(*n3)++] = arr1[i];
                break;
            }
        }
    }
}
int main() {
    int arr1[MAX], arr2[MAX], result[MAX];
    int n1, n2, n3, i;
    printf("Enter number of elements in first array: ");
    scanf("%d", &n1);
    printf("Enter elements of first array: ");
    for (i = 0; i < n1; i++) {
        scanf("%d", &arr1[i]);
    }
    printf("Enter number of elements in second array: ");
    scanf("%d", &n2);
    printf("Enter elements of second array: ");
    for (i = 0; i < n2; i++) {
        scanf("%d", &arr2[i]);
    }
    unionArrays(arr1, n1, arr2, n2, result, &n3);
    printf("Union of the two arrays is: ");
    for (i = 0; i < n3; i++) {
        printf("%d ", result[i]);
    }
    printf("\n");
    intersectionArrays(arr1, n1, arr2, n2, result, &n3);
    printf("Intersection of the two arrays is: ");
    for (i = 0; i < n3; i++) {
        printf("%d ", result[i]);
    }
    printf("\n");
    return 0;
}
//output
//Enter number of elements in first array: 5
//Enter elements of first array: 1 2 3 4 5
//Enter number of elements in second array: 4
//Enter elements of second array: 4 5 6 7
//Union of the two arrays is: 1 2 3 4 5 6 7
//Intersection of the two arrays is: 4 5
