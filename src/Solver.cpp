#include <iostream>
#include "../include/Grid.h"
#include "../include/Solver.h"

bool solveSudoku(int grid[N][N]){
    int row, col;
    bool isSolved = true;

    for (row = 0; row <N; row++){
        for (col=0;col<N;col++){
            if(grid[row][col] ==0){
                isSolved = false;
                break;
            }
        }
        if(!isSolved){
            break;
        }
    }
    if (isSolved){
        return true;
    }
    for (int num = 1; num <=9;num++){
        if(isSafe(grid, row,col, num)){
            grid[row][col] = num;

            if (solveSudoku(grid)){
                return true;
            }

            grid[row][col] =0;
        }

    }

    return false;
}