#include <iostream>

using namespace std;

int main() {
    int a, b, c, d, GCD, LCM;
    cin >> a >> b;

    c = a;
    d = b;
    while (a != 0 && b != 0) {
        if (a > b) {
            a = a % b;
        } else {
            b = b % a;
        }
    }

    GCD = a + b;
    LCM = (c * d) / GCD;

    cout << GCD << endl << LCM;
    return 0;
}
