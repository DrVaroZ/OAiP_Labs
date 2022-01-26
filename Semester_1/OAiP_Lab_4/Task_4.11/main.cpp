#include <iostream>

int getNumber() {
    while (true) {
        std::cout << "Enter a natural n --- size of array: " << std::endl;
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

void starLine() {
    for (int x = 0; x < 30; x++) {
        std::cout << '*';
    }
}

int main() {
    int i, j, k;
    int n = getNumber();
    auto ***cube = new double** [n];

    double sum1 = 0;
    double sum2 = 0;

    for (i = 0; i < n; i++) {
        cube[i] = new double* [n];
        for (j = 0; j < n; j++) {
            cube[i][j] = new double[n];
        }
    }

    for (i = 0; i< n; i++) {
        for (j = 0; j < n; j++) {
            for (k = 0; k < n; k++) {
                cube[i][j][k] = rand() % 100;
            }
        }
    }

    for (i = 0; i < n; i++) {
        for (j = 0; j < n; j++) {
            for (k = 0; k < n; k++) {
                std::cout << cube[i][j][k] << " " << "\t";
            }
            std::cout << "\n";
        }
        std::cout << "\n";
    }

    starLine();
    std::cout << std::endl;

    for (i = 0; i < n; i++) {
        j = i;
        k = i;
        sum1 = sum1 + cube[i][j][k];
    }

    for (i = n - 1; i >= 0; i--) {
        j = i;
        k = n - 1 - i;
        sum2 = sum2 + cube[i][j][k];
    }

    if (sum1 > sum2) {
        std::cout << sum1 << " --- " << "Diagonal 1 summary";
    } else {
        std::cout << sum2 << " --- " << "Diagonal 2 summary";
    }

    for (i = 0; i < n; i++) {
        for (j = 0; j < n; j++) {
            delete[] cube[i][j];
        }
    }

    for (i = 0; i < n; i++) {
        delete[] cube[i];
    }

    delete[] cube;

    return 0;
}
