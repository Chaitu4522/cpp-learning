#pragma once
#include <iostream>
#include <type_traits>

template<typename T>
class NumericPair {
    static_assert(std::is_arithmetic<T>::value, "Arithmetic type required.");
    T first, second;

public:
    NumericPair(const T& a, const T& b) : first(a), second(b) {}

    T sum() const { return first + second; }
    T average() const { return sum() / T(2); }

    void scale(const T& factor) {
        first *= factor;
        second *= factor;
    }

    void print() const {
        std::cout << "(" << first << ", " << second << ")" << std::endl;
    }
};
