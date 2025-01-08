#include <iostream>
#include <iomanip> 
using namespace std;

int main() {
    int n;
    cout << "Enter the number of terms for the Harmonic Series: ";
    cin >> n;

    if (n <= 0) {
        cout << "Please enter a positive integer." << endl;
        return 0;
    }

    double harmonicSum = 0.0;

    cout << "Harmonic Series: ";
    for (int i = 1; i <= n; ++i) {
        harmonicSum += 1.0 / i; 
        cout << "1/" << i;
        if (i < n) cout << " + ";
    }

    cout << endl << fixed << setprecision(6); 
    cout << "Sum of Harmonic Series up to " << n << " terms is: " << harmonicSum << endl;

    return 0;
}
