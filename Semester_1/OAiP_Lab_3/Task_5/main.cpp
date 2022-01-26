#include <iostream>
#include <cmath>

using namespace std;

int getNumber() {
    while (true) {
        cout << "Enter the integer number of terms of series" << endl;
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

double getArgument() {
    while (true) {
        cout << "Enter a small argument" << endl;
        double x;
        cin >> x;

        if (cin.fail() || x > 0.00001) {
            cin.clear();
            cin.ignore(32767,'\n');
            cout << "Please try again" << endl;
        }
        else {
            cin.ignore(32767,'\n');
            return x;
        }
    }
}

int main() {
    double Y, S, x, t;
    int n, i;

    n = getNumber();
    x = getArgument();

    Y = log(1 / (pow (x, 2) + 2 * x + 2));
    cout << Y << " --- " << "standard" << endl;

    S = 0;

    for (i = 1; i <= n; i++) {
        t = (pow (-1, i) * pow(1 + x, 2 * i)) / i;
        S = S + t;
    }

    cout << S << " --- " << "using series";
    return 0;
}
