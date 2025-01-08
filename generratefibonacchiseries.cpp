#include <iostream>
using namespace std;

int main() {
    int n;
    cout << "Enter the number of terms for the Fibonacci Series: ";
    cin >> n;

    if (n <= 0) {
        cout << "Please enter a positive integer." << endl;
        return 0;
    }

    
    if (n == 1) {
        cout << "Fibonacci Series: 0" << endl;
        return 0;
    } else if (n == 2) {
        cout << "Fibonacci Series: 0, 1" << endl;
        return 0;
    }

    long long t1 = 0, t2 = 1, nextTerm;

    cout << "Fibonacci Series: " << t1 << ", " << t2;
    for (int i = 3; i <= n; ++i) { 
        nextTerm = t1 + t2;        
        cout << ", " << nextTerm; 
        t1 = t2;                   
        t2 = nextTerm;
    }
    cout << endl;

    return 0;
}
