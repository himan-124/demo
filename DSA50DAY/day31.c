#include <stdio.h>
#include <stdlib.h>
int compress(char* chars, int charsSize) {
    int write = 0, read = 0;
    while (read < charsSize) {
        char currentChar = chars[read];
        int count = 0;
        // Count occurrences of the current character
        while (read < charsSize && chars[read] == currentChar) {
            read++;
            count++;
        }
        // Write the character
        chars[write++] = currentChar;
        // Write the count if greater than 1
        if (count > 1) {
            int digitsStart = write;
            while (count > 0) {
                chars[write++] = (count % 10) + '0';
                count /= 10;
            }
            // Reverse the digits to correct order
            for (int i = 0; i < (write - digitsStart) / 2; i++) {
                char temp = chars[digitsStart + i];
                chars[digitsStart + i] = chars[write - 1 - i];
                chars[write - 1 - i] = temp;
            }
        }
    }
    return write;
}
int main() {
    char chars[] = {'a','a','b','b','c','c','c'};
    int size = sizeof(chars) / sizeof(chars[0]);
    int newLength = compress(chars, size);
    printf("Compressed length: %d\n", newLength);
    printf("Compressed array: ");
    for (int i = 0; i < newLength; i++) {
        printf("%c ", chars[i]);
    }
    printf("\n");
    return 0;
}