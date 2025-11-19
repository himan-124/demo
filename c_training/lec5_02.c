//even number
#include <stdio.h>

int main(){
    int i;
    printf("Even or Odd check for numbers 1to 10 : \n");
    for (i=1;i<=10;i++){
        if (i%2==0)
            printf("%d is EVEN\n",i);
        else 
            printf("%d is ODD\n",i);
    }
    return 0;
}