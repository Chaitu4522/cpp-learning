#pragma once
#include <iostream>
#include <array>
#include <cmath>
#include <numeric>
#include <stdexcept>

template<int dim>
class Point {
    static_assert(dim >= 1 && dim <= 3, "Dim must be 1, 2, or 3.");
    std::array<double, dim> coordinates;

public:
    Point() { coordinates.fill(0.0); }
    Point(const std::array<double, dim>& arr) : coordinates(arr) {}

    const double& operator[](int i) const {
        if (i < 0 || i >= dim) throw std::out_of_range("Index out of bounds");
        return coordinates[i];
    }

    double& operator[](int i) {
        if (i < 0 || i >= dim) throw std::out_of_range("Index out of bounds");
        return coordinates[i];
    }

    double norm() const {
        double sum_sq = std::accumulate(coordinates.begin(), coordinates.end(), 0.0,
            [](double acc, double val) { return acc + val * val; });
        return std::sqrt(sum_sq);
    }

    friend std::ostream& operator<<(std::ostream& os, const Point<dim>& p) {
        os << "[";
        for (int i = 0; i < dim; ++i) {
            os << p[i];
            if (i != dim - 1) os << ", ";
        }
        os << "]";
        return os;
    }
};
