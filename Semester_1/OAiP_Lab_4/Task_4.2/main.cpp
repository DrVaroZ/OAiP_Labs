#include <iostream>
#include <cstdlib>

using namespace std;

int main() {
    int i, j, sum, n, m;
    n = 10;
    m = 8;
    sum = 0;
    int array[n][m];

    for (i = 0; i < n; i++) {
        for (j = 0; j < m; j++) {
            array[i][j] = rand();
        }
    }

    for (i = 1; i < n; i++) {
        if (i % 2 == 0) {
            for (j = 0; j < m; j++) {
                sum = sum + array[i][j];
            }
        }
    }

    for (i = 0; i < n; i++) {
        for (j = 0; j < m; j++) {
            cout << array[i][j] << " " << "\t";
        }
        cout << "\n";
    }

    cout << endl;
    cout << sum << " --- " << "The summary of elements from even rows";
    return 0;
}
