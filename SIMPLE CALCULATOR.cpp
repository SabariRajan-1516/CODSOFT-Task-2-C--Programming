#include <iostream>

using namespace std;

int main() {
    char operation;
    double num1, num2, result;

    // Ask the user for the operation
    cout << "Enter the operation you want to perform (+, -, *, /): ";
    cin >> operation;

    // Ask the user for two numbers
    cout << "Enter the first number: ";
    cin >> num1;
    cout << "Enter the second number: ";
    cin >> num2;

    // Perform the operation based on the user's choice
    switch (operation) {
        case '+':
            result = num1 + num2;
            cout << "Result: " << num1 << " + " << num2 << " = " << result;
            break;
        case '-':
            result = num1 - num2;
            cout << "Result: " << num1 << " - " << num2 << " = " << result;
            break;
        case '*':
            result = num1 * num2;
            cout << "Result: " << num1 << " * " << num2 << " = " << result;
            break;
        case '/':
            if (num2 != 0) {
                result = num1 / num2;
                cout << "Result: " << num1 << " / " << num2 << " = " << result;
            } else {
                cout << "Error: Division by zero!";
            }
            break;
        default:
            cout << "Error: Invalid operation!";
            break;
    }

    return 0;
}

