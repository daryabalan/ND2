



//main.cpp
#include <iostream>
#include "funcs.h"

int main() {
    double a, b;
    int choice;

    std::cout << "Enter first number: ";
    std::cin >> a;

    std::cout << "Enter second number: ";
    std::cin >> b;

    std::cout << "Select operation:\n";
    std::cout << "1. Addition\n";
    std::cout << "2. Subtraction\n";
    std::cout << "3. Multiplication\n";
    std::cout << "4. Division\n";
    std::cout << "Enter your choice: ";
    std::cin >> choice;

    switch (choice) {
        case 1:
            std::cout << "Result: " << addition(a, b) << std::endl;
            break;
        case 2:
            std::cout << "Result: " << subtraction(a, b) << std::endl;
            break;
        case 3:
            std::cout << "Result: " << multiplication(a, b) << std::endl;
            break;
        case 4:
            std::cout << "Result: " << division(a, b) << std::endl;
            break;
        default:
            std::cout << "Invalid choice" << std::endl;
            break;
    }

    return 0;
}
