#include<stdio.h>
int main(){
    int num=1;
    for (int i=0;i<3;i++){
        for(int j=3;j>i;j--){
            printf(" ");
        }
        for(int k=0;k<=i;k++){
            printf("*");
        }
    for (int i=0;i<3;i++){
        for(int j=0;j<=i;j++){
            printf("*");
        }
        printf("\n");
    }
}
}

/*    **
   **
   ***
     ***
   **
   ***
    ****
   **
   ***   */