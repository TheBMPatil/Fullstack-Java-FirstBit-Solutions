#include "calculator.h"

double calculate(double num1, double num2, char op) {
    switch (op) {
    case '+':
        return num1 + num2;
    case '-':
        return num1 - num2;
    case '*':
        return num1 * num2;
    case '/':
        if (num2 == 0) {
            throw "Division by zero is not allowed!";
        }
        return num1 / num2;
    default:
        throw "Invalid operator!";
    }
}

