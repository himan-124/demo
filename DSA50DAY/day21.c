//reverse a string 
#include <stdio.h>
#include <string.h>
int main() {
    char str[100], temp;
    int i, j;
    printf("Enter a string: ");
    gets(str); // Note: unsafe, consider using fgets instead
    i = 0;
    j = strlen(str) - 1;
    while (i < j) {
        // Swap characters
        temp = str[i];
        str[i] = str[j];
        str[j] = temp;
        i++;
        j--;
    }
    printf("Reversed string: %s\n", str);
    return 0;
}