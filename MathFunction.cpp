#include "MathFunction.hpp"
#include <iostream>

void print_function_info(const MathFunction& func, double x) {
    std::cout << "Function value: " << func.evaluate(x)
              << " | Derivative: " << func.derivative(x) << std::endl;
}
