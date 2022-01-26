#include <iostream>
#include <cmath>

using namespace std;

int main() {
    double a, v0, y, t, s;
    y = 2;
    cin >> t >> a >> v0;
    s = v0 * t + (a * pow(t, y)) / 2;
    cout << s << endl;
    return 0;
}
