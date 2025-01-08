#include <iostream>
using namespace std;

int main() {
    double num1, num2;


    cout << "Enter the first number: ";
    cin >> num1;
    cout << "Enter the second number: ";
    cin >> num2;

    cout << "Addition: " << num1 + num2 << endl;
    cout << "Subtraction: " << num1 - num2 << endl;
    cout << "Multiplication: " << num1 * num2 << endl;

    if (num2 != 0) {
        cout << "Division: " << num1 / num2 << endl;
    } else {
        cout << "Division: Undefined (cannot divide by zero)" << endl;
    }

    if (static_cast<int>(num1) == num1 && static_cast<int>(num2) == num2) {
        if (num2 != 0) {
            cout << "Modulus: " << static_cast<int>(num1) % static_cast<int>(num2) << endl;
        } else {
            cout << "Modulus: Undefined (cannot divide by zero)" << endl;
        }
    } else {
        cout << "Modulus: Undefined for non-integers" << endl;
    }

    return 0;
}
