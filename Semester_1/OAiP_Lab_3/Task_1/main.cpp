#include <iostream>
#include <cmath>

using namespace std;

int main() {
    int a, b, i, N;

    i = 1;
    N = 0;

    while (i != 31) {
        if (i % 2 == 1) {
            a = i;
            b = pow(i, 2);
            N = N + pow(a - b, 2);
        } else {
            a = i / 2;
            b = pow(i, 3);
            N = N + pow(a - b, 2);
        }

        i = i + 1;
    }

    cout << "Summary of sequence:" << endl;
    cout << N;
    return 0;
}
