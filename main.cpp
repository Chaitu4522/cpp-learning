#include <iostream>
#include <vector>
#include <memory>
#include <random>
#include <algorithm>
#include <numeric>

#include "Vector.hpp"
#include "MathFunction.hpp"
#include "ScientificDataset.hpp"
#include "Logger.hpp"
#include "Utils.hpp"
#include "NumericPair.hpp"
#include "Point.hpp"

template <typename T>
void print_vector(const std::vector<T>& vec) {
    std::cout << "[";
    for (size_t i = 0; i < vec.size(); ++i) {
        std::cout << vec[i];
        if (i != vec.size() - 1) std::cout << ", ";
    }
    std::cout << "]" << std::endl;
}

int main() {
    std::cout << "=== Task 1: Vector ===" << std::endl;
    Vector v1(3.0, 4.0, 0.0);
    Vector v2(1.0, 2.0, 3.0);
    std::cout << "v1: " << v1 << ", magnitude: " << v1.magnitude() << "" << std::endl;
    std::cout << "v1 + v2 = " << (v1 + v2) << "\\n" << std::endl;

    std::cout << "=== Task 2: MathFunction ===" << std::endl;
    SineFunction sine;
    ExpFunction exp;
    print_function_info(sine, 1.0);
    print_function_info(exp, 1.0);
    std::cout << "" << std::endl;

    std::cout << "=== Task 3: Dataset Export ===" << std::endl;
    std::vector<std::unique_ptr<ScientificDataset>> datasets;
    datasets.push_back(std::make_unique<CSVExportDataset>("data_1"));
    datasets.push_back(std::make_unique<BinaryExportDataset>("data_2"));
    for (const auto& d : datasets) d->export_data();
    std::cout << "" << std::endl;

    std::cout << "=== Task 4: Logger ===" << std::endl;
    ConsoleLogger con_logger;
    SilentLogger silent_logger;
    ScientificProcess p1("ProcessA", con_logger);
    ScientificProcess p2("ProcessB", silent_logger);
    p1.run();
    p2.run();
    std::cout << "" << std::endl;

    std::cout << "=== Task 5: Template Functions ===" << std::endl;
    std::cout << "min(3, 5): " << min_value(3, 5) << "" << std::endl;
    std::cout << "max(3.5, 2.1): " << max_value(3.5, 2.1) << "" << std::endl;
    std::cout << "clamp(8.0, 0.0, 5.0): " << clamp(8.0, 0.0, 5.0) << "\\n" << std::endl;

    std::cout << "=== Task 6: NumericPair ===" << std::endl;
    NumericPair<double> np(2.0, 4.0);
    np.print();
    std::cout << "Sum: " << np.sum() << ", Average: " << np.average() << "" << std::endl;
    np.scale(2.0);
    np.print();
    std::cout << "" << std::endl;

    std::cout << "=== Task 7: STL Operations ===" << std::endl;
    std::vector<double> measurements(10);
    std::mt19937 gen(42);
    std::uniform_real_distribution<> dist(0.0, 100.0);
    for (auto& m : measurements) m = dist(gen);
    std::cout << "Original: ";
    print_vector(measurements);

    double mean = std::accumulate(measurements.begin(), measurements.end(), 0.0) / measurements.size();
    auto [min_it, max_it] = std::minmax_element(measurements.begin(), measurements.end());
    std::cout << "Mean: " << mean << ", Min: " << *min_it << ", Max: " << *max_it << "" << std::endl;

    auto it = std::remove_if(measurements.begin(), measurements.end(), [mean](double x) { return x < mean; });
    measurements.erase(it, measurements.end());
    std::cout << "Above-average values: ";
    print_vector(measurements);
    std::cout << "" << std::endl;

    std::cout << "=== Task 8: Point<dim> ===" << std::endl;
    Point<2> p2d({1.0, 2.0});
    Point<3> p3d({3.0, 4.0, 5.0});
    std::cout << "p2d: " << p2d << ", norm: " << p2d.norm() << "" << std::endl;
    std::cout << "p3d: " << p3d << ", norm: " << p3d.norm() << "" << std::endl;

    return 0;
}