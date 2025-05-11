#pragma once
#include <iostream>
#include <string>

class ScientificDataset {
protected:
    std::string name;
public:
    explicit ScientificDataset(const std::string& name_) : name(name_) {}
    virtual ~ScientificDataset() = default;
    virtual void export_data() const = 0;
};

class CSVExportDataset : public ScientificDataset {
public:
    using ScientificDataset::ScientificDataset;
    void export_data() const override {
        std::cout << "Exporting dataset " << name << " to CSV..." << std::endl;
    }
};

class BinaryExportDataset : public ScientificDataset {
public:
    using ScientificDataset::ScientificDataset;
    void export_data() const override {
        std::cout << "Exporting dataset " << name << " to Binary..." << std::endl;
    }
};
