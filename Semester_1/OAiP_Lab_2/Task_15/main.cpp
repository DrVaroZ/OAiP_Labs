#include <iostream>

using namespace std;

int main() {
    double K;
    int r, N, p;
    cin >> K;

    N = K / 3 * 3;
    r = N % 10;
    p = (N % 100) / 10;

    if (N == K) {
        if (p != 1) {
            if (r == 1) {
                cout << "We have found " << K << " grib";
            } else if (r >= 2 && r <= 4) {
                cout << "We have found " << K << " griba";
            } else if ((r >= 5 && r <= 9) || r == 0) {
                cout << "We have found " << K << " gribov";
            }
        } else {
            if (r >= 0 && r <= 9) {
                cout << "We have found " << K << " gribov";
            }
        }
    } else {
        cout << "We have found " << K << " griba";
    }
    return 0;
}
