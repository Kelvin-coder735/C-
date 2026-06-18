// 19. A calculator that converts a binary number to:
//     - Decimal
//     - Hexadecimal
//     - Octal
#include <iostream>
#include <string>
#include <cmath>
#include <iomanip>
using namespace std;

int binaryToDecimal(const string &binary) {
    int decimal = 0;
    int length = binary.length();

    for (int i = 0; i < length; i++) {
        char bit = binary[length - 1 - i];
        if (bit == '1') {
            decimal += pow(2, i);
        }
    }
    return decimal;
}

int main() {
    string binary;

    cout << "=== Binary Conversion Calculator ===" << endl;
    cout << "Enter a binary number: ";
    cin >> binary;

    // Validate input contains only 0s and 1s
    for (char c : binary) {
        if (c != '0' && c != '1') {
            cout << "Invalid input. Please enter only 0s and 1s." << endl;
            return 1;
        }
    }

    int decimal = binaryToDecimal(binary);

    cout << "\nResults:" << endl;
    cout << "Binary:      " << binary << endl;
    cout << "Decimal:     " << decimal << endl;
    cout << "Hexadecimal: " << hex << uppercase << decimal << endl;
    cout << "Octal:       " << oct << decimal << endl;

    // Reset stream back to decimal formatting (good practice)
    cout << dec;

    return 0;
}
