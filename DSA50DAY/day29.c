//Implement strstr() (substring search) 


#include <stdio.h>
char *strstr_custom(const char *haystack, const char *needle) {
    if (!*needle) return (char *)haystack;  // Empty needle matches at start
    for (; *haystack; haystack++) {
        const char *j = haystack;
        const char *k = needle;

        while (*j && *k && *j == *k) {
            j++;
            k++;
        }
        if (!*k) return (char *)haystack;  // Full match found
    }
    return NULL;  // No match found
}
int main() {
    const char *text = "Hello, world!";
    const char *pattern = "world";
    char *result = strstr_custom(text, pattern);
    if (result)
        printf("Found at position: %ld\n", result - text);
    else
        printf("Not found.\n");
    return 0;
}