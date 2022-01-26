#include <iostream>

using namespace std;

int main() {
    double a, b, c, d, Z;
    cin >> a >> b >> c >> d;

    if (c >= d && a < d) {
        Z = a + b / c;
        cout << Z;
    } else if (c < d && a >= d) {
        Z = a - b / c;
        cout << Z;
    } else {
        Z = 0;
        cout << Z;
    }
    return 0;
}
