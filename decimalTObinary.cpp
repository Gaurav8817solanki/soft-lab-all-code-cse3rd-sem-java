#include <iostream>
#include <stack>

using namespace std;

string decimalToBinary(int decimal) {
    if (decimal == 0) {
        return "0";  
    }

    stack<int> binaryStack;  

    while (decimal > 0) {
        binaryStack.push(decimal % 2);  
        decimal = decimal / 2;  
    }

    string binary = "";
    while (!binaryStack.empty()) {
        binary += to_string(binaryStack.top());  
        binaryStack.pop();
    }

    return binary;
}

int main() {
    int decimal;

    
    cout << "Enter a decimal number: ";
    cin >> decimal;

    
    string binary = decimalToBinary(decimal);

    cout << "Binary representation: " << binary << endl;

    return 0;
}
