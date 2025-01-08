#include <iostream>
using namespace std;

int main() {
    int number, range;


    cout << "Enter the number for the multiplication table: ";
    cin >> number;


    cout << "Enter the range: ";
    cin >> range;

    cout << "Multiplication Table of " << number << " up to " << range << ":" << endl;
    for (int i = 1; i <= range; ++i) {
        cout << number << " x " << i << " = " << number * i << endl;
    }

    return 0;
}
