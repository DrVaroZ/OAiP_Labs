#include <iostream>

int getRaw() {
    while (true) {
        std::cout << "Enter a natural n --- number of raws: " << std::endl;
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

int getColumn() {
    while (true) {
        std::cout << "Enter a natural m --- number of columns: " << std::endl;
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

double getMatrix() {
    while (true) {
        std::cout << "Enter a float element of the matrix: " << std::endl;
        double a;
        std::cin >> a;

        if (std::cin.fail()) {
            std::cin.clear();
            std::cin.ignore(32767,'\n');
            std::cout << "Please try again" << std::endl;
        } else {
            std::cin.ignore(32767,'\n');
            return a;
        }
    }
}

void PrintMatrix(double** matrix, int n, int m) {
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < m; j++) {
            std::cout << matrix[i][j] << " " << "\t";
        }
        std::cout << "\n";
    }
}

int FindZero(double** matrix, int n, int m, int zero_count) {
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < m; j++) {
            if (matrix[i][j] == 0) {
                zero_count += 1;
                std::cout << "The index of zero-element of the matrix:" << "\n";
                std::cout << i << " - " << "Raw" << "\t" << j << " - " << "Column" << "\n";
            }
        }
    }
    return zero_count;
}

void InvertMatrix(double** matrix, int n, int m) {
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < m; j++) {
            double temp;
            if (m % 2 == 1) {
                if (j <= m / 2) {
                    temp = matrix[i][j];
                    matrix[i][j] = matrix[i][m - j - 1];
                    matrix[i][m - j - 1] = temp;
                }
            } else {
                if (j < m / 2) {
                    temp = matrix[i][j];
                    matrix[i][j] = matrix[i][m - j - 1];
                    matrix[i][m - j - 1] = temp;
                }
            }
        }
    }

    for (int i = 0; i < n; i++) {
        for (int j = 0; j < m; j++) {
            double temp;
            if (n % 2 == 1) {
                if (i <= n / 2) {
                    temp = matrix[i][j];
                    matrix[i][j] = matrix[n - i - 1][j];
                    matrix[n - i - 1][j] = temp;
                }
            } else {
                if (i < n / 2) {
                    temp = matrix[i][j];
                    matrix[i][j] = matrix[n - i - 1][j];
                    matrix[n - i - 1][j] = temp;
                }
            }
        }
    }

    for (int i = 0; i < n; i++) {
        for (int j = 0; j < m; j++) {
            std::cout << matrix[i][j] << " " << "\t";
        }
        std::cout << "\n";
    }
}

int main() {
    int i, j;
    int n = getRaw();
    int m = getColumn();
    int zero_count = 0;
    auto **matrix = new double* [n];

    for (i = 0; i < n; i++) {
        matrix[i] = new double [m];
    }

    for (i = 0; i < n; i++) {
        for (j = 0; j < m; j++) {
            double a = getMatrix();
            matrix[i][j] = a;
        }
    }

    std::cout << "Matrix: " << "\n";
    PrintMatrix(matrix, n, m);

    zero_count = FindZero(matrix, n, m, zero_count);
    std::cout << "\n" << zero_count << " --- " << "The number of zeros in matrix" << "\n";

    std::cout << "Vice versa matrix: " << "\n";
    InvertMatrix(matrix, n, m);

    for (i = 0; i < n; i++) {
        delete []matrix[i];
    }
    delete []matrix;

    return 0;
}
