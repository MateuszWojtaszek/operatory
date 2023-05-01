#include <iostream>
#include "Vector3d.h"
#include "Matrix.h"
int main() {
    Matrix matrix(2,2);
    double d1 = matrix(0,50);
    std::cout<<d1<<std::endl;
    return 0;
}
