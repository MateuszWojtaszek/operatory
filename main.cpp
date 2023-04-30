#include <iostream>
#include "Vector3d.h"
int main() {
    Vector3d v1(1);
    Vector3d v2(1,3);
    Vector3d v3(0,0,5);
    std::cout<<v1<<std::endl<<v2<<std::endl<<v3<<std::endl<<std::endl;
    v3 = v1 + v2 + v3;
    v1 = v1-v3;
    std::cout<<v1<<std::endl<<v2<<std::endl<<v3<<std::endl;
    return 0;
}
