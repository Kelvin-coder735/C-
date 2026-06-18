// 3. Reads three integers and checks if they are all equal using ==.
#include <iostream>
using namespace std;

int main() {
    int a, b, c;

    cout << "Enter first integer: ";
    cin >> a;
    cout << "Enter second integer: ";
    cin >> b;
    cout << "Enter third integer: ";
    cin >> c;

    if (a == b && b == c) {
        cout << "Equal" << endl;
    } else {
        cout << "Not equal" << endl;
    }

    return 0;
}
