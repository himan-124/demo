//Group anagrams together
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#define MAX_WORDS 100
#define MAX_LEN 100
// Helper function to sort characters in a string
void sortString(char *str) {
    int len = strlen(str);
    for (int i = 0; i < len - 1; i++) {
        for (int j = i + 1; j < len; j++) {
            if (str[i] > str[j]) {
                char temp = str[i];
                str[i] = str[j];
                str[j] = temp;
            }
        }
    }
}
// Structure to hold a word and its sorted version
typedef struct {
    char original[MAX_LEN];
    char sorted[MAX_LEN];
} WordPair;
int main() {
    // Input words
    char *input[] = {"bat", "tab", "tap", "pat", "cat", "act", "atp"};
    int n = sizeof(input) / sizeof(input[0]);
    WordPair words[MAX_WORDS];
    // Fill the WordPair array
    for (int i = 0; i < n; i++) {
        strcpy(words[i].original, input[i]);
        strcpy(words[i].sorted, input[i]);
        sortString(words[i].sorted);
    }
    // Group and print anagrams
    int used[MAX_WORDS] = {0};
    for (int i = 0; i < n; i++) {
        if (used[i]) continue;
        printf("Group: ");
        printf("%s ", words[i].original);
        used[i] = 1;
        for (int j = i + 1; j < n; j++) {
            if (!used[j] && strcmp(words[i].sorted, words[j].sorted) == 0) {
                printf("%s ", words[j].original);
                used[j] = 1;
            }
        }
        printf("\n");
    }
    return 0;
}