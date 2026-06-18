// 5. Reads two integers and checks which one is greater using >.
#include <iostream>
using namespace std;

int main() {
    int first, second;

    cout << "Enter first value: ";
    cin >> first;
    cout << "Enter second value: ";
    cin >> second;

    if (first > second) {
        cout << "First value is greater" << endl;
    } else {
        cout << "Second value is greater" << endl;
    }

    return 0;
}
