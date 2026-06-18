// 2. Calculates the area of a circle given the radius, using pow() for r^2.
#include <iostream>
#include <cmath>
using namespace std;

int main() {
    double radius;
    const double PI = 3.14159265358979;

    cout << "Enter the radius of the circle: ";
    cin >> radius;

    double area = PI * pow(radius, 2);

    cout << "Area of the circle: " << area << endl;

    return 0;
}
