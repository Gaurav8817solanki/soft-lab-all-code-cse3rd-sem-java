#include <iostream>
#include <cmath> 
using namespace std;

int main() {
    double number;
    cout << "Enter a number: ";
    cin >> number;

    if (number < 0) {
        cout << "Square root of a negative number is complex." << endl;
        cout << "The result is: " << sqrt(-number) << "i" << endl; 
    } else {
        double result = sqrt(number);
        cout << "Square root of " << number << " is: " << result << endl;
    }

    return 0;
}
