<<<<<<< HEAD
#include<stdio.h>
int main(){
    for (int i=0;i<=3;i++){//condition check for 0 then for 1 then for 2and at the time of 3 the condition is flse
        for(int j=0;j<=3;j++){//condition check for the next line bole toh j row read krke condition apply krenge  
            if (i==0 || i==3 || j==0 || j==3){//if true toh * print hoga 
                printf("*");

            } else{//if condition is false toh space print hogi
                printf(" ");
            }
           // printf("*");
        }
         
        printf("\n");//next row pe jane ke liye
    }
}
/*


****
*  *
*  *
****
              

=======
#include<stdio.h>
int main(){
    for (int i=0;i<=3;i++){//condition check for 0 then for 1 then for 2and at the time of 3 the condition is flse
        for(int j=0;j<=3;j++){//condition check for the next line bole toh j row read krke condition apply krenge  
            if (i==0 || i==3 || j==0 || j==3){//if true toh * print hoga 
                printf("*");

            } else{//if condition is false toh space print hogi
                printf(" ");
            }
           // printf("*");
        }
         
        printf("\n");//next row pe jane ke liye
    }
}
/*


****
*  *
*  *
****
              

>>>>>>> eb207c606dedfca3e78d62b1dfcf3c223b3614fc
*/