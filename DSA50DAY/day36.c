//Transpose of a matrix
#include <stdio.h>
int main() {
    int rows = 3, cols = 2;
    int matrix[3][2] = {
        {1, 2},
        {3, 4},
        {5, 6}
    };
    int transpose[2][3];
    // Transposing the matrix
    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < cols; j++) {
            transpose[j][i] = matrix[i][j];
        }
    }
    // Displaying the transposed matrix
    printf("Transposed Matrix:\n");
    for (int i = 0; i < cols; i++) {
        for (int j = 0; j < rows; j++) {
            printf("%d ", transpose[i][j]);
        }
        printf("\n");
    }
    return 0;
}