#include <iostream>
#include <cmath>

using namespace std;

int getNumber() {
    while (true) {
        cout << "Enter an integer number of parts of search" << endl;
        int n;
        cin >> n;

        if (cin.fail()) {
            cin.clear();
            cin.ignore(32767,'\n');
            cout << "Please try again" << endl;
        }
        else {
            cin.ignore(32767,'\n');
            return n;
        }
    }
}

int main() {
    double x, x0, y, min, h;

    int n = getNumber();

    x = -1.0;
    x0= -1.0;
    h = 2.0 / n;
    min = fabs(sin(-1.0) + tan(-1.0) - 1 / (1 + pow(-1.0, 2)));

    while (x <= 1.0) {
        y = fabs(sin(x) + tan(x) - 1 / (1 + pow(x, 2)));
        x = x + h;
        if (min > y) {
            min = y;
            x0 = x;
        }
    }

    cout << min << " --- " << "the closest to zero function" << endl;
    cout << x0 << " --- " << "the argument of this function";
    return 0;
}
