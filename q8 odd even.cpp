// 8. Reads an integer and checks if it is odd using the modulus operator.
#include <iostream>
using namespace std;

int main() {
    int num;

    cout << "Enter an integer: ";
    cin >> num;

    if (num % 2 != 0) {
        cout << "Odd number" << endl;
    } else {
        cout << "Even number" << endl;
    }

    return 0;
}
