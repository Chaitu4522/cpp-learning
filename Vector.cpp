#include "Vector.hpp"

double Vector::magnitude() const {
    return std::sqrt(x * x + y * y + z * z);
}

Vector Vector::normalize() const {
    double mag = magnitude();
    if (mag < 1e-20) return *this;
    return Vector(x / mag, y / mag, z / mag);
}

Vector Vector::operator+(const Vector& rhs) const {
    return Vector(x + rhs.x, y + rhs.y, z + rhs.z);
}

Vector Vector::operator-(const Vector& rhs) const {
    return Vector(x - rhs.x, y - rhs.y, z - rhs.z);
}

std::ostream& operator<<(std::ostream& os, const Vector& vec) {
    os << "(" << vec.x << ", " << vec.y << ", " << vec.z << ")";
    return os;
}
