#include<stdio.h>
int main(){
    int num=1;
    for(int i=0;i<5;i++){
        for(int j=0;j<5-i-1;j++){
            printf(" ");

        }
        for(int k=0;k<=i;k++){
            printf(" %d",num++);
        }
        printf("\n");
    }
}

/*
     1
    2 3
   4 5 6
  7 8 9 10
 11 12 13 14 15
*/