#include <iostream>

using namespace std;

int getRaw() {
    while (true) {
        cout << "Enter a natural n: " << endl;
        int n;
        cin >> n;

        if (n <= 0) {
            cin.clear();
            cin.ignore(32767,'\n');
            cout << "Please try again" << endl;
        }  else {
            if (cin.fail()) {
                cin.clear();
                cin.ignore(32767,'\n');
                cout << "Please try again" << endl;
            } else {
                cin.ignore(32767,'\n');
                return n;
            }
        }
    }
}

int getColumn() {
    while (true) {
        cout << "Enter a natural m: " << endl;
        int m;
        cin >> m;

        if (m <= 0) {
            cin.clear();
            cin.ignore(32767,'\n');
            cout << "Please try again" << endl;
        }  else {
            if (cin.fail()) {
                cin.clear();
                cin.ignore(32767,'\n');
                cout << "Please try again" << endl;
            } else {
                cin.ignore(32767,'\n');
                return m;
            }
        }
    }
}

int main() {
    double max;
    int i, j, x, a, b;
    int n = getRaw();
    int m = getColumn();
    auto **matrix_A = new double* [n];

    for (x = 0; x < n; x++) {
        matrix_A[x] = new double [m];
    }

    for (i = 0; i < n; i++) {
        for (j = 0; j < m; j++) {
            matrix_A[i][j] = rand() % 100;
        }
    }

    for (i = 0; i < n; i++) {
        for (j = 0; j < m; j++) {
            cout << matrix_A[i][j] << " " << "\t";
        }
        cout << "\n";
    }

    for (i = n - 1; i >= 0; i--) {
        for (j = m - 1; j >= 0; j--) {
            max = matrix_A[i][j];
            for (a = i; a >= 0; a--) {
                for (b = j; b >= 0 && b < (b + 1); b--) {
                    if (max < matrix_A[a][b]) {
                        max = matrix_A[a][b];
                    }
                }
            }
            matrix_A[i][j] = max;
        }
    }

    cout << endl;

    for (i = 0; i < n; i++) {
        for (j = 0; j < m; j++) {
            cout << matrix_A[i][j] << " " << "\t";
        }
        cout << "\n";
    }

    for (x = 0; x < n; x++) {
        delete []matrix_A[x];
    }

    delete []matrix_A;

    return 0;
}
