//rearrange array in alternating positive and negative numbers
#include <stdio.h>
void rearrange(int arr[], int n) {//function to rearrange array
    int temp[n];//temporary array to store rearranged elements
    int i = 0, j = 0;//i for positive index, j for negative index
    for (int k = 0; k < n; k++) {//traversing the original array
        if (arr[k] >= 0) {//if element is positive
            temp[i] = arr[k];//storing positive element at even index
            i += 2;//incrementing even index by 2
        } else {
            temp[j + 1] = arr[k];//storing negative element at odd index
            j += 2;//incrementing odd index by 2
        }
    }
    for (int k = 0; k < n; k++) {//copying rearranged elements back to original array
        arr[k] = temp[k];//updating original array
    }
}
int main() {
    int arr[] = {1, -2, 3, -4, 5, -6, -7, 8};//given array
    int n = sizeof(arr) / sizeof(arr[0]);//calculating size of array
    rearrange(arr, n);//rearranging the array
    printf("Rearranged array is: ");//printing rearranged array
    for (int i = 0; i < n; i++) {//traversing the rearranged array
        printf("%d ", arr[i]);//printing each element
    }
    printf("\n");
    return 0;//indicating successful execution
}
//output
//Rearranged array is: 1 -2 3 -4 5 -6 8 -7



