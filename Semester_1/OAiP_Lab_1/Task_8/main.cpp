#include <iostream>

using namespace std;

int main() {
    float a1, a100, d, n, S;
    n = 13;
    cin >> a1 >> a100;
    d = (a100 - a1) / 99;
    S = ((2 * a1 + d * (n + 10 - 1)) * (n + 10)) / 2;
    cout << d << endl << S << endl;
    return 0;
}
