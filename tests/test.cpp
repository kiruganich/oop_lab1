#include <gtest/gtest.h>
#include "matrix.h"
#include "funcs.h"

TEST(MatrixOpsTest, CreateAndDelete) {
    int** m = matrix_create(2, 3);
    ASSERT_NE(m, nullptr);
    matrix_delete(m, 2);
}

TEST(MatrixOpsTest, CreateEmpty) {
    int** m = matrix_create(0, 0);
    EXPECT_EQ(m, nullptr);
    matrix_delete(m, 0);
}

TEST(MatrixOpsTest, CreateZeroRows) {
    int** m = matrix_create(0, 5);
    EXPECT_EQ(m, nullptr);
    matrix_delete(m, 0);
}

TEST(MatrixOpsTest, CreateZeroCols) {
    int** m = matrix_create(5, 0);
    EXPECT_EQ(m, nullptr);
    matrix_delete(m, 5);
}

TEST(MatrixOpsTest, FillValidMatrix) {
    int** m = matrix_create(2, 2);
    matrix_fill(m, 2, 2, 7);
    EXPECT_EQ(m[0][0], 7);
    EXPECT_EQ(m[1][1], 7);
    matrix_delete(m, 2);
}

TEST(MatrixOpsTest, FillNullMatrix) {
    matrix_fill(nullptr, 2, 2, 7);
    SUCCEED();
}

TEST(AlgorithmTest, RowSwapValid) {
    int** m = matrix_create(2, 2);
    m[0][0] = 1; m[0][1] = 2;
    m[1][0] = 3; m[1][1] = 4;
    
    matrix_row_swap(m, 2, 0, 1);
    
    EXPECT_EQ(m[0][0], 3);
    EXPECT_EQ(m[0][1], 4);
    EXPECT_EQ(m[1][0], 1);
    EXPECT_EQ(m[1][1], 2);
    matrix_delete(m, 2);
}

TEST(AlgorithmTest, RowSwapSameIndex) {
    int** m = matrix_create(2, 2);
    m[0][0] = 1; m[0][1] = 2;
    
    matrix_row_swap(m, 2, 0, 0);
    
    EXPECT_EQ(m[0][0], 1);
    EXPECT_EQ(m[0][1], 2);
    matrix_delete(m, 2);
}

TEST(AlgorithmTest, ColSwapValid) {
    int** m = matrix_create(2, 2);
    m[0][0] = 1; m[0][1] = 2;
    m[1][0] = 3; m[1][1] = 4;
    
    matrix_col_swap(m, 2, 0, 1);
    
    EXPECT_EQ(m[0][0], 2);
    EXPECT_EQ(m[0][1], 1);
    EXPECT_EQ(m[1][0], 4);
    EXPECT_EQ(m[1][1], 3);
    matrix_delete(m, 2);
}

TEST(AlgorithmTest, ColSwapNullptr) {
    matrix_col_swap(nullptr, 2, 0, 1);
    SUCCEED();
}