//checking prime number in function 
#include<stdio.h>
 int primecheck(){
    int n,isprime=1;//1 for true condition
    printf("enter the number to check: ");
    scanf("%d",&n);
   int num=n/2;
    for(int i=2;i<=num;i++){
        if(n%i==0){
            isprime=0;//0 for false condition
            break;
        }
        else{
            i++;
        }
    }
    if(isprime==0){
        printf("it is not a prime number");
    }
    else{
        printf("prime number");
    }
    return 0;
}


int main(){
    primecheck();

}
