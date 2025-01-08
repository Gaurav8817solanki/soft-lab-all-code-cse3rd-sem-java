#include <iostream>
using namespace std;

int main() {
    double num1, num2;

    cout << "Enter two numbers: ";
    cin >> num1 >> num2;

    cout << "Addition: " << num1 + num2 << endl;
    cout << "Subtraction: " << num1 - num2 << endl;
    cout << "Multiplication: " << num1 * num2 << endl;

    if (num2 != 0) {
        cout << "Division: " << num1 / num2 << endl;
    } else {
        cout << "Division: Undefined (division by zero)" << endl;
    }

    if (static_cast<int>(num1) == num1 && static_cast<int>(num2) == num2 && num2 != 0) {
        cout << "Modulo: " << static_cast<int>(num1) % static_cast<int>(num2) << endl;
    } else if (num2 == 0) {
        cout << "Modulo: Undefined (division by zero)" << endl;
    } else {
        cout << "Modulo: Not valid for non-integer numbers" << endl;
    }

    return 0;
}
