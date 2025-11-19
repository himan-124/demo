#include<stdio.h>
int main(){
    int num=65;
    for(int i=0;i<5;i++){
        for(int j=0;j<5-i-1;j++){
            printf(" ");

        }
        for(int k=0;k<=i;k++){
            printf(" %c",num++);
        }
        printf("\n");
    }
}

/*
      A
     B C
    D E F
   G H I J
  K L M N O    */