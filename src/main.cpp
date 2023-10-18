#include <iostream>
#include "../include/Grid.h"
#include "../include/Solver.h"

int main() {
    int grid[N][N];

    // Input the Sudoku grid manually
    std::cout << "Enter the Sudoku grid (use 0 for empty cells):\n";
    for (int row = 0; row < 9; row++) {
        for (int col = 0; col < 9; col++) {
            std::string input;
            std::cin >> input;

            if (input.length() != 1 || !isdigit(input[0])) {
                std::cerr << "Invalid input. Please enter a single digit or 0 for empty cells." << std::endl;
                return 1;
            }

            grid[row][col] = input[0] - '0';
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
