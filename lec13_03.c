//to find the missing element of array 
#include<stdio.h>
int main(){
int arr[6]={1,2,3,5,6,7};
int n=7; //one number is missing
int total_sum = n * (n+1) / 2 ; //formula for total sum of array
int arr_sum = 0;
for (int i =0;i<6;i++){
   // arr_sum=0;
    arr_sum+=arr[i];
}
int missing_number = total_sum - arr_sum ;
printf ("THE MISSING NUMBER IN GIVEN ARRAY IS %d\n",missing_number);
return 0;
}