//check number of vowel and consonant and print them separate 
#include <stdio.h>
#include <string.h>
int main()
{
    char str[100];
    int i, vcount = 0, ccount = 0;
    printf("Enter a string: ");
    fgets(str, sizeof(str), stdin);
    for (i = 0; str[i] != '\0'; ++i) {
        if ((str[i] >= 'a' && str[i] <= 'z') || (str[i] >= 'A' && str[i] <= 'Z')) {
            switch (str[i]) {
                case 'a': case 'e': case 'i': case 'o': case 'u':
                case 'A': case 'E': case 'I': case 'O': case 'U':
                    vcount++;
                    break;
                default:
                    ccount++;
            }
        }
    }
    printf("Number of vowels: %d\n", vcount);
    printf("Number of consonants: %d\n", ccount);
    return 0;
}
//check number of vowel and consonant and print them separate
//Input: Enter a string: Hello World
//Output: Number of vowels: 3
//        Number of consonants: 7

