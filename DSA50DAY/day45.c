#include <stdio.h>
int nCr(int n, int r) {
    if (r > n - r) 
        r = n - r;  // Use symmetry property
    int result = 1;
    for (int i = 0; i < r; i++) {
        result *= (n - i);
        result /= (i + 1);
    }
    return result;
}// Function to print Pascal's Triangle
void printPascal(int rows) {
    for (int i = 0; i < rows; i++) {// Print spaces for alignment
        for (int space = 0; space < rows - i - 1; space++) {
            printf("  ");
        }// Print row elements
        for (int j = 0; j <= i; j++) {
            printf("%4d", nCr(i, j));
        }
        printf("\n");
    }
}
int main() {
    int rows;
    printf("Enter number of rows: ");
    scanf("%d", &rows);
    printPascal(rows);
    return 0;
}