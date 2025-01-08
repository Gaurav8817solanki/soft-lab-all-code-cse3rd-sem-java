#include <iostream>
using namespace std;

int main() {
    double num1, num2, num3;


    cout << "Enter three numbers: ";
    cin >> num1 >> num2 >> num3;
    double smallest;
    if (num1 <= num2 && num1 <= num3) {
        smallest = num1;
    } else if (num2 <= num1 && num2 <= num3) {
        smallest = num2;
    } else {
        smallest = num3;
    }


    cout << "The smallest number is: " << smallest << endl;

    return 0;
}
