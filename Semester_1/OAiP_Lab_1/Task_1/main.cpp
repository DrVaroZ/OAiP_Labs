#include <iostream>

using namespace std;

int main() {
    float x, a, b, c, d, e, A, B;
    cin >> x;
    a = 23 * x * x;
    b = a + 32;
    c = b * x;
    d = 3 * a;
    e = d + 8;
    A = c + e;
    B = e - c;
    cout << A << endl << B;
    return 0;
}
