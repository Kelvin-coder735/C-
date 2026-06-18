// 1. Takes two integers and calculates sum, difference, product, and quotient.
#include <iostream>
using namespace std;

int main() {
    int a, b;

    cout << "Enter first integer: ";
    cin >> a;
    cout << "Enter second integer: ";
    cin >> b;

    cout << "Sum: " << a + b << endl;
    cout << "Difference: " << a - b << endl;
    cout << "Product: " << a * b << endl;

    if (b != 0) {
        cout << "Quotient: " << a / b << endl;
    } else {
        cout << "Quotient: undefined (cannot divide by zero)" << endl;
    }

    return 0;
}
