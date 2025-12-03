#include <stdio.h>
#define M 3
#define N 4
void modifyMatrix(int mat[M][N]) {
    int row[M] = {0};
    int col[N] = {0};
    // Step 1: Mark rows and columns that need to be updated
    for (int i = 0; i < M; i++) {
        for (int j = 0; j < N; j++) {
            if (mat[i][j] == 1) {
                row[i] = 1;
                col[j] = 1;
            }
        }
    }
    // Step 2:It will Update matrix
    for (int i = 0; i < M; i++) {
        for (int j = 0; j < N; j++) {
            if (row[i] == 1 || col[j] == 1) {
                mat[i][j] = 1;
            }
        }
    }
}
//It will print the matrix
void printMatrix(int mat[M][N]) {
    for (int i = 0; i < M; i++) {
        for (int j = 0; j < N; j++) {
            printf("%d ", mat[i][j]);
        }
        printf("\n");
    }
}
int main() {
    int mat[M][N] = {
        {1, 0, 0, 1},
        {0, 0, 1, 0},
        {0, 0, 0, 0}
    };
    printf("Original Matrix:\n");
    printMatrix(mat);
    modifyMatrix(mat);
    printf("\nModified Matrix:\n");
    printMatrix(mat);
    return 0;
}