// 12. Uses the logical AND operator to check if a number is
//     both odd and divisible by 3.
#include <iostream>
using namespace std;

int main() {
    int num;

    cout << "Enter an integer: ";
    cin >> num;

    if ((num % 2 != 0) && (num % 3 == 0)) {
        cout << num << " is both odd and divisible by 3." << endl;
    } else {
        cout << num << " is NOT both odd and divisible by 3." << endl;
    }

    return 0;
}
