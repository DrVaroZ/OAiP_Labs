#include <iostream>
#include <cstdlib>

using namespace std;

int getNumber() {
    while (true) {
        cout << "Enter an integer n: " << endl;
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
    int i, j, x;
    double sum, sum1, sum2, product, product1, product2;
    int n = getNumber();
    sum1 = 0;
    sum2 = 0;
    product1 = 1;
    product2 = 1;
    auto **array = new double* [n];

    for (x = 0; x < n; x++) {
        array[x] = new double [n];
    }

    for (i = 0; i < n; i++) {
        for (j = 0; j < n; j++) {
            array[i][j] = rand() % 100 + 1;
        }
    }

    for (i = 0; i < n; i++) {
            for (j = i; j < n - i; j++) {
                sum1 = sum1 + array[i][j];
                product1 = product1 * array[i][j];
            }
        }

    for (i = n - 1; i >= 0; i--) {
        for (j = i; j >= n - i - 1; j--) {
            sum2 = sum2 + array[i][j];
            product2 = product2 * array[i][j];
        }
    }

    if (n % 2 == 0) {
        sum = sum1 + sum2;
        product = product1 * product2;
    } else {
        sum = sum1 + sum2 - array[n / 2][n / 2];
        product = (product1 * product2) / array[n / 2][n / 2];
    }

    for (i = 0; i < n; i++) {
        for (j = 0; j < n; j++) {
            cout << array[i][j] << " " << "\t";
        }
        cout << "\n";
    }

    for (x = 0; x < n; x++)
        delete []array[x];

    delete []array;

    cout << endl;
    cout << sum << " --- " << "The summary of elements" << endl;
    cout << product << " --- " << "The product of elements";
    return 0;
}
