//Search in a row-wise and column-wise sorted matrix 

#include <stdio.h>
int main() {
    int rows = 4, cols = 4;
    int mat[4][4] = {
        {10, 20, 30, 40},
        {15, 25, 35, 45},
        {27, 29, 37, 48},
        {32, 33, 39, 50}
    };
    int target;
    printf("Enter element to search: ");
    scanf("%d", &target);
    int i = 0;          //for first row
    int j = cols - 1;   //to start from last column
    while (i < rows && j >= 0) {
        if (mat[i][j] == target) {
            printf("Found %d at position (%d,%d)\n", target, i, j);
            return 0;
        }
        else if (mat[i][j] > target) {
            j--;  // moves left
        }
        else {
            i++;  // moves downward 
        }
    }
    printf("%d not found in matrix\n", target);
    return 0;
}