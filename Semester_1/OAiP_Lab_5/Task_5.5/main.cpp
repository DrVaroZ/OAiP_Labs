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

int getArray(int** matrix, int n, int m, int* array, int new_size) {
    int size = 0;
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < m; j++) {
            if (j % 2 == 0) {
                array[size++] = matrix[i][j];
            }
        }
    }

    for (int i = 0; i < size; i++) {
        if (array[i] % 2 == 1) {
            array[new_size++] = array[i];
        }
    }

    return new_size;
}

int Summary(const int* array, int new_size, int sum) {
    for (int i = 0; i < new_size; i++) {
        sum += array[i];
    }
    return sum;
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

    int count = 0;
    int sum = 0;
    int new_size = 0;

    for (i = 0; i < n; i++) {
        for (j = 0; j < m; j++) {
            if (j % 2 == 0) {
                count += 1;
            }
        }
    }

    auto *array = new int [count];

    new_size = getArray(matrix, n, m, array, new_size);
    std::cout << new_size << " --- " << "Number of elements of new array" << std::endl;

    sum = Summary(array, new_size, sum);

    int average = sum / new_size;
    std::cout << average << " --- " << "An average arithmetic value of the elements of new array" << "\n";

    std::cout << "Array of odd numbers from even columns: " << "\n";
    for (i = 0; i < new_size; i++) {
        std::cout << array[i] << " ";
    }

    for (i = 0; i < n; i++) {
        delete []matrix[i];
    }
    delete []matrix;

    delete []array;

    return 0;
}
