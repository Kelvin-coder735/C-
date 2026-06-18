// 7. Reads a string and checks if it contains the character 'a'.
//
// NOTE: C++ does not have Python's "in" operator. The standard C++
// equivalent for checking whether a character exists inside a string
// is the string's find() member function, used below.
#include <iostream>
#include <string>
using namespace std;

int main() {
    string text;

    cout << "Enter a string: ";
    cin >> text;

    if (text.find('a') != string::npos) {
        cout << "Contains 'a'" << endl;
    } else {
        cout << "Does not contain 'a'" << endl;
    }

    return 0;
}
