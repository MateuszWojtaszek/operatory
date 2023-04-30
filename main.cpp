#include <iostream>
#include "Vector3d.h"
int main() {
    Vector3d v1(1);
    Vector3d v2(1,3);
    Vector3d v3(0,0,5);
    std::cout<<"V1x ="<<v1[0]<<" "<<"V3z ="<<v3[2]<<std::endl;
    std::cout<<v2[10]<<std::endl;
    return 0;
}
