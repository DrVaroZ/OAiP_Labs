#include <iostream>

using namespace std;

int main() {
    float b1, q, n, S;
    n = 13;
    cin >> b1;
    q = 1 / (n + 1);
    S = b1 / (1 - q);
    cout << S << endl;
    return 0;
}
