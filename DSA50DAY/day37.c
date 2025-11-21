#include <stdio.h>
#define N 3  // Change size as needed
void rotate90Clockwise(int mat[N][N]) {
    // Step 1: Transpose the matrix
    for (int i = 0; i < N; i++) {
        for (int j = i; j < N; j++) {
            int temp = mat[i][j];
            mat[i][j] = mat[j][i];
            mat[j][i] = temp;
        }
    }
    // Now Step 2: Reverse each row
    for (int i = 0; i < N; i++) {
        for (int j = 0; j < N / 2; j++) {
            int temp = mat[i][j];
            mat[i][j] = mat[i][N - j - 1];
            mat[i][N - j - 1] = temp;
        }
    }
}
void printMatrix(int mat[N][N]) {
    for (int i = 0; i < N; i++) {
        for (int j = 0; j < N; j++) {
            printf("%d ", mat[i][j]);
        }
        printf("\n");
    }
}
int main() {
    int mat[N][N] = {
        {1, 2, 3},
        {4, 5, 6},
        {7, 8, 9}
    };

    printf("Original Matrix:\n");
    printMatrix(mat);
    rotate90Clockwise(mat);
    printf("\nRotated Matrix (90 degrees clockwise):\n");
    printMatrix(mat);

    return 0;
}