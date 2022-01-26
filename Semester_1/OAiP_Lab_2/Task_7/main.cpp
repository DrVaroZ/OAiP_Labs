#include <iostream>
#include <cmath>

using namespace std;

int main() {
    double a, b, c, D, D1, D2, D3, D4, x1, x2, x3, x4, y1, y2, t1, t2,
           X1, X2, X3, X4, p, q, z1, z2, w1, w2, v1, v2;
    cin >> a >> b >> c;

    D = pow(b, 2) - 4 * a * c;
    if (D >= 0) {
        y1 = (-b - sqrt(D)) / (2 * a);
        y2 = (-b + sqrt(D)) / (2 * a);
        if (y1 >= 0) {
            x1 = 0 - (sqrt(y1));
            x2 = sqrt(y1);
            cout << x1 << " " << x2 << endl;
        } else if (y2 >= 0) {
            x3 = 0 - (sqrt(y2));
            x4 = sqrt(y2);
            cout << x3 << " " << x4 << endl;
        } else {
            cout << "There are no roots" << endl;
        }
    } else {
        cout << "There are no roots" << endl;
    }

    D1 = pow(b, 2) - 4 * a * (c - 2 * a);
    if (D1 >= 0) {
        t1 = (-b - sqrt(D1)) / (2 * a);
        t2 = (-b + sqrt(D1)) / (2 * a);
        D2 = pow(t1, 2) - 4;
        D3 = pow(t2, 2) - 4;
        if (D2 >= 0) {
            X1 = (t1 - sqrt(D2)) / 2;
            X2 = (t1 + sqrt(D2)) / 2;
            cout << X1 << " " << X2 << endl;
        } else if (D3 >= 0) {
            X3 = (t2 - sqrt(D3)) / 2;
            X4 = (t2 + sqrt(D3)) / 2;
            cout << X3 << " " << X4 << endl;
        } else {
            cout << "There are no roots" << endl;
        }
    } else {
        cout << "There are no roots" << endl;
    }

    cin >> p >> q;

    D4 = pow(q, 2) + (4 * pow(p, 3)) / 27;
    if (D4 >= 0) {
        w1 = (-q - sqrt(D4)) / 2;
        w2 = (-q + sqrt(D4)) / 2;
        v1 = (w1 / fabs(w1)) * pow(fabs(w1), 1.0 / 3.0);
        v2 = (w2 / fabs(w2)) * pow(fabs(w2), 1.0 / 3.0);
        z1 = v1 - (3 * p) / v1;
        z2 = v2 - (3 * p) / v2;
        cout << z1 << " " << z2;
    } else {
        cout << "There are no roots";
    }
    return 0;
}
