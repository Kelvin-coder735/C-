// 18. Converts a binary number (entered as a string of 0s and 1s) to decimal.
#include <iostream>
#include <string>
#include <cmath>
using namespace std;

int main() {
    string binary;

    cout << "Enter a binary number: ";
    cin >> binary;

    int decimal = 0;
    int length = binary.length();

    for (int i = 0; i < length; i++) {
        char bit = binary[length - 1 - i]; // read from rightmost bit
        if (bit == '1') {
            decimal += pow(2, i);
        } else if (bit != '0') {
            cout << "Invalid binary digit found: " << bit << endl;
            return 1;
        }
    }

    cout << "Binary " << binary << " in decimal is: " << decimal << endl;

    return 0;
}
