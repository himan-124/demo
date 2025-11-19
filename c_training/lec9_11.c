#include<stdio.h>
int main(){
    int num=65;
    for(int i=1;i<=5;i++){
        for(int j=1;j<i;j++){
            printf(" ");

        }
        for(int j=5-i+1;j>0;j--){
            printf(" %c",num++);
        }
        printf("\n");
    }
}

/*
 A B C D E
  F G H I
   J K L
    M N
     O  */