#include <iostream>
#include <cmath>

using namespace std;

int main() {
    int a, b, c, i, sum;

    for (i = 10; i < 100; i++) {
        a = i / 10;
        b = i % 10;
        c = a + b;
        sum = pow(c, 3);

        if (sum == pow(i, 2)) {
            cout << "The number, which cube of sum of its numerals is square of it: " << i;
        }
    }
    return 0;
}
