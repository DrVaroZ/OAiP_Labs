#include <iostream>
#include <cmath>

using namespace std;

int main() {
    double e, d, sum;
    int n;

    e = 0.001;
    n = 1;
    sum = 1.0 / 2.0 + 1.0 / 3.0;

    do {
        n++;
        sum = sum + pow(1 / 2, n) + pow(1 / 3, n);
        d = pow(1 / 2, n) + pow(1 / 3, n);
    } while (d > e);

    cout << "Summary of sequence:" << endl;
    cout << sum;
    return 0;
}
