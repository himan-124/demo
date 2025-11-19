//table of number
#include<stdio.h>

int main (){
    int n;
    printf("Enter value for n: ");
    scanf("%d",&n);
    for (int i=1;i<=10;i++){
        printf("%d*%d=%d\n",n,i,n*i);
    }
    return 0;
}
