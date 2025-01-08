#include <iostream>
#include <string>
#include <map> 
using namespace std;

int main() {
    string hexNumber;
    cout << "Enter a hexadecimal number: ";
    cin >> hexNumber;

    map<char, string> hexToBinary = {
        {'0', "0000"}, {'1', "0001"}, {'2', "0010"}, {'3', "0011"},
        {'4', "0100"}, {'5', "0101"}, {'6', "0110"}, {'7', "0111"},
        {'8', "1000"}, {'9', "1001"}, {'A', "1010"}, {'B', "1011"},
        {'C', "1100"}, {'D', "1101"}, {'E', "1110"}, {'F', "1111"},
        {'a', "1010"}, {'b', "1011"}, {'c', "1100"}, {'d', "1101"},
        {'e', "1110"}, {'f', "1111"}
    };

    string binaryResult = "";

    
    for (char hexDigit : hexNumber) {
        if (hexToBinary.find(hexDigit) != hexToBinary.end()) {
            binaryResult += hexToBinary[hexDigit];
        } else {
            cout << "Invalid hexadecimal input." << endl;
            return 1; 
        }
    }

    cout << "Binary equivalent: " << binaryResult << endl;
    return 0;
}
