//Matrix multiplication
#include <stdio.h>
int main() {
    int m, n, p;
    // Input dimensions
    printf("Enter rows and columns of first matrix (m n): ");
    scanf("%d %d", &m, &n);
    printf("Enter columns of second matrix (p): ");
    scanf("%d", &p);  
    int A[m][n], B[n][p], C[m][p];
    // Input first matrix
    printf("Enter elements of first matrix:\n");
    for (int i = 0; i < m; i++) {
        for (int j = 0; j < n; j++) {
            scanf("%d", &A[i][j]);
        }
    }
    // Input second matrix
    printf("Enter elements of second matrix:\n");
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < p; j++) {
            scanf("%d", &B[i][j]);
        }
    }
    // Initialize result matrix
    for (int i = 0; i < m; i++) {
        for (int j = 0; j < p; j++) {
            C[i][j] = 0;
        }
    } 
    // Matrix multiplication
    for (int i = 0; i < m; i++) {
        for (int j = 0; j < p; j++) {
            for (int k = 0; k < n; k++) {
                C[i][j] += A[i][k] * B[k][j];
            }
        }
    } 
    // Print result
    printf("Resultant Matrix:\n");
    for (int i = 0; i < m; i++) {
        for (int j = 0; j < p; j++) {
            printf("%d ", C[i][j]);
        }
        printf("\n");
    }
    return 0;
}