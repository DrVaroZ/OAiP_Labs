#include <iostream>

using namespace std;

int main() {
    int a, b;
    cin >> a >> b;
    a = a + b; // a = a + b, b = b
    cout << a << endl << b << endl;
    b = a - b; // a = a + b, b = (a + b) - b = a
    cout << a << endl << b << endl;
    a = a - b; // a = (a + b) - b = (a + b) - a = b, b = a
    cout << a << endl << b << endl;
    return 0;
}
