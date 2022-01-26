#include <iostream>
#include <cmath>

using namespace std;

int main() {
    double y, x, B, H, pi;
    int A, M, i;

    pi = 3.1415;
    M = 20;
    A = 0;
    B = pi / 2;
    H = (B - A) / M;
    x = A;

    for (i = 0; x <= B; i++) {
        x = A + i * H;
        y = sqrt(2) * sin(x - pi / 4);
        cout << y << " -- " << "function in" << " " << "X" << "=" << x << endl;
    }
    return 0;
}
