//code to check string is pallindrome or not using for loop
#include <stdio.h>
#include <string.h>
int main() {
    char name[]="HIMANSHU";
    int len = strlen(name);
    int flag=1;
    for(int i=0;i<len/2;i++){
        if(name[i] != name[len-i-1]){
            flag=0;
            break;
        }
    }
    if(flag==1){
        printf("String is pallindrome");
    }else{
        printf("String is not pallindrome");
    }
    return 0;
}