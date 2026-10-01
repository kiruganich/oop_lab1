#include "funcs.h"


void matrix_row_swap(int** m, std::size_t cols, std::size_t r1, std::size_t r2) {
    if (!m || cols == 0 || r1==r2) {
        return;
    }
    int* temp = m[r1];
    m[r1] = m[r2];
    m[r2] = temp;
}


void matrix_col_swap(int** m, std::size_t rows, std::size_t c1, std::size_t c2) {
    if(!m || rows == 0 || c1 == c2) {
        return;
    }
    for (std::size_t i = 0; i < rows; ++i) {
        int temp = m[i][c2];
        m[i][c2] = m[i][c1];
        m[i][c1] = temp;
    }
}
