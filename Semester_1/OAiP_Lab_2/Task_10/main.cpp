#include <iostream>
#include <cmath>

using namespace std;

int main() {
    double x, SIN, COS, LN;
    cin >> x;

    SIN = sin(x);
    COS = cos(x);
    LN = log(fabs(x));

    if (SIN >= COS && SIN >= LN) {
        cout << SIN << " sin";
    } else if (COS >= SIN && COS >= LN) {
        cout << COS << " cos";
    } else {
        cout << LN << " ln";
    }
    return 0;
}
