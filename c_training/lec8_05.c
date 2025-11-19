#include<stdio.h>
int main(){
    for (int i=0;i<3;i++){
        for(int j=3;j>i;j--){
            printf("*");
        }
        printf("\n");
    }
}
/* ***
   **
   *    */