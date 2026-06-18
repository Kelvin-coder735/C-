// 13. Uses the bitwise XOR operator to swap the values of two variables
//     without using a temporary variable.
//
// How it works:
// Given a and b:
//   a = a ^ b;   // a now holds (original a XOR original b)
//   b = a ^ b;   // b becomes the original a
//   a = a ^ b;   // a becomes the original b
// This works because XOR-ing a value with itself cancels it out (x ^ x = 0),
// and XOR-ing with 0 leaves the value unchanged (x ^ 0 = x).

#include <iostream>
using namespace std;

int main() {
    int a, b;

    cout << "Enter value of a: ";
    cin >> a;
    cout << "Enter value of b: ";
    cin >> b;

    cout << "\nBefore swap: a = " << a << ", b = " << b << endl;

    a = a ^ b;
    b = a ^ b;
    a = a ^ b;

    cout << "After swap:  a = " << a << ", b = " << b << endl;

    return 0;
}
