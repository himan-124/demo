//Check if a string is a rotation of another string
#include <stdio.h>
#include <string.h>
// Function to check if str2 is a rotation of str1
int isRotation(char *str1, char *str2) {
    int len1 = strlen(str1);
    int len2 = strlen(str2);
    // Lengths must be equal and non-zero
    if (len1 != len2 || len1 == 0)
        return 0;
    // Create a new string by concatenating str1 with itself
    char temp[2 * len1 + 1]; // +1 for null terminator
    strcpy(temp, str1);
    strcat(temp, str1);
    // Check if str2 is a substring of temp
    return strstr(temp, str2) != NULL;
}
int main() {
    char str1[] = "waterbottle";
    char str2[] = "erbottlewat";
    if (isRotation(str1, str2))
        printf("\"%s\" is a rotation of \"%s\"\n", str2, str1);
    else
        printf("\"%s\" is NOT a rotation of \"%s\"\n", str2, str1);
    return 0;
}