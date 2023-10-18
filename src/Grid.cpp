#include <iostream>
#include "../include/Grid.h"

void printSudoku(int grid[N][N]){
    for (int row=0;row <N;row++){
        for (int col=0;col <N;col++){
            std::cout<<grid[row][col]<<" ";
        }
        std::cout<< std::endl;
    }
}

bool isSafe(int grid[N][N], int row, int col, int num) {
    for (int i = 0; i < N; i++) {
        if (grid[row][i] == num || grid[i][col] == num) {
            return false;
        }
    }

    int startRow = row - row % 3;
    int startCol = col - col % 3;
    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 3; j++) {
            if (grid[i + startRow][j + startCol] == num) {
                return false;
            }
        }
    }

    return true;
}