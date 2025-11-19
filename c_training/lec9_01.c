#include<stdio.h>
int main(){
    for (int i=0;i<3;i++){
        for(int j=0;j<=i;j++){
            printf("%d",j);
        }
        printf("\n");
    }
}
// 0
// 01
// 012