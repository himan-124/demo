//fabonacci series 
#include<stdio.h>
int main(){
    int n=5,t1=0,t2=1,next;
    for(int i=0;i<=n;i++){
        
        printf("%d",t1);
        next =t1+t2;
        t1=t2;
        t2=next;
    }
    return 0;
}