//code to print string which is assgned to char array by string
#include <stdio.h>
int main() {
    char name[]="HIMANSHU";
    char data[20];
    int i=0;
    while(name[i] != '\0'){
        data[i]=name[i];
        i++;
    }
    data[i]='\0'; //to terminate the string
    printf("Copied string is : %s",data);
    
    return 0;
}
