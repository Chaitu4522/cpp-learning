CXX = g++
CXXFLAGS = -std=c++17 -Wall -Wextra -O2

SRC = main.cpp Vector.cpp MathFunction.cpp
HDR = Vector.hpp MathFunction.hpp ScientificDataset.hpp Logger.hpp Utils.hpp NumericPair.hpp Point.hpp

TARGET = cpp_tasks

all: $(TARGET)

$(TARGET): $(SRC) $(HDR)
	$(CXX) $(CXXFLAGS) -o $(TARGET) $(SRC)

clean:
	rm -f $(TARGET)