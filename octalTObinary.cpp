#include <iostream>
#include <string>
#include <map>
using namespace std;

int main() {
    string octalNumber;
    cout << "Enter an octal number: ";
    cin >> octalNumber;

   
    map<char, string> octalToBinary = {
        {'0', "000"}, {'1', "001"}, {'2', "010"}, {'3', "011"},
        {'4', "100"}, {'5', "101"}, {'6', "110"}, {'7', "111"}
    };

    string binaryResult = "";
    for (char octalDigit : octalNumber) {
        if (octalToBinary.find(octalDigit) != octalToBinary.end()) {
            binaryResult += octalToBinary[octalDigit];
        } else {
            cout << "Invalid octal input." << endl;
            return 1; 
        }
    }

    cout << "Binary equivalent: " << binaryResult << endl;
    return 0;
}
