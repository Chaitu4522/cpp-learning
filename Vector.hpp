#pragma once
#include <iostream>
#include <cmath>

class Vector {
    double x = 0.0, y = 0.0, z = 0.0;

public:
    Vector() = default;
    explicit Vector(double x_, double y_, double z_) : x(x_), y(y_), z(z_) {}

    double magnitude() const;
    Vector normalize() const;
    Vector operator+(const Vector& rhs) const;
    Vector operator-(const Vector& rhs) const;

    friend std::ostream& operator<<(std::ostream& os, const Vector& vec);
};
