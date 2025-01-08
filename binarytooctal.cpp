#include <iostream>
#include <string>

using namespace std;
string binaryToOctal(const string& binary) {
    int len = binary.length();
    

    int pad = (3 - len % 3) % 3;  
    string paddedBinary = string(pad, '0') + binary;
    
    string octalResult = "";
    
    for (int i = 0; i < paddedBinary.length(); i += 3) {
        string chunk = paddedBinary.substr(i, 3);
        
    
        int decimalValue = stoi(chunk, nullptr, 2);
        
        
        octalResult += to_string(decimalValue);
    }
    
    return octalResult;
}

int main() {
    string binary;
    
    
    cout << "Enter a binary number: ";
    cin >> binary;
    string octal = binaryToOctal(binary);
    
    cout << "Octal representation: " << octal << endl;
    
    return 0;
}
