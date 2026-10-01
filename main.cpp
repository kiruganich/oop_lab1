#include <iostream>
#include <limits>
#include "matrix.h"
#include "funcs.h"


void clear_input() {
    std::cin.clear();
    std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
}

int main() {
    int** matrix = nullptr;
    std::size_t curr_rows = 0;
    std::size_t curr_cols = 0;
    bool running = true;

    while (running) {
        std::cout << "1. Create matrix\n"
                 << "2. Fill with value\n"
                 << "3. Print matrix\n"
                 << "4. Swap rows/coloumns\n"
                 << "0. Exit\n"
                 << "Enter 0-4: ";
        int choice;
        if (!(std::cin >> choice)) {
            clear_input();
            std::cout << "Input error\n";
            continue;
        }

        switch (choice) {
            case 0: 
                running = false;
                break;

            case 1: {
                std::cout << "Enter the number of rows and coloumns:\n";
                std::size_t r, c;

                if (!(std::cin >> r >> c)) {
                    clear_input();
                    std::cout << "Input error\n";
                    break;
                }
                if (matrix) {
                    matrix_delete(matrix, curr_rows);
                    matrix = nullptr;
                }
                curr_rows = r;
                curr_cols = c;
                matrix = matrix_create(curr_rows, curr_cols);
                std::cout << "Matrix is created\n";
                break;
            }
            case 2: {
                std::cout << "Enter the value:";
                int val;
                if(!(std::cin >> val)) {
                    clear_input();
                    std::cout << "Input error\n";
                    break;
                }
                matrix_fill(matrix, curr_rows, curr_cols, val);
                std::cout << "Matrix is filled\n";
                break;
            }

            case 3: 
                matrix_print(matrix, curr_rows, curr_cols);
                break;

            case 4: {
                if (!matrix || curr_rows == 0 || curr_cols == 0) {
                    std::cout << "Matrix is empty\n";
                    break;
                }
                std::cout << "1. Swap the rows\n"
                          << "2. Swap the coloumns\n"
                          << "Enter 1-2:\n";

                int var;
                if (!(std::cin >> var)) {
                    clear_input();
                    std::cout << "Input error\n";
                    break;
                }

                if (var == 1) {
                    std::cout << "Enter the indexes 0-" << curr_rows - 1 << ":\n";
                    std::size_t r1, r2;
                    if (!(std::cin >> r1  >> r2) || r1 >= curr_rows || r2 >= curr_rows) {
                        clear_input();
                        std::cout << "Incorrect indexes\n";
                        break;
                    }
                    matrix_row_swap(matrix, curr_cols, r1, r2);
                    std::cout << "Rows are swapped\n";
                    break;
                } else if (var == 2) {
                    std::cout << "Enter the indexes 0-" << curr_cols - 1 << ":\n";
                    std::size_t c1, c2;
                    if (!(std::cin >> c1 >> c2) || c1 >= curr_cols || c2 >= curr_cols) {
                        clear_input();
                        std::cout << "Incorrect indexes\n";
                        break;
                    }
                    matrix_col_swap(matrix, curr_rows, c1, c2);
                    std::cout << "Coloumns are swapped\n";
                }
                break;
            }
            default: 
                std::cout << "Unknown command\n";
                break;
        }
    }
    if (matrix) {
        matrix_delete(matrix, curr_rows);
        matrix = nullptr;
    }

    return 0;
}