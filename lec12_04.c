//MAx and Min of Array
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
    printf("%d\n",max);
    printf("%d",min);
}