#include <iostream>

using namespace std;

int main() {
    double X, Y, max;
    cin >> X >> Y;

    max = (X < Y) ? Y : X;
    cout << max << " " << "Ternar" << endl;

    if (X < Y) {
        max = Y;
        cout << max;
    } else {
        max = X;
        cout << max;
    }
    return 0;
}
