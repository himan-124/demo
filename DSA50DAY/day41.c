#include <stdio.h>
#define ROW 4
#define COL 4
int main() {
    int matrix[ROW][COL] = {
        {1, 2, 3, 4},
        {5, 0, 7, 8},
        {9, 10, 11, 12},
        {13, 14, 15, 0}
    };
    int row[ROW] = {0};
    int col[COL] = {0};
    // Step 1:We will Mark rows and columns that contain 0
    for (int i = 0; i < ROW; i++) {
        for (int j = 0; j < COL; j++) {
            if (matrix[i][j] == 0) {
                row[i] = 1;
                col[j] = 1;
            }
        }
    }
    // Step 2:Now we update the matrix
    for (int i = 0; i < ROW; i++) {
        for (int j = 0; j < COL; j++) {
            if (row[i] == 1 || col[j] == 1) {
                matrix[i][j] = 0;
            }
        }
    }
    //now finally we print result
    printf("Updated Matrix:\n");
    for (int i = 0; i < ROW; i++) {
        for (int j = 0; j < COL; j++) {
            printf("%d ", matrix[i][j]);
        }
        printf("\n");
    }
    return 0;
}