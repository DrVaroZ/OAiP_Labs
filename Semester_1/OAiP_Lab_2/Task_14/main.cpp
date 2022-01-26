#include <iostream>

using namespace std;

int main() {
    double a, b, c, x, y, s1, s2, s3, s0;
    cin >> a >> b >> c >> x >> y;

    s1 = a * b;
    s2 = c * a;
    s3 = c * b;
    s0 = x * y;

    if (s1 <= s0 || s2 <= s0 || s3 <= s0) {
        cout << "Yes";
    } else {
        cout << "No";
    }
    return 0;
}
