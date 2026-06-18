// 10. Uses the ternary (conditional) operator to find the larger of two integers.
#include <iostream>
using namespace std;

int main() {
    int a, b;

    cout << "Enter first integer: ";
    cin >> a;
    cout << "Enter second integer: ";
    cin >> b;

    int larger = (a > b) ? a : b;

    cout << "The larger value is: " << larger << endl;

    return 0;
}
