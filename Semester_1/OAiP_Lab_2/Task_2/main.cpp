#include <iostream>

using namespace std;

int main() {
    int X, Y;
    cin >> X >> Y;

    if (X < Y) {
        X = 0;
        cout << X;
    } else if (X > Y) {
        Y = 0;
        cout << Y;
    } else {
        X = 0;
        Y = 0;
        cout << X;
    }

    double A, B, C, K;
    cin >> A >> B >> C >> K;

    if ((A > B) && (A > C)) {
        A = A - K;
        cout << A;
    } else if ((B > A) && (B > C)) {
        B = B - K;
        cout << B;
    } else {
        C = C - K;
        cout << C;
    }
    return 0;
}
