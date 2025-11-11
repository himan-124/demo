//Print all permutations of a string 
#include <stdio.h>
#include <string.h>
void swap(char *x, char *y) {
    char temp = *x;
    *x = *y;
    *y = temp;
}
void permute(char *str, int l, int r) {
    if (l == r)
        printf("%s\n", str);
    else {
        for (int i = l; i <= r; i++) {
            swap(&str[l], &str[i]);          // Swap current index with start
            permute(str, l + 1, r);          // Recurse for the rest
            swap(&str[l], &str[i]);          // Backtrack
        }
    }
}
int main() {
    char str[] = "ABC";
    int n = strlen(str);
    permute(str, 0, n - 1);
    return 0;
}