#include <stdio.h>
#include <stdbool.h>
bool searchMatrix(int** matrix, int matrixSize, int* matrixColSize, int target) {
    int m = matrixSize;
    int n = *matrixColSize;
    int left = 0, right = m * n - 1;
    while (left <= right) {
        int mid = left + (right - left) / 2;
        int row = mid / n;
        int col = mid % n;
        int val = matrix[row][col];
        if (val == target) {
            return true;
        } else if (val < target) {
            left = mid + 1;
        } else {
            right = mid - 1;
        }
    }
    return false;
}
int main() {
    int row1[] = {1, 3, 5, 7};
    int row2[] = {10, 11, 16, 20};
    int row3[] = {23, 30, 34, 60};
    int* matrix[] = {row1, row2, row3};
    int cols = 4;
    int target1 = 3;
    int target2 = 13;
    printf("Searching for %d: %s\n", target1,
           searchMatrix(matrix, 3, &cols, target1) ? "Found" : "Not Found");
    printf("Searching for %d: %s\n", target2,
           searchMatrix(matrix, 3, &cols, target2) ? "Found" : "Not Found");
    return 0;
}