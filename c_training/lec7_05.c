//fabonacci series usig taking input by user
#include<stdio.h>
int main(){
    int n,t1=0,t2=1,next;
    printf("Enter the number: ");
    scanf("%d",&n);
    for(int i=0;i<=n;i++){
        
        printf("%d\t",t1);
        next =t1+t2;
        t1=t2;
        t2=next;
    }
    return 0;
}