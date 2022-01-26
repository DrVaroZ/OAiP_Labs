#include <iostream>
#include <cmath>

using namespace std;

int main() {
    double h, v0, g, y, t;
    y = 2;
    g = 9.81;
    cin >> h >> v0;
    t = ((-2) * v0 + sqrt(4 * pow(v0, y) + 8 * g * h)) / (2 * g);
    cout << t << endl;
    return 0;
}
