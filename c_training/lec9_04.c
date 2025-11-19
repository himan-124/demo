#include<stdio.h>
int main(){
    int num=1;
    for (int i=0;i<3;i++){
        for(int j=0;j<=i;j++){
            printf("%d",num);
        }
        printf("\n");
    }
}

// 1
// 11
// 111