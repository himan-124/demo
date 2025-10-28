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


//output
//Maximum subarray sum is : 9
