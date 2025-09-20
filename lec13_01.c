//to find maximum sum of subarray of size k using brute force
#include<stdio.h>
int main(){
    int arr[7]={1,2,3,4,-3,-5,5};
    int k = 3;
    int n=   sizeof(arr)/sizeof(arr[0]);
    int maxsum=0;
    int currsum=0;

    for(int i=0;i<=n-k;i++){
        currsum =0;
        for (int j=i;j<i+k;j++){
            currsum=currsum+arr[j];
            
        }
        if (currsum>maxsum){
            maxsum=currsum;
        }

    }
    printf("maxsubarr : %d",maxsum);
    return 0;
}

