
#include <stdio.h>
#include <string.h>
#define CHAR_RANGE 256  // Total number of ASCII characters
int isAnagram(const char *str1, const char *str2) {
    if (strlen(str1) != strlen(str2))
        return 0;  // Not anagrams if lengths differ
    int count[CHAR_RANGE] = {0};
    for (int i = 0; str1[i] != '\0'; i++) {
        count[(unsigned char)str1[i]]++;
        count[(unsigned char)str2[i]]--;
    }
    for (int i = 0; i < CHAR_RANGE; i++) {
        if (count[i] != 0)
            return 0;  // for false case
    }
    return 1;  // for true case
}
int main() {
    char str1[] = "triangle";
    char str2[] = "integral";
    if (isAnagram(str1, str2))
        printf("\"%s\" and \"%s\" are anagrams.\n", str1, str2);
    else
        printf("\"%s\" and \"%s\" are not anagrams.\n", str1, str2);
    return 0;
}