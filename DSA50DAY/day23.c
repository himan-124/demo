#include <stdio.h>
#include <string.h>
void removedummy(char *str) {
    int seen[256] = {0};  // it is here for ASCII characters 
    int index = 0;
    for (int i = 0; str[i] != '\0'; i++) {
        unsigned char ch = str[i];
        if (seen[ch] == 0) {
            seen[ch] = 1;
            str[index++] = ch;
        }
    }
    str[index] = '\0';  // to terminate the result
}
int main() {
    char str[] =" engineer";
    removedummy(str);
    printf("String after removing duplicates characters: %s\n", str);
    return 0;
}