#include <stdio.h>

int magic_number(int n) {
    if (n == 0) {
        return 0; // 0 is not a magic number
    }
    return n % 9 == 1;
}

int main() {
    int number;

    printf("Enter a number: ");
    scanf("%d", &number);
    
    // it will handle negative numbers by converting to positive
    if (number < 0) {
        number = -number;
    }

    if (magic_number(number)) {
        printf("%d is a magical number.\n", number);
    } else {
        printf("%d is not a magical number.\n", number);
    }

    return 0;
}
