<<<<<<< HEAD
//to find maximum sum of subarray of size k using sliding window technique
#include<stdio.h>
int main(){
    int arr[7]={1,2,3,5,6,5,4};
    int k = 3;
    int n=   sizeof(arr)/sizeof(arr[0]);
    int windowsum =0;
        for (int i=0;i<k;i++){
             windowsum=windowsum+arr[i];
    }
    int maxsum=windowsum;
    for(int j=k;j<n;j++){
        windowsum=windowsum+arr[j]-arr[j-k];
        if(windowsum>maxsum){
            maxsum=windowsum;

        }

    }
    printf("maximum num : %d",maxsum);
    return 0;
=======
//to find maximum sum of subarray of size k using sliding window technique
#include<stdio.h>
int main(){
    int arr[7]={1,2,3,5,6,5,4};
    int k = 3;
    int n=   sizeof(arr)/sizeof(arr[0]);
    int windowsum =0;
        for (int i=0;i<k;i++){
             windowsum=windowsum+arr[i];
    }
    int maxsum=windowsum;
    for(int j=k;j<n;j++){
        windowsum=windowsum+arr[j]-arr[j-k];
        if(windowsum>maxsum){
            maxsum=windowsum;

        }

    }
    printf("maximum num : %d",maxsum);
    return 0;
>>>>>>> eb207c606dedfca3e78d62b1dfcf3c223b3614fc
}