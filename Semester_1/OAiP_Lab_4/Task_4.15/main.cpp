#include <iostream>

int getSide() {
    while (true) {
        std::cout << "Enter a side of square: " << std::endl;
        int n;
        std::cin >> n;

        if (n <= 0) {
            std::cin.clear();
            std::cin.ignore(32767,'\n');
            std::cout << "Please try again" << std::endl;
        }  else {
            if (std::cin.fail()) {
                std::cin.clear();
                std::cin.ignore(32767,'\n');
                std::cout << "Please try again" << std::endl;
            } else {
                std::cin.ignore(32767,'\n');
                return n;
            }
        }
    }
}

int getNumber() {
    while (true) {
        std::cout << "Enter a natural number N: " << std::endl;
        int N;
        std::cin >> N;

        if (N <= 0) {
            std::cin.clear();
            std::cin.ignore(32767,'\n');
            std::cout << "Please try again" << std::endl;
        }  else {
            if (std::cin.fail()) {
                std::cin.clear();
                std::cin.ignore(32767,'\n');
                std::cout << "Please try again" << std::endl;
            } else {
                std::cin.ignore(32767,'\n');
                return N;
            }
        }
    }
}

int main() {
    int i, j, k;
    int n = getSide();
    int N = getNumber();
    auto **square = new double* [n];

    int max = n * n;

    for (i = 0; i < n; i++) {
        square[i] = new double [n];
    }

    for (k = n - 1; k >= 0; k--) {
        for (i = k; i >= 0; i--) {
            for (j = 0; j < k + 1; j++) {
                square[i][j] = max;
                if (j == i) {
                    for (i = k; i >= 0; i--) {
                        square[i][j] = max;
                        max = max - 1;
                    }
                } else {
                    max = max - 1;
                }
            }
        }
    }

    for (i = 0; i < n; i++) {
        for (j = 0; j < n; j++) {
            std::cout << square[i][j] << " " << "\t";
        }
        std::cout << "\n";
    }

    for (i = 0; i < n; i++) {
        for (j = 0; j < n; j++) {
            if (square[i][j] == N) {
                std::cout << std::endl << i << " --- " << "Raw";
                std::cout << std::endl << j << " --- " << "Column";
            }
        }
    }

    for (i = 0; i < n; i++) {
        delete []square[i];
    }

    delete []square;

    return 0;
}
