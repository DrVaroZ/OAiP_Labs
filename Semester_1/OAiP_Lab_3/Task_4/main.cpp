#include <iostream>

using namespace std;

int getNumber() {
    while (true) {
        cout << "Enter an integer number: " << endl;
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
    int i, sum1, sum2;

    int n = getNumber();
    sum1 = 0;

    for (i = 1; i <= n; i++) {
        if (i % 2 == 0) {
            sum1 = sum1 + i;
        }
    }

    if (n % 2 == 0) {
        sum2 = (n / 2) * (n / 2 + 1);
    } else {
        sum2 = ((n - 1) / 2) * ((n - 1) / 2 + 1);
    }

    cout << sum1 << " --- " << "Summary of even numbers smaller than " << n << " with cycle" << endl;
    cout << sum2 << " --- " << "Summary of even numbers smaller than " << n << " without cycle";
    return 0;
}
