#include <stdio.h>
#include <string.h>
int main(){
char str[]="hello";
char target='e';
char newStr[100];
int j=0;
int ln=strlen(str);

for(int i=0;i<ln;i++){
    if(str[i]!=target){
        newStr[j]=str[i];
        j++;

    }

}

printf("%s",newStr);
int freq[256]={0};

for(int i=0;i<ln;i++){
freq[str[i]]++;

}
int fount=0;
for(int i =0;i<ln;i++){
    if(freq[str[i]]==1){
        printf("%c",str[i]);
        fount=1;
        break;
    }
}
if(fount==0){
    printf("No unique character found");
}
}
