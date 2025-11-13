#include <stdio.h>
#include <string.h>
#define MAX_STRINGS 100
#define MAX_LENGTH 100
// Function to find the longest common prefix
char* commonprefix(char strs[][MAX_LENGTH], int strsSize) {
    static char prefix[MAX_LENGTH];  // Static so it persists after return
    if (strsSize == 0) return "";
    int i = 0;
    while (strs[0][i]) {
        char c = strs[0][i];
        for (int j = 1; j < strsSize; j++) {
            if (strs[j][i] != c || strs[j][i] == '\0') {
                prefix[i] = '\0';
                return prefix;
            }
        }
        prefix[i] = c;
        i++;
    }
    prefix[i] = '\0';
    return prefix;
}
int main() {
    char strs[][MAX_LENGTH] = {"flower", "flow", "flight"};
    int strsSize = sizeof(strs) / sizeof(strs[0]);

    char* result = commonprefix(strs, strsSize);
    printf("Longest Common Prefix: %s\n", result);

    return 0;
}