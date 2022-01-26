#include <iostream>

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
    int i, j, x, N;
    int n = getNumber();
    auto **array = new double* [n];
    N = 0;

    for (x = 0; x < n; x++) {
        array[x] = new double [n];
    }

    for (i = 0; i < n; i++) {
        for (j = 0; j < n; j++) {
            array[i][j] = rand() % 100;
        }
    }

    for (i = 0; i < n; i++) {
        for (j = 0; j < n; j++) {
            if (i == 0 && j == 0) {
                if (array[i][j] < array[i][j+1] && array[i][j] < array[i+1][j] && array[i][j] < array[i+1][j+1]) {
                    N = N + 1;
                }
            }
            else if (i == n - 1 && j == 0) {
                if (array[i][j] < array[i-1][j] && array[i][j] < array[i][j+1] && array[i][j] < array[i-1][j+1]) {
                    N = N + 1;
                }
            }
            else if (i == 0 && j == n - 1) {
                if (array[i][j] < array[i][j-1] && array[i][j] < array[i+1][j] && array[i][j] < array[i+1][j-1]) {
                    N = N + 1;
                }
            }
            else if (i == n - 1 && j == n - 1) {
                if (array[i][j] < array[i][j-1] && array[i][j] < array[i-1][j] && array[i][j] < array[i-1][j-1]) {
                    N = N + 1;
                }
            }
            else if (i == 0 && (j > 0 && j < n - 1)) {
                if (array[i][j] < array[i][j-1] && array[i][j] < array[i][j+1] && array[i][j] < array[i+1][j-1]
                    && array[i][j] < array[i+1][j] && array[i][j] < array[i+1][j+1]) {
                    N = N + 1;
                }
            }
            else if ((i > 0 && i < n - 1) && j == 0) {
                if (array[i][j] < array[i-1][j] && array[i][j] < array[i+1][j] && array[i][j] < array[i-1][j+1]
                    && array[i][j] < array[i][j+1] && array[i][j] < array[i+1][j+1]) {
                    N = N + 1;
                }
            }
            else if ((i > 0 && i < n - 1) && j == n - 1) {
                if (array[i][j] < array[i-1][j] && array[i][j] < array[i+1][j] && array[i][j] < array[i-1][j-1]
                    && array[i][j] < array[i][j-1] && array[i][j] < array[i+1][j-1]) {
                    N = N + 1;
                }
            }
            else if (i == n - 1 && (j > 0 && j < n - 1)) {
                if (array[i][j] < array[i][j-1] && array[i][j] < array[i][j+1] && array[i][j] < array[i-1][j-1]
                    && array[i][j] < array[i-1][j] && array[i][j] < array[i-1][j+1]) {
                    N = N + 1;
                }
            }
            else if ((i > 0 && i < n - 1) && (j > 0 && j < n - 1)) {
                if (array[i][j] < array[i-1][j-1] && array[i][j] < array[i][j-1] && array[i][j] < array[i+1][j-1]
                    && array[i][j] < array[i-1][j] && array[i][j] < array[i+1][j] && array[i][j] < array[i-1][j+1]
                    && array[i][j] < array[i][j+1] && array[i][j] < array[i+1][j+1]) {
                    N = N + 1;
                }
            }
            else {
                cout << "There are no local minimums";
            }
        }
    }

    for (i = 0; i < n; i++) {
        for (j = 0; j < n; j++) {
            cout << array[i][j] << " " << "\t";
        }
        cout << "\n";
    }

    for (x = 0; x < n; x++) {
        delete []array[x];
    }

    delete []array;

    cout << "The number of local minimums:" << " --- " << N;
    return 0;
}
