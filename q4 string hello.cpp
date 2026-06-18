// 4. Reads a string and checks if it equals "hello" using ==.
#include <iostream>
#include <string>
using namespace std;

int main() {
    string word;

    cout << "Enter a word: ";
    cin >> word;

    if (word == "hello") {
        cout << "Hello!" << endl;
    } else {
        cout << "Goodbye!" << endl;
    }

    return 0;
}
