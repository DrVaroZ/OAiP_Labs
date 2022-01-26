#include <iostream>

int getSize() {
    while (true) {
        std::cout << "Enter a natural n -- size of the matrix A, B and C: " << std::endl;
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

int getMatrix_B() {
    while (true) {
        std::cout << "Enter an integer element of the matrix B: " << std::endl;
        int b;
        std::cin >> b;

        if (std::cin.fail()) {
            std::cin.clear();
            std::cin.ignore(32767,'\n');
            std::cout << "Please try again" << std::endl;
        } else {
            std::cin.ignore(32767,'\n');
            return b;
        }
    }
}

int getMatrix_C() {
    while (true) {
        std::cout << "Enter an integer element of the matrix C: " << std::endl;
        int c;
        std::cin >> c;

        if (std::cin.fail()) {
            std::cin.clear();
            std::cin.ignore(32767,'\n');
            std::cout << "Please try again" << std::endl;
        } else {
            std::cin.ignore(32767,'\n');
            return c;
        }
    }
}

int main() {
    int i, j;
    int n = getSize();
    auto **matrix_A = new int* [n];
    auto **matrix_B = new int* [n];
    auto **matrix_C = new int* [n];

    for (i = 0; i < n; i++) {
        matrix_A[i] = new int [n];
        matrix_B[i] = new int [n];
        matrix_C[i] = new int [n];
    }

    for (i = 0; i < n; i++) {
        for (j = 0; j < n; j++) {
            int b = getMatrix_B();
            matrix_B[i][j] = b;
        }
    }

    for (i = 0; i < n; i++) {
        for (j = 0; j < n; j++) {
            int c = getMatrix_C();
            matrix_C[i][j] = c;
        }
    }

    for (i = 0; i < n; i++) {
        for (j = 0; j < n; j++) {
            if (abs(matrix_B[i][j]) > abs(matrix_C[i][j])) {
                matrix_A[i][j] = matrix_B[i][j];
            } else {
                matrix_A[i][j] = matrix_C[i][j];
            }
        }
    }

    std::cout << "Matrix B: " << "\n";

    for (i = 0; i < n; i++) {
        for (j = 0; j < n; j++) {
            std::cout << matrix_B[i][j] << " " << "\t";
        }
        std::cout << "\n";
    }

    std::cout << "Matrix C: " << "\n";

    for (i = 0; i < n; i++) {
        for (j = 0; j < n; j++) {
            std::cout << matrix_C[i][j] << " " << "\t";
        }
        std::cout << "\n";
    }

    std::cout << "Matrix A: " << "\n";

    for (i = 0; i < n; i++) {
        for (j = 0; j < n; j++) {
            std::cout << matrix_A[i][j] << " " << "\t";
        }
        std::cout << "\n";
    }

    for (i = 0; i < n; i++) {
        delete []matrix_A[i];
        delete []matrix_B[i];
        delete []matrix_C[i];
    }

    delete []matrix_A;
    delete []matrix_B;
    delete []matrix_C;

    return 0;
}
