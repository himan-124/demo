#include <math.h>
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <assert.h>
#include <limits.h>
#include <stdbool.h>

int main() {
    int a,b;
    char o;
    if(scanf("%d %d %c",&a,&b,0)!=3){
        return 1;
        
    }
    switch (o) {
            
        case '+':
            printf("%d\n",a+b);
            break;
            
        case '-':
            printf("%d\n",a-b);
            break;
        case '*':
            printf("%d\n",a*b);
            break;
        case '/':
            if (b==0){
                printf("INF\n");
            
            } else{
                printf("%d\n",a/b);
                
            }
            break;
        case '%':
            if (b==0){
                printf("INF\n");
                
            } else {
                printf("%d\n",a%b);
                
            }
            break;
        default :
            printf("NA\n");
            break;
            
    }
     Enter your code here. Read input from STDIN. Print output to STDOUT */
    return 0;
}
#include<stdio.h>
int main() {
    int n1,n2,n3;
    printf("%");
    scanf("%d,%d,%d",&n1,&n2,&n3);
    if (n1 > n2 && n1 > n3) {
        printf("%d\n",n1);
    } else if (n2 > n1 && n2 > n3) {
        printf("%d\n",n2);
    } else {
        printf("%d\n",n3);
    }
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */
    return 0;
}