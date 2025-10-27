//write a program to search an element in a sorted and rotated array

#include <stdio.h>      //including standard input output header file
int search(int arr[], int n, int key) {       //function to search an element in a sorted and rotated array
    int left = 0;        //initializing left pointer
    int right = n - 1;       //initializing right pointer
    while (left <= right) {         //using loop until left pointer is less than or equal to right pointer
        int mid = left + (right - left) / 2;    //calculating mid index
        if (arr[mid] == key) {   //if mid element is equal to key then we return mid index
            return mid;     //returning mid index
        }     //if mid element is not equal to key then we check which half is sorted
        if (arr[left] <= arr[mid]) {       //if left half is sorted
            if (key >= arr[left] && key < arr[mid]) {         //if key is in left half then we update right pointer
                right = mid - 1;           //updating right pointer
            } else {          //if key is in right half then we update left pointer
                left = mid + 1;              //updating left pointer
            }         //end of else
        } else {             //if right half is sorted
            if (key > arr[mid] && key <= arr[right]) {          //if key is in right half then we update left pointer
                left = mid + 1;             //updating left pointer
            } else {             //if key is in left half then we update right pointer
                right = mid - 1;            //updating right pointer
            }        //end of else
        }              //end of else
    }              //end of while loop
    return -1;            //if key is not found then we return -1
}              //end of search function
int main() {                //main function
    int arr[] = { 15, 18, 2, 3, 6, 12 };              //given sorted and rotated array
    int n = sizeof(arr) / sizeof(arr[0]);            //calculating size of array
    int key = 3;             //element to be searched
    int result = search(arr, n, key);        //calling search function
    if (result != -1) {             //if element is found then we print its index
        printf("Element found at index %d\n", result);            //printing index of found element
    } else {              //if element is not found then we print not found message
        printf("Element not found in the array\n");              //printing not found message
    }              //end of else
    return 0;                 //returning 0 to indicate successful execution
}                //end of main function

//output
//Element found at index 3
