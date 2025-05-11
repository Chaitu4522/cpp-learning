#pragma once
#include <iostream>
#include <string>

class Logger {
public:
    virtual ~Logger() = default;
    virtual void log(const std::string& message) const = 0;
};

class ConsoleLogger : public Logger {
public:
    void log(const std::string& message) const override {
        std::cout << message << std::endl;
    }
};

class SilentLogger : public Logger {
public:
    void log(const std::string& message) const override { (void) message; }
};

class ScientificProcess {
    std::string name;
    Logger& logger;

public:
    ScientificProcess(const std::string& name_, Logger& logger_) 
        : name(name_), logger(logger_) {}

    void run() {
        logger.log("Starting process " + name + "...");
        logger.log("Processing...");
        logger.log("Finishing process " + name + ".");
    }
};
