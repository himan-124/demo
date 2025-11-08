//checking the string is pallindrome or not 
#include <stdio.h>
#include <string.h>
#include <ctype.h>
int isPalindrome(char str[]) {
    int left = 0;
    int right = strlen(str) - 1;
    while (left < right) {
        // Skip non-alphanumeric characters
        while (!isalnum(str[left]) && left < right) left++;
        while (!isalnum(str[right]) && left < right) right--;
        // Compare characters ignoring case
        if (tolower(str[left]) != tolower(str[right]))
            return 0;
        left++;
        right--;
    }
    return 1;
}
int main() {
    char str[100];
    printf("Enter a string: ");
    fgets(str, sizeof(str), stdin);
    // Remove newline character if present
    str[strcspn(str, "\n")] = '\0';
    if (isPalindrome(str))
        printf("The string is a palindrome.\n");
    else
        printf("The string is not a palindrome.\n");
    return 0;
}