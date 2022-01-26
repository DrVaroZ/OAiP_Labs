#include <iostream>

using namespace std;

int main() {
    double a, r, circle, square;
    cin >> a >> r;

    circle = 3.14 * r * r;
    square = a * a;
    if (circle > square) {
        cout << "Circle";
    } else if (circle < square) {
        cout << "Square";
    } else {
        cout << "Equivalent";
    }
    return 0;
}
