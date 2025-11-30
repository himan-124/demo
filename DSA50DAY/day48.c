#include <stdio.h>
#include <limits.h>

// Function to count elements <= mid in a row (binary search)
int countSmallerThanOrEqual(int row[], int n, int mid) {
    int l = 0, r = n - 1;
    while (l <= r) {
        int m = (l + r) / 2;
        if (row[m] <= mid)
            l = m + 1;
        else
            r = m - 1;
    }
    return l; // number of elements <= mid
}

// Function to find median in row-wise sorted matrix
int findMedian(int matrix[][3], int r, int c) {
    int min = INT_MAX, max = INT_MIN;

    // Find global min and max
    for (int i = 0; i < r; i++) {
        if (matrix[i][0] < min)
            min = matrix[i][0];
        if (matrix[i][c - 1] > max)
            max = matrix[i][c - 1];
    }

    int desired = (r * c + 1) / 2;

    while (min < max) {
        int mid = (min + max) / 2;
        int place = 0;

        // Count elements <= mid
        for (int i = 0; i < r; i++)
            place += countSmallerThanOrEqual(matrix[i], c, mid);

        if (place < desired)
            min = mid + 1;
        else
            max = mid;
    }
    return min;
}

int main() {
    // Example: 3x3 row-wise sorted matrix
    int matrix[3][3] = {
        {1, 3, 5},
        {2, 6, 9},
        {3, 6, 9}
    };

    printf("Median is %d\n", findMedian(matrix, 3, 3));
    return 0;
}