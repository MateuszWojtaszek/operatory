//
// Created by Mateusz Wojtaszek on 30/04/2023.
//

#include "Matrix.h"


Matrix::Matrix(int row, int col):row(row),col(col) {
matrix = new double * [this->row];
    for (int i = 0; i < row; ++i) {
        matrix[i]= new double [this->col];
    }
    for (int j = 0; j < row; ++j) {
        for (int i = 0; i < col; ++i) {
            matrix[i][j]=i;
        }
    }
}

double Matrix::operator()(int row1, int col1) const {
    return matrix[row1][col1];
}

