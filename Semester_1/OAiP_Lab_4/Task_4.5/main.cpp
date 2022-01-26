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
    int i, j, x, a, b;
    int n = getNumber();
    auto **array = new double* [n];
    auto **smooth = new double* [n];

    for (x = 0; x < n; x++) {
        array[x] = new double [n];
        smooth[x] = new double [n];
    }

    for (i = 0; i < n; i++) {
        for (j = 0; j < n; j++) {
            array[i][j] = rand() % 100;
        }
    }

    for (i = 0; i < n; i++) {
        for (j = 0; j < n; j++) {
            for (a = i; a < n; a++) {
                for (b = j; b < n; b++) {
                    if (i == 0 && j == 0) {
                        smooth[a][b] = (array[i][j+1] + array[i+1][j] + array[i+1][j+1]) / 3;
                    }
                    else if (i == n - 1 && j == 0) {
                        smooth[a][b] = (array[i][j+1] + array[i-1][j] + array[i-1][j+1]) / 3;
                    }
                    else if (i == 0 && j == n - 1) {
                        smooth[a][b] = (array[i][j-1] + array[i+1][j] + array[i+1][j-1]) / 3;
                    }
                    else if (i == n - 1 && j == n - 1) {
                        smooth[a][b] = (array[i][j-1] + array[i-1][j] + array[i-1][j-1]) / 3;
                    }
                    else if (i == 0 && (j > 0 && j < n - 1)) {
                        smooth[a][b] = (array[i][j-1] + array[i][j+1] + array[i+1][j-1] + array[i+1][j]
                                + array[i+1][j+1]) / 5;
                    }
                    else if ((i > 0 && i < n - 1) && j == 0) {
                        smooth[a][b] = (array[i-1][j] + array[i+1][j] + array[i-1][j+1] + array[i][j+1]
                                + array[i+1][j+1]) / 5;
                    }
                    else if ((i > 0 && i < n - 1) && j == n - 1) {
                        smooth[a][b] = (array[i-1][j] + array[i+1][j] + array[i-1][j-1] + array[i][j-1]
                                + array[i+1][j-1]) / 5;
                    }
                    else if (i == n - 1 && (j > 0 && j < n - 1)) {
                        smooth[a][b] = (array[i][j-1] + array[i][j+1] + array[i-1][j-1] + array[i-1][j]
                                + array[i-1][j+1]) / 5;
                    }
                    else if ((i > 0 && i < n - 1) && (j > 0 && j < n - 1)) {
                        smooth[a][b] = (array[i-1][j-1] + array[i][j-1] + array[i+1][j-1] + array[i-1][j]
                                + array[i+1][j] + array[i-1][j+1] + array[i][j+1] + array[i+1][j+1]) / 8;
                    }
                }
            }
        }
    }

    for (i = 0; i < n; i++) {
        for (j = 0; j < n; j++) {
            cout << array[i][j] << " " << "\t";
        }
        cout << "\n";
    }

    cout << endl;

    for (a = 0; a < n; a++) {
        for (b = 0; b < n; b++) {
            cout << smooth[a][b] << " " << "\t";
        }
        cout << "\n";
    }

    for (x = 0; x < n; x++) {
        delete []array[x];
        delete []smooth[x];
    }

    delete []array;
    delete []smooth;

    return 0;
}
