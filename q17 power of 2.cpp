// 17. Uses the bitwise AND operator to check if a number is a power of 2.
//
// How it works:
// A power of 2 has exactly one bit set in its binary representation
// (e.g., 8 = 1000). Subtracting 1 from it flips that bit and sets all
// lower bits to 1 (e.g., 7 = 0111). ANDing the two together gives 0
// only when the original number was a power of 2.

#include <iostream>
using namespace std;

int main() {
    int num;

    cout << "Enter a positive integer: ";
    cin >> num;

    if (num > 0 && (num & (num - 1)) == 0) {
        cout << num << " is a power of 2." << endl;
    } else {
        cout << num << " is NOT a power of 2." << endl;
    }

    return 0;
}
