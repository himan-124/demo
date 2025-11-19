#include <stdio.h>
#include <string.h>
#define MAX_CHARS 256  // Total ASCII characters
int longestUniqueSubstring(char *str) {
    int n = strlen(str);
    int maxLen = 0;
    int start = 0;
    int lastIndex[MAX_CHARS];
    for (int i = 0; i < MAX_CHARS; i++)
        lastIndex[i] = -1;
    for (int end = 0; end < n; end++) {
        char currentChar = str[end];
        //If character was seen before, move start
        if (lastIndex[(int)currentChar] >= start)
            start = lastIndex[(int)currentChar] + 1;
        //It Update last seen index of current character
        lastIndex[(int)currentChar] = end;
        //It Update max length
        int windowLen = end - start + 1;
        if (windowLen > maxLen)
            maxLen = windowLen;
    }
    return maxLen;
}
int main() {
    char str[] = "abcabcbb";
    int length = longestUniqueSubstring(str);
    printf("Length of longest substring without repeating characters: %d\n", length);
    return 0;
}