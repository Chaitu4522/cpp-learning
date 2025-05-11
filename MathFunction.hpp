#pragma once
#include <cmath>

class MathFunction {
public:
    virtual ~MathFunction() = default;
    virtual double evaluate(double x) const = 0;
    virtual double derivative(double x) const = 0;
};

class SineFunction : public MathFunction {
public:
    double evaluate(double x) const override { return std::sin(x); }
    double derivative(double x) const override { return std::cos(x); }
};

class ExpFunction : public MathFunction {
public:
    double evaluate(double x) const override { return std::exp(x); }
    double derivative(double x) const override { return std::exp(x); }
};

void print_function_info(const MathFunction& func, double x);
