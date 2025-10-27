//leaders in an array

#include <stdio.h>  //including standard input output header file
void findLeaders(int arr[], int n) {  //function to find leaders in an array
    int max_from_right = arr[n - 1];  //initializing maximum from right
    printf("Leaders in the array are: %d ", max_from_right);  //printing the rightmost element as it is always a leader]
    for (int i = n - 2; i >= 0; i--) {  //traversing the array from right to left
        if (arr[i] > max_from_right) {  //if current element is greater than maximum from right
            max_from_right = arr[i];  //updating maximum from right
            printf("%d ", max_from_right);  //printing the leader
        }  //end of if
    }  //end of for loop
}  //end of findLeaders function
int main() {  //main function
    int arr[] = {16, 17, 4, 3, 5, 2};  //given array
    int n = sizeof(arr) / sizeof(arr[0]);  //calculating size of array
    findLeaders(arr, n);  //calling findLeaders function
    return 0;  //returning 0 to indicate successful execution
}  //end of main function


//output
//Leaders in the array are: 2 5 17
