#include <iostream>
#include "Vector3d.h"
int main() {
    Vector3d v1(1);
    Vector3d v2(1,3);
    Vector3d v3(0,0,5);
    v3=2*v1;
    v2=v2*2;
    std::cout<<v3<<std::endl<<v2<<std::endl;
    return 0;
}
