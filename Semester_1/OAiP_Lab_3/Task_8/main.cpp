#include <iostream>
#include <cmath>

using namespace std;

int main() {
    int a, b, c, d, e, f, n, i, sum;

    cout << "Armstrong numbers smaller than one million:" << endl;

    for (i = 1; i < 1000000; i++) {

        if (i >= 100 && i <= 999) {
            n = 3;
            d = i / 100;
            e = (i - d * 100) / 10;
            f = i - d * 100 - e * 10;
            sum = pow(d, n) + pow(e, n) + pow(f, n);
            if (sum == i) {
                cout << i << endl;
            }
        } else if (i >= 10 && i <= 99) {
            n = 2;
            e = i / 10;
            f = i - e * 10;
            sum = pow(e, n) + pow(f, n);
            if (sum == i) {
                cout << i << endl;
            }
        } else if (i >= 1 && i <= 9) {
            n = 1;
            f = i;
            sum = pow(f, n);
            if (sum == i) {
                cout << i << endl;
            }
        } else if (i >= 1000 && i <= 9999) {
            n = 4;
            c = i / 1000;
            d = (i - c * 1000) / 100;
            e = (i - c * 1000 - d * 100) / 10;
            f = i - c * 1000 - d * 100 - e * 10;
            sum = pow(c, n) + pow(d, n) + pow(e, n) + pow(f, n);
            if (sum == i) {
                cout << i << endl;
            }
        } else if (i >= 10000 && i <= 99999) {
            n = 5;
            b = i / 10000;
            c = (i - b * 10000) / 1000;
            d = (i - b * 10000 - c * 1000) / 100;
            e = (i - b * 10000 - c * 1000 - d * 100) / 10;
            f = i - b * 10000 - c * 1000 - d * 100 - e * 10;
            sum = pow(b, n) + pow(c, n) + pow(d, n) + pow(e, n) + pow(f, n);
            if (sum == i) {
                cout << i << endl;
            }
        } else if (i >= 100000 && i <= 999999) {
            n = 6;
            a = i / 100000;
            b = (i - a * 100000) / 10000;
            c = (i - a * 100000 - b * 10000) / 1000;
            d = (i - a * 100000 - b * 10000 - c * 1000) / 100;
            e = (i - a * 100000 - b * 10000 - c * 1000 - d * 100) / 10;
            f = i - a * 100000 - b * 10000 - c * 1000 - d * 100 - e * 10;
            sum = pow(a, n) + pow(b, n) + pow(c, n) + pow(d, n) + pow(e, n) + pow(f, n);
            if (sum == i) {
                cout << i << endl;
            }
        }
    }
    return 0;
}
