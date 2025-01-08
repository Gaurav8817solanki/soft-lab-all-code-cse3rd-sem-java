#include <iostream>
#include <cmath>  

using namespace std;

void findRoots(double a, double b, double c) {
    //
    double discriminant = b * b - 4 * a * c;

    
    if (discriminant > 0) {

        double root1 = (-b + sqrt(discriminant)) / (2 * a);
        double root2 = (-b - sqrt(discriminant)) / (2 * a);
        cout << "The roots are real and distinct." << endl;
        cout << "Root 1: " << root1 << endl;
        cout << "Root 2: " << root2 << endl;
    }
    else if (discriminant == 0) {
    
        double root = -b / (2 * a);
        cout << "The root is real and repeated." << endl;
        cout << "Root: " << root << endl;
    }
    else {
        
        double realPart = -b / (2 * a);
        double imaginaryPart = sqrt(-discriminant) / (2 * a);
        cout << "The roots are complex and distinct." << endl;
        cout << "Root 1: " << realPart << " + " << imaginaryPart << "i" << endl;
        cout << "Root 2: " << realPart << " - " << imaginaryPart << "i" << endl;
    }
}

int main() {
    double a, b, c;

    
    cout << "Enter coefficient a: ";
    cin >> a;
    cout << "Enter coefficient b: ";
    cin >> b;
    cout << "Enter coefficient c: ";
    cin >> c;

    
    if (a == 0) {
        cout << "The value of 'a' cannot be zero in a quadratic equation!" << endl;
        return 1; 
    }

    
    findRoots(a, b, c);

    return 0;
}



