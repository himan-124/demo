//break
#include<stdio.h>
int main(){
    for (int i=0;i<5;i++){
        if (i==3){
            break;
        }
        printf("%d",i);
    }
    return 0;
}