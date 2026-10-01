#include <matrix.h>
#include <iostream>
#include <iomanip>



int **matrix_create(std::size_t rows, std::size_t cols) {
    if (rows == 0 || cols == 0) {
        return nullptr;
    }
    int** m = new int *[rows];
    for (std::size_t i = 0; i < rows; ++i) {
        m[i] = new int[cols]{};
    }
    return m;
}


void matrix_delete(int** m, std::size_t rows) {
    if (!m) return;
    for (std::size_t i = 0; i < rows; ++i) {
        delete[] m[i];
    }
    delete[] m;
}


void matrix_fill(int** m, std::size_t rows, std::size_t cols, int value) {
    if (!m || rows == 0 || cols == 0) {
        return;
    }
    for (std::size_t i = 0; i < rows; ++i) {
        for (std::size_t j = 0; j < cols; ++j) {
            m[i][j] = value;
        }
    }
}


void matrix_print(const int* const* m, std::size_t rows, std::size_t cols) {
    if (!m || rows == 0 || cols == 0) {
        std::cout << "Matrix is empty\n";
        return;
    }
    for (std::size_t i = 0; i < rows; ++i) {
        for (std::size_t j = 0; j < cols; ++j) {
            std::cout << std::setw(5) << std::left << m[i][j]; 
        }
        std::cout << "\n";
    }
    std::cout << "\n";
}

