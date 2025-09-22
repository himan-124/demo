#include <stdio.h>
int main(){
    int size=3;
    for (int i=size-1;i>=0;i--){
        for (int j=0;j<size-i-1;j++){
            printf(" ");
        }
        printf("*");
        for (int j=0;j<2*i-1;j++){
            printf(" ");
        }
        if (i>0){
            printf("*");

        }
        printf("\n");

    }
     for (int i=1;i<size;i++){
        for (int j=0;j<size-i-1;j++){
            printf(" ");

        }
        printf("*");
        for (int j=0;j<2*i-1;j++){
            printf(" ");
        }
        if (i>0){
            printf("*");
        }
        printf("\n");
     }
     return 0;
}

/*
  

 *   *
  * * 
   *
  * *
 *   *      
                                 
 
 */