#include <stdio.h>
#define ROW 5
#define COL 5 // Directions: up, down, left, right
int rowDir[] = {-1, 1, 0, 0};
int colDir[] = {0, 0, -1, 1}; // DFS to mark connected land
void dfs(int grid[ROW][COL], int r, int c) { // Boundary + water check
    if (r < 0 || c < 0 || r >= ROW || c >= COL || grid[r][c] == 0)
        return; // Mark current cell as visited
    grid[r][c] = 0; // Explore neighbors
    for (int i = 0; i < 4; i++) {
        dfs(grid, r + rowDir[i], c + colDir[i]);
    }
} // Count islands
int countIslands(int grid[ROW][COL]) {
    int islands = 0;
    for (int r = 0; r < ROW; r++) {
        for (int c = 0; c < COL; c++) {
            if (grid[r][c] == 1) {
                islands++;
                dfs(grid, r, c);
            }
        }
    }
    return islands;
}
int main() {
    int matrix[ROW][COL] = {
        {1, 1, 0, 0, 0},
        {1, 1, 0, 0, 1},
        {0, 0, 0, 1, 1},
        {0, 0, 0, 0, 0},
        {1, 0, 1, 0, 1}
    };
    printf("Number of islands: %d\n", countIslands(matrix));
    return 0;
}