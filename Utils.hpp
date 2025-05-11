#pragma once
#include <type_traits>

template<typename T>
T min_value(T a, T b) {
    static_assert(std::is_arithmetic<T>::value, "Arithmetic type required.");
    return (a < b) ? a : b;
}

template<typename T>
T max_value(T a, T b) {
    static_assert(std::is_arithmetic<T>::value, "Arithmetic type required.");
    return (a > b) ? a : b;
}

template<typename T>
T clamp(T x, T lower, T upper) {
    static_assert(std::is_arithmetic<T>::value, "Arithmetic type required.");
    if (x < lower) return lower;
    if (x > upper) return upper;
    return x;
}
