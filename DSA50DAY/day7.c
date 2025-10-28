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
