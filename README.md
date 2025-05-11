# 📘 C++ Scientific Computing Practice Problems

This repository contains a series of **modern C++ practice tasks** designed for preparing coding interviews or building a strong foundation in scientific computing. Each task focuses on a specific concept such as classes, inheritance, templates, STL usage, and more.

The project is beginner-friendly but progresses in complexity with clean, commented solutions in `main.cpp`.

---

## 🔧 How to Use

- **Clone the repository**
- **Compile with g++:**

```bash
g++ -std=c++17 -Wall -Wextra main.cpp -o cpp_tasks
./cpp_tasks
```

---

##  Tasks Covered

###  Task 1: 3D Vector Class
- Implemented `Vector` class with `magnitude`, `normalize`, operator overloading, and `<<` stream output.

###  Task 2: Inheritance with Math Functions
- Created abstract class `MathFunction`
- Derived `SineFunction` and `ExpFunction`
- Demonstrated polymorphic behavior with `print_function_info()`

###  Task 3: Polymorphic Dataset Export
- Base class `ScientificDataset`
- Derived `CSVExportDataset`, `BinaryExportDataset`
- Demonstrated polymorphic container with `unique_ptr`

###  Task 4: Logger with Composition
- Interface class `Logger`
- Implementations: `ConsoleLogger` and `SilentLogger`
- Injected into `ScientificProcess` via constructor for decoupling

###  Task 5: Template Functions
- `min_value`, `max_value`, and `clamp`
- Uses `static_assert` for type safety
- Demonstrated with `int`, `float`, `double`

###  Task 6: Template Class `NumericPair<T>`
- Stores two values, supports `sum`, `average`, `scale`
- Enforces arithmetic types
- Prints formatted pairs

###  Task 7: STL with Vectors
- Generated random measurements
- Used STL algorithms: `sort`, `accumulate`, `minmax_element`, `remove_if`
- Practiced vector manipulation and lambda functions

###  Task 8: `Point<dim>` Class Template
- Fixed-dimension point using `std::array`
- Supports `norm()`, coordinate access, and formatted output
- Template parameter is an `int`, e.g., `Point<2>`, `Point<3>`

---

##  Goals

- Build a portfolio of clean and testable C++ code
- Practice real-world software design for scientific applications
- Improve template, class, and STL fluency

---

##  Contributing

Feel free to fork and improve. You can also open issues with suggestions or additional task ideas!

---

##  License

This project is licensed under the MIT License. See `LICENSE` file for details.
