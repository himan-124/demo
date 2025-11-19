#include <stdio.h>
#include <string.h>
// Function to check if str1 is a subsequence of str2
int isSubsequence(char *str1, char *str2) {
    int i = 0, j = 0;
    int len1 = strlen(str1);
    int len2 = strlen(str2);
    while (i < len1 && j < len2) {
        if (str1[i] == str2[j])
            i++;
        j++;
    }
    return i == len1;
}
int main() {
    char str1[] = "abc";
    char str2[] = "aebdc";
    if (isSubsequence(str1, str2))
        printf("\"%s\" is a subsequence of \"%s\"\n", str1, str2);
    else
        printf("\"%s\" is NOT a subsequence of \"%s\"\n", str1, str2);
    return 0;
}