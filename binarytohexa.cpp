#include <iostream>
#include <string>
#include <bitset>

using namespace std;
string binaryToHexadecimal(const string& binary) {
    int len = binary.length();
    
    
    int pad = (4 - len % 4) % 4;  
    string paddedBinary = string(pad, '0') + binary;
    
    string hexResult = "";
    for (int i = 0; i < paddedBinary.length(); i += 4) {
        string chunk = paddedBinary.substr(i, 4);
        
        int decimalValue = stoi(chunk, nullptr, 2);
        
        hexResult += (decimalValue < 10) ? ('0' + decimalValue) : ('A' + decimalValue - 10);
    }
    
    return hexResult;
}

int main() {
    string binary;
    
    
    cout << "Enter a binary number: ";
    cin >> binary;
    

    string hex = binaryToHexadecimal(binary);
    
    cout << "Hexadecimal representation: " << hex << endl;
    
    return 0;
}
