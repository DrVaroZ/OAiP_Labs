#include <iostream>
#include <cmath>

int getSide() {
    while (true) {
        std::cout << "Enter a natural odd n, n mod 6 != 3: " << std::endl;
        int n;
        std::cin >> n;

        if (n < 3 || (n % 6 == 3 && n % 2 == 1) || n % 2 == 0) {
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

int main() {
    double M;
    int i, j, x;
    int n = getSide();
    auto **square = new double* [n];

    M = n * (pow(n, 2) + 1) / 2;

    for (x = 0; x < n; x++) {
        square[x] = new double [n];
    }

    for (i = 0; i < n; i++) {
        for (j = 0; j < n; j++) {
            if (n % 6 != 3) {
                square[i][j] = 1 + ((i + j + 1 + (n - 1) / 2) % n) * n + ((i + 2 * j + 5) % n);
            }
        }
    }

    for (i = 0; i < n; i++) {
        for (j = 0; j < n; j++) {
            std::cout << square[i][j] << " " << "\t";
        }
        std::cout << "\n";
    }

    std::cout << std::endl << "Magic constant" << " --- " << M;

    for (x = 0; x < n; x++) {
        delete []square[x];
    }

    delete []square;

    return 0;
}
