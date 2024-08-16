#include <iostream>
using namespace std;

void performCalculation(double num1, double num2, char operation) {
    switch (operation) {
        case '+':
            cout << "Result: " << num1 + num2 << endl;
            break;
        case '-':
            cout << "Result: " << num1 - num2 << endl;
            break;
        case '*':
            cout << "Result: " << num1 * num2 << endl;
            break;
        case '/':
            if (num2 != 0) {
                cout << "Result: " << num1 / num2 << endl;
            } else {
                cout << "Error: Division by zero!" << endl;
            }
            break;
        default:
            cout << "Error: Invalid operation!" << endl;
            break;
    }
}

int main() {
    char continueCalculation = 'y';
    
    while (continueCalculation == 'y' || continueCalculation == 'Y') {
        double num1, num2;
        char operation;

        cout << "Enter the first number: ";
        cin >> num1;
        cout << "Enter the second number: ";
        cin >> num2;

        cout << "Enter the operation (+, -, *, /): ";
        cin >> operation;

        performCalculation(num1, num2, operation);

        cout << "Do you want to perform another calculation? (y/n): ";
        cin >> continueCalculation;
    }

    cout << "Thank you for using the calculator!" << endl;
    return 0;
}
