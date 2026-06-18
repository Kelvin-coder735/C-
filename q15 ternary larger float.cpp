// 15. Uses the conditional (ternary) operator to determine the larger
//     of two floating point numbers.
#include <iostream>
using namespace std;

int main() {
    double a, b;

    cout << "Enter first floating point number: ";
    cin >> a;
    cout << "Enter second floating point number: ";
    cin >> b;

    double larger = (a > b) ? a : b;

    cout << "The larger value is: " << larger << endl;

    return 0;
}
