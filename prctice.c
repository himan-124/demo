/*
#include <math.h>
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <assert.h>
#include <limits.h>
#include <stdbool.h>

int main() {
    int a,b;
    char o;
    if(scanf("%d %d %c",&a,&b,0)!=3){
        return 1;
        
    }
    switch (o) {
            
        case '+':
            printf("%d\n",a+b);
            break;
            
        case '-':
            printf("%d\n",a-b);
            break;
        case '*':
            printf("%d\n",a*b);
            break;
        case '/':
            if (b==0){
                printf("INF\n");
            
            } else{
                printf("%d\n",a/b);
                
            }
            break;
        case '%':
            if (b==0){
                printf("INF\n");
                
            } else {
                printf("%d\n",a%b);
                
            }
            break;
        default :
            printf("NA\n");
            break;
            
    }
     Enter your code here. Read input from STDIN. Print output to STDOUT 
    return 0;
}
#include<stdio.h>
int main() {
    int n1,n2,n3;
    printf("%");
    scanf("%d,%d,%d",&n1,&n2,&n3);
    if (n1 > n2 && n1 > n3) {
        printf("%d\n",n1);
    } else if (n2 > n1 && n2 > n3) {
        printf("%d\n",n2);
    } else {
        printf("%d\n",n3);
    }
    //Enter your code here. Read input from STDIN. Print output to STDOUT 
    return 0;
}


//Addition of a number 

#include<iostream>
using namespace std;
void swap(int &x, int &y)
{
    int temp=x;
    x=y;
    y=temp;
}
int main()
{
    int x=25;
    int y=50;
    swap(x,y);
    cout << x << " " << y ;
}



Find the maximum and minimum element in an array in c
#include <stdio.h>
int main()
{
    int n, i;
    int max, min;
    printf("Enter the number of elements in the array: ");
    scanf("%d", &n);
    int arr[n];
    printf("Enter the elements of the array: ");
    for (i = 0; i < n; i++)
    {
        scanf("%d", &arr[i]);
    }
    max = arr[0];
    min = arr[0];
    for (i = 1; i < n; i++)
    {
        if (arr[i] > max)
        {
            max = arr[i];
        }
        if (arr[i] < min)
        {
            min = arr[i];
        }
    }
    printf("Maximum element is %d\n", max);
    printf("Minimum element is %d\n", min);
    return 0;
}

#include<stdio.h>
int main(){
    int arr[5]={1,2,3,4,5};
    int min;
    int max;
    max = arr[0];
    // min= arr[0];
    for (int i=0;i<5;i++){
        if (arr[i]>max){
            max=arr[i];

        } 
        else if (arr[i]<min){
            min=arr[i];

        }
       
       
    }
    printf("MAXIMUM NUMBER IN ARRAY : %d\n",max);
    printf("MINIMUM NUMBER IN ARRAY : %d",min);


#include <stdio.h>
void reverseArray(int arr[], int n) {
    int start = 0;
    int end = n - 1;
    while (start < end) {//here we using loop to now the position an size of element
        // Swap arr[start] and arr[end]
        int temp = arr[start];
        arr[start] = arr[end];
        arr[end] = temp;
        start++;
        end--;
    }
}
int main() {
    int arr[] = {1, 2, 3, 4, 5};
    int n = sizeof(arr) / sizeof(arr[0]);
    reverseArray(arr, n);
    printf("Reversed array ia : \n");
    for (int i = 0; i < n; i++) {
        printf("%d ", arr[i]);
    }
    return 0;
}


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


//sort an array of 0s,1s and 2s(dutch national flag problem)
#include <stdio.h>
void sort012(int arr[], int n) {
    int low = 0, mid = 0, high = n - 1;
    while (mid <= high) {
        switch (arr[mid]) {
            case 0:
                // Swap arr[low] and arr[mid]
                {
                    int temp = arr[low];
                    arr[low] = arr[mid];
                    arr[mid] = temp;
                }
                low++;
                mid++;
                break;
            case 1:
                mid++;
                break;
            case 2:
                // Swap arr[mid] and arr[high]
                {
                    int temp = arr[mid];
                    arr[mid] = arr[high];
                    arr[high] = temp;
                }
                high--;
                break;
        }
    }
}
int main() {
    int n;
    printf("Enter the number of elements in the array: ");
    scanf("%d", &n);
    int arr[n];
    printf("Enter the elements of the array: ");
    for (int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }
    sort012(arr, n);
    printf("Sorted array is: ");
    for (int i = 0; i < n; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");
    return 0;
}

//output
//Enter the number of elements in the array: 7
//Enter the elements of the array: 0 1 2 0 1 2 0
//Sorted array is: 0 0 0 1 1 2 2

//move all negative numbers to beginning and positive to end with constant space
#include <stdio.h>
void rearrange(int arr[], int n) {
    int j = 0; // index of the next negative element
    for (int i = 0; i < n; i++) {
        if (arr[i] < 0) {
            if (i != j) {
                // Swap arr[i] and arr[j]
                int temp = arr[i];
                arr[i] = arr[j];
                arr[j] = temp;
            }
            j++;
        }
    }
}
int main() {
    int n;
    printf("Enter the number of elements in the array: ");
    scanf("%d", &n);
    int arr[n];
    printf("Enter the elements of the array: ");
    for (int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }
    rearrange(arr, n);
    printf("Rearranged array is: ");
    for (int i = 0; i < n; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");
    return 0;
}



//output
//Enter the number of elements in the array: 8
//Enter the elements of the array: 1 -2 3 -4 5 -6 7 -8
//Rearranged array is: -2 -4 -6 -8 5 3 7 1



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




//Write a program to cyclically rotate an array by one
// like if arr[]={1,2,3,4,5} after rotation arr[]={5,1,2,3,4} then rotate and print array until 1st digit reaches to its original position



#include<stdio.h>
void rotationarray(int arr[],int n){
    int last=arr[n-1];
    for (int i=n-1;i>0;i--){
        arr[i]=arr[i-1];

    }
    arr[0]=last;
}
int main(){
    int arr[]={1,2,3,4,5};
    int n=sizeof(arr)/sizeof(arr[0]);
    int first=arr[0];
    do {
        rotationarray(arr,n);
        for (int i=0;i<n;i++){
            printf("%d ",arr[i]);
        }
        printf("\n\n");
    } while (arr[0]!=first);
    return 0;
}




//output
//5 1 2 3 4
//4 5 1 2 3
//3 4 5 1 2
//2 3 4 5 1
//1 2 3 4 5








//Kadane's Algorithm to find maximum subarray sum in an array

#include <stdio.h>
int main() {     //making main function
    int arr[]={1,-8,2,-2,3,-1,4,-9,5};    //giving array
    int n=sizeof(arr)/sizeof(arr[0]);    //calculating size of array
    int curr_sum=0;     //initializing current sum
    int max_sum=0;     //initializing maximum sum
    for (int i=0;i<n;i++){     //using loop for calculating sum
        curr_sum=curr_sum+arr[i];    //updating current sum by adding each element
        if (curr_sum<0){    //if current sum is less than 0 then we make it 0
            curr_sum=0;     //updating current sum
        }
        if (curr_sum>max_sum){    //if current sum is greater than maximum sum then we update maximum sum 
            max_sum=curr_sum;   //updating maximum sum
        }
    }
    printf("Maximum subarray sum is : %d",max_sum);   //printing maximum sum
    return 0;
}    //end of main function


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

//move all zeros to end of array

#include <stdio.h>
void moveZeros(int arr[], int n) {
    int count = 0; // Count of non-zero elements
    for (int i = 0; i < n; i++) {
        if (arr[i] != 0) {
            arr[count++] = arr[i]; // Move non-zero element to the front
        }
    }
    while (count < n) {
        arr[count++] = 0; // Fill remaining positions with zeros
    }
}
int main() {
    int arr[] = {5, 4, 0, 2, 0, 12};
    int n = sizeof(arr) / sizeof(arr[0]);
    moveZeros(arr, n);
    printf("Array after moving zeros to the end: ");
    for (int i = 0; i < n; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");
    return 0;
}
//output
//Array after moving zeros to the end: 5 4 2 12 0 0


//12. Count the number of occurrences of an element
#include <stdio.h>
int countOccurr(int arr[], int n, int k) {
    int c = 0; // Initialize count of occurrences
    for (int i = 0; i < n; i++) {
        if (arr[i] == k) {
            c++; // Increment count if element matches key
        }
    }
    return c; // Return the total count
}
int main() {
    int arr[] = {1, 2, 3, 2, 4, 2, 5};
    int n = sizeof(arr) / sizeof(arr[0]);
    int k = 2; // Element to count occurrences of
    int result = countOccurr(arr, n, k);
    printf("Element %d occurs %d times in the array %d .\n", k, result, arr[0]);
    return 0;
}

*/

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
