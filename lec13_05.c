//checking array is pallindrome or not
#include<stdio.h>
int main(){
    int arr[5]={1,2,3,2,1};
    int istrue=1;
    for (int i=0;i<5/2;i++){
         if (arr[i]!=arr[5-i-1]){
            istrue=0;
         }
    }
    if (istrue==1){
        printf("array is palindrome");
    } else 

        {
            printf("array is not palindrome");
        } 
    }
