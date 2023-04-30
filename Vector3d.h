//
// Created by Mateusz Wojtaszek on 30/04/2023.
//

#ifndef OPERATOR_OVERLOADING_VECTOR3D_H
#define OPERATOR_OVERLOADING_VECTOR3D_H
#include <iostream>
class Vector3d {
    double pos_x;
    double pos_y;
    double pos_z;
public:
    explicit Vector3d(double x=0, double y=0, double z=0);
    Vector3d operator+(const Vector3d& v) const;
    Vector3d operator-(const Vector3d& v) const;
    Vector3d operator*(const Vector3d& v) const;
    friend std::ostream & operator<<(std::ostream &stream,const Vector3d &v);
};

std::ostream & operator<<(std::ostream &stream,const Vector3d &v);


#endif //OPERATOR_OVERLOADING_VECTOR3D_H
