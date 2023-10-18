#ifndef GRID_H
#define GRID_H

const int N = 9;

void printSudoku(int grid[N][N]);
bool isSafe(int grid[N][N], int row, int col, int num);

#endif

