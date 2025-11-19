//show how many digits in no. 
#include<stdio.h>
int main(){
    int n=11;
    int count =0;
    if (n==0){
        count=1;
    }
    while(n>0)
    {
        count++;
        n=n/10;
        
    }
    printf("%d",count);

    return 0;
}