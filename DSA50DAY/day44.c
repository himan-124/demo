#include <stdio.h>
void boundarywale(int m, int n, int mat[m][n]) {
      // Step 1: To make First row
    for (int i = 0; i < n; i++) {
        printf("%d ", mat[0][i]);
    }   // Step 2:To make Last column
    for (int i = 1; i < m; i++) {
        printf("%d ", mat[i][n - 1]);
    }  // Step 3: Last row (only if more than 1 row)
    if (m > 1) {
        for (int i = n - 2; i >= 0; i--) {
            printf("%d ", mat[m - 1][i]);
        }
    }  // Step 4: First column (only if more than 1 column)
    if (n > 1) {
        for (int i = m - 2; i > 0; i--) {
            printf("%d ", mat[i][0]);
        }
    }
}
int main() {
    int m, n;
    printf("Enter rows and columns: ");
    scanf("%d %d", &m, &n);
    int mat[m][n];
    printf("Enter matrix elements:\n");
    for (int i = 0; i < m; i++) {
        for (int j = 0; j < n; j++) {
            scanf("%d", &mat[i][j]);
        }
    }
    printf("Boundary Traversal: ");
    boundarywale(m, n, mat);
    return 0;
}