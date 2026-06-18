// 6. Reads a character and checks if it is an uppercase letter
// using the logical AND operator together with isupper().
#include <iostream>
#include <cctype>
using namespace std;

int main() {
    char ch;

    cout << "Enter a character: ";
    cin >> ch;

    // isalpha() confirms it's a letter, isupper() confirms it's uppercase.
    // The logical AND (&&) requires both conditions to be true.
    if (isalpha(ch) && isupper(ch)) {
        cout << "Uppercase letter" << endl;
    } else {
        cout << "Not an uppercase letter" << endl;
    }

    return 0;
}
