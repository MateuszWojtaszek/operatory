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
