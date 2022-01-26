#include <iostream>
#include <cmath>

using namespace std;

int main() {
    double f, x, y, z, n, k, m;
    int q;
    cin >> z >> n >> k >> m >> q;

    if (z <= 1) {
        x = pow(z, 2) + 1;
        cout << "x = pow(z, 2) + 1" << endl;
    } else {
        x = z;
        cout << "x = z" << endl;
    }

    switch (q) {
        case 1:
            f = 2 * x;
            cout << "f = 2 * x" << endl;
            break;
        case 2:
            f = pow(x, 3);
            cout << "f = pow(x, 3)" << endl;
            break;
        default:
            f = x / 3;
            cout << "f = x / 3" << endl;
            break;
    }

    y = sin(n * f) + cos(k * x) + log(m * x);

    cout << y;
    return 0;
}
