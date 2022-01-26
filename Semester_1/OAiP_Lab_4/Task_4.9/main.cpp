#include <iostream>

int getRaw_A() {
    while (true) {
        std::cout << "Enter a natural n --- raw for matrix A: " << std::endl;
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

int getColumn_Raw_AB() {
    while (true) {
        std::cout << "Enter a natural k --- column for matrix A and raw for matrix B: " << std::endl;
        int k;
        std::cin >> k;

        if (k <= 0) {
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
                return k;
            }
        }
    }
}

int getColumn_B() {
    while (true) {
        std::cout << "Enter a natural m --- column for B: " << std::endl;
        int m;
        std::cin >> m;

        if (m <= 0) {
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
                return m;
            }
        }
    }
}

int main() {
    int i, j, y, x;
    int n = getRaw_A();
    int k = getColumn_Raw_AB();
    int m = getColumn_B();
    auto **matrix_A = new double* [n];
    auto **matrix_B = new double* [k];
    auto **matrix_C = new double* [n];

    for (x = 0; x < n; x++) {
        matrix_A[x] = new double [k];
    }

    for (x = 0; x < k; x++) {
        matrix_B[x] = new double [m];
    }

    for (x = 0; x < n; x++) {
        matrix_C[x] = new double [m];
    }

    for (i = 0; i < n; i++) {
        for (j = 0; j < k; j++) {
            matrix_A[i][j] = rand() % 100;
        }
    }

    for (i = 0; i < n; i++) {
        for (j = 0; j < k; j++) {
            std::cout << matrix_A[i][j] << " " << "\t";
        }
        std::cout << "\n";
    }

    for (i = 0; i < k; i++) {
        for (j = 0; j < m; j++) {
            matrix_B[i][j] = rand() % 100;
        }
    }

    std::cout << std::endl;

    for (i = 0; i < k; i++) {
        for (j = 0; j < m; j++) {
            std::cout << matrix_B[i][j] << " " << "\t";
        }
        std::cout << "\n";
    }

    for (i = 0; i < n; i++) {
        for (j = 0; j < m; j++) {
            matrix_C[i][j] = 0;
            for (y = 0; y < k; y++) {
                matrix_C[i][j] = matrix_C[i][j] + matrix_A[i][y] * matrix_B[y][j];
            }
        }
    }

    std::cout << std::endl;

    for (i = 0; i < n; i++) {
        for (j = 0; j < m; j++) {
            std::cout << matrix_C[i][j] << " " << "\t";
        }
        std::cout << "\n";
    }

    for (x = 0; x < n; x++) {
        delete []matrix_A[x];
    }

    delete []matrix_A;

    for (x = 0; x < k; x++) {
        delete []matrix_B[x];
    }

    delete []matrix_B;

    for (x = 0; x < n; x++) {
        delete []matrix_C[x];
    }

    delete []matrix_C;

    return 0;
}
