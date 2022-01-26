#include <iostream>
#include <cmath>

using namespace std;

int main() {
    double x1, x2, y1, y2, L, R, r;
    cin >> x1 >> y1 >> x2 >> y2 >> R >> r;

    L = sqrt(pow(x2 - x1, 2) + pow(y2 - y1, 2));

    if (R >= r) {
        if (L <= R) {
            cout << "Yes";
        } else if (L > R && L <= R + r) {
            cout << "Interception";
        } else {
            cout << "No";
        }
    } else {
        if (L <= r) {
            cout << "Yes, but vice verse";
        } else if (L > r && L <= R + r) {
            cout << "Interception";
        } else {
            cout << "No";
        }
    }
    return 0;
}
