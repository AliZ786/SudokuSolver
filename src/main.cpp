#include <iostream>
#include "../include/Grid.h"
#include "../include/Solver.h"

int main() {
    int grid[N][N];

    // Input the Sudoku grid manually
    std::cout << "Enter the Sudoku grid (use 0 for empty cells):\n";
    for (int row = 0; row < N; row++) {
        for (int col = 0; col < N; col++) {
            std::cin >> grid[row][col];
        }
    }

    if (solveSudoku(grid)) {
        std::cout << "Sudoku Solution:\n";
        printSudoku(grid);
    } else {
        std::cout << "No solution exists.\n";
    }

    return 0;
}
