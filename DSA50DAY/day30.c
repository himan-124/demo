//Valid Palindrome after removing at most one character
#include <stdio.h>
#include <stdbool.h>
#include <string.h>// Helper function to check if a substring is a palindrome
bool isPalindrome(char *s, int left, int right) {
    while (left < right) {
        if (s[left] != s[right])
            return false;
        left++;
        right--;
    }
    return true;
}// Main function to check valid palindrome with at most one removal
bool validPalindrome(char *s) {
    int left = 0;
    int right = strlen(s) - 1;
    while (left < right) {
        if (s[left] != s[right]) { // Try skipping either left or right character
            return isPalindrome(s, left + 1, right) || isPalindrome(s, left, right - 1);
        }
        left++;
        right--;
    }
    return true;
}
int main() {
    char str[] = "abca";  // Example input
    if (validPalindrome(str))
        printf("Valid palindrome after at most one removal.\n");
    else
        printf("Not a valid palindrome.\n");
    return 0;
}