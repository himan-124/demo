//count characters in a string and print number of their outcome (string taken by user as input)
#include<stdio.h>
#include<string.h>
int main()
{
    char str[100];
    int i, j, count;
    printf("Enter a string: ");
    fgets(str, sizeof(str), stdin);
    str[strcspn(str, "\n")] = 0; // Remove newline character if present

    int len = strlen(str);
    int visited[256] = {0}; // Array to keep track of visited characters

    printf("Character counts:\n");
    for(i = 0; i < len; i++) {
        if(visited[(unsigned char)str[i]] == 0) { // If character not counted yet
            count = 1;
            for(j = i + 1; j < len; j++) {
                if(str[i] == str[j]) {
                    count++;
                }
            }
            visited[(unsigned char)str[i]] = 1; // Mark character as counted
            printf("%c: %d\n", str[i], count);
        }
    }
    return 0;
}