#include <stdio.h>
#include <stdlib.h>
int maxHist(int row[], int n) {
    int max_area = 0;
    int *stack = (int*)malloc(n * sizeof(int));
    int top = -1;
    int i = 0;
    while (i < n) {
        if (top == -1 || row[stack[top]] <= row[i]) {
            stack[++top] = i++;
        } else {
            int height = row[stack[top--]];
            int width = (top == -1) ? i : i - stack[top] - 1;
            int area = height * width;
            if (area > max_area) max_area = area;
        }
    }
    while (top != -1) {
        int height = row[stack[top--]];
        int width = (top == -1) ? i : i - stack[top] - 1;
        int area = height * width;
        if (area > max_area) max_area = area;
    }
    free(stack);
    return max_area;
}
// Function to find largest rectangle of 1s in matrix
int maxRectangle(int M[][5], int R, int C) {
    int result = maxHist(M[0], C);
    for (int i = 1; i < R; i++) {
        for (int j = 0; j < C; j++) {
            if (M[i][j] == 1)
                M[i][j] += M[i - 1][j];
            else
                M[i][j] = 0;
        }
        int area = maxHist(M[i], C);
        if (area > result) result = area;
    }
    return result;
}
int main() {
    int M[4][5] = {
        {0, 1, 1, 0, 1},
        {1, 1, 1, 1, 0},
        {0, 1, 1, 1, 0},
        {1, 1, 1, 1, 1}
    };
    printf("Maximum rectangle of 1s = %d\n", maxRectangle(M, 4, 5));
    return 0;
}