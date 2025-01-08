#include <iostream>
#include <cctype>  

using namespace std;

int main() {
    char ch;

    
    cout << "Enter a character: ";
    cin >> ch;

    
    if (isupper(ch)) {
        cout << "The character '" << ch << "' is uppercase." << endl;
    }
    
    else if (islower(ch)) {
        cout << "The character '" << ch << "' is lowercase." << endl;
    }
    
    else {
        cout << "The character '" << ch << "' is neither uppercase nor lowercase." << endl;
    }

    return 0;
}
