//
// Created by Mateusz Wojtaszek on 30/04/2023.
//

#ifndef OPERATOR_OVERLOADING_MATRIX_H
#define OPERATOR_OVERLOADING_MATRIX_H


class Matrix {
    int row;
    int col;
    double **matrix;
public:
 explicit Matrix(int row=1, int col=1);
 double operator()(int row1, int col1) const;
};
#endif //OPERATOR_OVERLOADING_MATRIX_H
