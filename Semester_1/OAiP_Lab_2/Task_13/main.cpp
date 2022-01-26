#include <iostream>
#include <cmath>

using namespace std;

int main() {
    double R, P, Q, H;
    cin >> R >> P >> Q;

    H = P * fabs(sin(Q));
    if ((2 * R) <= H) {
        cout << "Yes";
    } else {
        cout << "No";
    }
    return 0;
}
