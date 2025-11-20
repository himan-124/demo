//to print string reverse using while loop
#include <stdio.h>
#include <string.h>
int main() {
    char name[]="HIMANSHU";
    int i=0;
    int len = strlen(name);
    while(i<len){
        printf("%c",name[len-i-1]);
        i++;
    }
    return 0;
}

