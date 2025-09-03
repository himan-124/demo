//sum of digits
#include<stdio.h>
int main(){
    int n,sum=0;
    printf("Enter value of number(n): ");
    scanf("%d",&n);
    for (int i=1;i<=n;i++){
        sum=sum+i;

    }
    printf("%d\n",sum);
    return 0;
}