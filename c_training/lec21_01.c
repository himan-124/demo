//print data in string but leave duplicate characters
#include <stdio.h>
#include <string.h>
int main() {
    char name[]="HIMANSHU KUMAR ";
    int len = strlen(name);
    for(int i=0;i<len;i++){
        int flag=1;
        for(int j=0;j<i;j++){
            if(name[i] == name[j]){
                flag=0;
                break;
            }
        }
        if(flag==1){
            printf("%c",name[i]);
        }
    }
    return 0;
}
// output 
// HIMANSU KR