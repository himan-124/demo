/*sum of digits
#include<stdio.h>
int main(){
    int n,sum=0;
    printf("Enter value of number(n): ");
    scanf("%d",&n);
    for (int i=0;i<n;i++){
        int d=n %10;
        sum=sum*10+d;
        n=n/10;
    }
    printf("%d\n",sum);
    return 0;
}