#include <iostream>
#include <cmath>

using namespace std;

int main() {
    float x, p, n, y, z, B, C, D, K, Q;
    y = 2;
    z = 3;
    cin >> x >> p >> n >> D >> K;
    B = cos(x);
    C = p - n;
    Q = (pow(B, y) / (K * D)) + B * pow(C, z);
    cout << Q << endl;
    return 0;
}
