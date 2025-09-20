//sum of two numbers by using parameters and variable

#include<stdio.h>
 int sum(int b,int a){
    int c=a+b;
    return c;
    
 }


int main(){
    int a,b,result;
    
    printf("Enter number for a : ");
    scanf("%d",&a);
 
    printf("Enter number for b : ");
    scanf("%d",&b);
    result=sum(b,a);
    printf("result is : %d\n",result);
    return 0;
}