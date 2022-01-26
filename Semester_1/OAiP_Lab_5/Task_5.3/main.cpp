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

int getMatrix() {
    while (true) {
        std::cout << "Enter an integer element of the matrix: " << std::endl;
        int a;
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

void PrintMatrix(int** matrix, int n, int m) {
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < m; j++) {
            std::cout << matrix[i][j] << " " << "\t";
        }
        std::cout << "\n";
    }
}

int getArray(int* array, int k, int** matrix, int n, int m, int f) {
    for (int i = 0; i < n; i++) {
        int j = i;
        if (j < m && i < n) {
            array[i] = matrix[i][j];
        }
    }

    for (int i = 0; i < k; i++) {
        if (array[i] % 2 == 0) {
            array[f++] = array[i];
        }
    }

    return f;
}

int Product(const int* array, int f, int product) {
    if (f == 0) {
        product = 0;
    } else {
        for (int i = 0; i < f; i++) {
            product = product * array[i];
        }
    }
    return product;
}

int main() {
    int i, j;
    int n = getRaw();
    int m = getColumn();
    auto **matrix = new int* [n];

    for (i = 0; i < n; i++) {
        matrix[i] = new int [m];
    }

    for (i = 0; i < n; i++) {
        for (j = 0; j < m; j++) {
            int a = getMatrix();
            matrix[i][j] = a;
        }
    }

    std::cout << "Matrix: " << "\n";
    PrintMatrix(matrix, n, m);

    int k = 0;
    int f = 0;
    int product = 1;

    for (i = 0; i < n; i++) {
        j = i;
        if (j < m && i < n) {
            k = k + 1;
        }
    }

    auto *array = new int [k];

    f = getArray(array, k, matrix, n, m, f);
    std::cout << f << " --- " << "Number of elements of new array" << std::endl;

    std::cout << "Array of even numbers from main diagonal: " << "\n";
    for (i = 0; i < f; i++) {
        std::cout << array[i] << " ";
    }

    product = Product(array, f, product);
    std::cout << std::endl << "Product of elements from main diagonal: " << product;

    for (i = 0; i < n; i++) {
        delete []matrix[i];
    }
    delete []matrix;

    delete []array;

    return 0;
}
