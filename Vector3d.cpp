//
// Created by Mateusz Wojtaszek on 30/04/2023.
//

#include "Vector3d.h"

Vector3d::Vector3d(double x, double y, double z) : pos_x(x), pos_y(y), pos_z(z) {

}

Vector3d Vector3d::operator+(const Vector3d &v) const {
    Vector3d tmp_v;
    tmp_v.pos_x = this->pos_x + v.pos_x;
    tmp_v.pos_y = pos_y + v.pos_y;
    tmp_v.pos_z = pos_z + v.pos_z;
    return tmp_v;
}

Vector3d Vector3d::operator-(const Vector3d &v) const {
    Vector3d tmp_v;
    tmp_v.pos_x = pos_x - v.pos_x;
    tmp_v.pos_y = pos_y - v.pos_y;
    tmp_v.pos_z = pos_z - v.pos_z;
    return  tmp_v;
}

std::ostream &operator<<(std::ostream &stream, const Vector3d &v) {
    stream << "pos_x: "<<v.pos_x<<" "<<"pos_y: "<<v.pos_y<<" "<<"pos_z: "<<v.pos_z<<" ";
    return stream;
}

Vector3d Vector3d::operator*(const Vector3d &v) const {
   //v2*v3=  | i,  j,  k|
   //        |a2, b2, c2|
   //        |a3, b3, c3| (b2*c3-b3*c2, -(a2*c3 - a3*c2),(a2*b3 - a3*b2)
    Vector3d tmp_v;
    tmp_v.pos_x=(this->pos_y*v.pos_z)-(v.pos_y*this->pos_z);
    tmp_v.pos_y=-((pos_x*v.pos_z)-(v.pos_x*pos_z));
    tmp_v.pos_z=(pos_x*v.pos_y)-(v.pos_x*pos_y);
    return  tmp_v;
}

Vector3d operator*(const Vector3d &v, double val) {
    return Vector3d(v.pos_x*val,v.pos_y*val,v.pos_z*val);
}

Vector3d operator*(double val, const Vector3d &v) {
    return Vector3d(v.pos_x*val,v.pos_y*val,v.pos_z*val);
}


