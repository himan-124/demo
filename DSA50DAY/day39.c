//Spiral traversal of a matrix
#include <stdio.h>
#define ROW 4
#define COL 4
void spiral(int matrix[ROW][COL], int row, int col) {
    int top = 0, bottom = row - 1;
    int left = 0, right = col - 1;
    while (top <= bottom && left <= right) {
        //it will Print top row
        for (int i = left; i <= right; i++) {
            printf("%d ", matrix[top][i]);
        }
        top++;
        // it will Print right column
        for (int i = top; i <= bottom; i++) {
            printf("%d ", matrix[i][right]);
        }
        right--;
        // it will Print bottom row (if still valid)
        if (top <= bottom) {
            for (int i = right; i >= left; i--) {
                printf("%d ", matrix[bottom][i]);
            }
            bottom--;
        }
        //it will Print left column (if still valid)
        if (left <= right) {
            for (int i = bottom; i >= top; i--) {
                printf("%d ", matrix[i][left]);
            }
            left++;
        }
    }
}

int main() {
    int matrix[ROW][COL] = {
        {1,  2,  3,  4},
        {5,  6,  7,  8},
        {9, 10, 11, 12},
        {13,14, 15, 16}
    };

    printf("Spiral Traversal of Matrix:\n");
    spiral(matrix, ROW, COL);

    return 0;
}