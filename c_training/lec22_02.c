#include <stdio.h>
#include <string.h>
int main(){
char str[]="hello";
int count;
int ln= strlen(str);
for(int i=0;i<ln-1;i++){
        count=0;
    for(int j=0;j<ln;j++){
   
        if(  str[i]==str[j]){
            count++;
        }
    }        
   // if(count==0){
        printf("%c",str[i]);
        printf(":%d\n",count);
        
 }
} 