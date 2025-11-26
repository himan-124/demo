#include <stdio.h>
int main() {
    int n;
    printf("Enter size of square matrix: ");
    scanf("%d", &n);
    int a[n][n];
    //we can adjust the matrix according to us and this is for input matrix
    printf("Enter elements of the matrix:\n");
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            scanf("%d", &a[i][j]);
        }
    }
    //it will print the primary diagonal
    printf("Primary diagonal: ");
    for (int i = 0; i < n; i++) {
        printf("%d ", a[i][i]);
    }
    //it will for print secondary diagonal
    printf("\nSecondary diagonal: ");
    for (int i = 0; i < n; i++) {
        printf("%d ", a[i][n - i - 1]);
    }
    return 0;
}