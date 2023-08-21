#include <bits/stdc++.h>
using namespace std;
int main() {
    double num1, num2;
    char operation;

    cout << "Enter the first number: ";
    cin >> num1;

    cout << "Enter the second number: ";
    cin >> num2;

    cout << "Choose an operation (+, -, *, /): ";
    cin >> operation;

    double result;
    bool validOperation = true;

    switch (operation) {
        case '+':
            result = num1 + num2;
            break;
        case '-':
            result = num1 - num2;
            break;
        case '*':
            result = num1 * num2;
            break;
        case '/':
            if (num2 != 0) {
                result = num1 / num2;
            } else {
                cout << "Error: Division by zero is not allowed." << endl;
                validOperation = false;
            }
            break;
        default:
            cout << "Invalid operation." << endl;
            validOperation = false;
    }

    if (validOperation) {
        cout << "Result: " << result << endl;
    }

    return 0;
}
