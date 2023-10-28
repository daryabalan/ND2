//funcs.cpp
#include <iostream>
#include "funcs.h"

double addition(double a, double b) {
    std::cout << "Function Addition is under development" << std::endl;
    return a + b;
}

double subtraction(double a, double b) {
    std::cout << "Function Subtraction is under development" << std::endl;
    return a - b;
}

double multiplication(double a, double b) {
    return a * b;
}

double division(double a, double b) {
    std::cout << "Function Division is under development" << std::endl;
    if (b != 0) {
        return a / b;
    } else {
        std::cout << "Error: Division by zero" << std::endl;
        return 0.0;
    }
}
