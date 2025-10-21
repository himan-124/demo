//count characters in a string and print number of their outcome (string given as input)

#include <stdio.h>
#include <string.h>

int main()
{
    char str[] = "maihuhimanshu";
    int freq[256] = {0};   
    int ln = strlen(str);

    for (int i = 0; i < ln; i++) {
        freq[str[i]]++; 
    }

    for (int i = 0; i < 256; i++) {
        if (freq[i] > 0) {
            printf("%c: %d\n", i, freq[i]);
        }
    }

    return 0;
}