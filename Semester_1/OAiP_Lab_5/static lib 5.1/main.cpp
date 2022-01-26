#include <iostream>

#include "task1.h"

int main() {
    int i, j;
    int n = check::getSize();
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
            int b = check::getMatrix_B();
            matrix_B[i][j] = b;
        }
    }

    for (i = 0; i < n; i++) {
        for (j = 0; j < n; j++) {
            int c = check::getMatrix_C();
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
