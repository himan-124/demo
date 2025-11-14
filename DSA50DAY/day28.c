#include <stdio.h>
#include <stdbool.h>
int myAtoi(const char *str) {
    int result = 0;
    int sign = 1;
    int i = 0;
    // It will Skip whitespace
    while (str[i] == ' ') i++;
    //It Handle signs
    if (str[i] == '-' || str[i] == '+') {
        sign = (str[i] == '-') ? -1 : 1;
        i++;
    }
    // now it will Convert into digits
    while (str[i] >= '0' && str[i] <= '9') {
        result = result * 10 + (str[i] - '0');
        i++;
    }
    return sign * result;
}
int main() {
    char str[] = "  -4567";
    int num = myAtoi(str);
    printf("Converted number: %d\n", num);
    return 0;
}