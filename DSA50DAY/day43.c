#include <stdio.h>

int main() {
    int row = 4, col = 4;
    int matrix[4][4] = {//inserted matrix
        {1, 2, 3, 4},
        {5, 6, 7, 8},
        {9, 10, 11, 12},
        {13, 14, 15, 16}
    };

    for (int i = 0; i < row; i++) {
        if (i % 2 == 0) {
            // For Left to Right
            for (int j = 0; j < col; j++) {
                printf("%d ", matrix[i][j]);
            }
        } else {
            //For Right to Left
            for (int j = col - 1; j >= 0; j--) {
                printf("%d ", matrix[i][j]);
            }
        }
        printf("\n");
    }

    return 0;
}