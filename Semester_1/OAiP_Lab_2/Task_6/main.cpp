#include <iostream>
#include <cmath>

using namespace std;

int main() {
    int N;
    double a, b, c, Y;
    cin >> N >> a >> b >> c;

    switch(N) {
        case 2:
            Y = b * c - pow(a, 2);
            break;
        case 56:
            Y = b * c;
            break;
        case 7:
            Y = pow(a, 2) + c;
            break;
        case 3:
            Y = a - b * c;
            break;
        default:
            Y = pow(a + b, 3);
    }

    cout << Y;
    return 0;
}
