//Count and say problem
#include <stdio.h>
#include <string.h>
#define maxlen 5000
void countnsay(int n, char result[]) {
    char current[maxlen] = "1";
    char next[maxlen];
    for (int i = 1; i < n; i++) {
        int pos = 0;
        int len = strlen(current);
        for (int j = 0; j < len; ) {
            char digit = current[j];
            int count = 1;
            while (j + 1 < len && current[j] == current[j + 1]) {
                count++;
                j++;
            }
            next[pos++] = count + '0';
            next[pos++] = digit;
            j++;
        }
        next[pos] = '\0';
        strcpy(current, next);
    }
    strcpy(result, current);
}

int main() {
    int n;
    char result[maxlen];
    printf("Enter n: ");
    scanf("%d", &n);
    countnsay(n, result);
    printf("Count and Say term %d: %s\n", n, result);
    return 0;
}