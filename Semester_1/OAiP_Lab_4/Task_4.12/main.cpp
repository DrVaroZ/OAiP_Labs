#include <iostream>

int getNumber() {
    while (true) {
        std::cout << "Enter a natural n: " << std::endl;
        int n;
        std::cin >> n;

        if (std::cin.fail()) {
            std::cin.clear();
            std::cin.ignore(32767,'\n');
            std::cout << "Please try again" << std::endl;
        }
        else {
            std::cin.ignore(32767,'\n');
            return n;
        }
    }
}

int getArray() {
    while (true) {
        std::cout << "Enter a natural array[i]: " << std::endl;
        int x;
        std::cin >> x;

        if (std::cin.fail()) {
            std::cin.clear();
            std::cin.ignore(32767,'\n');
            std::cout << "Please try again" << std::endl;
        }
        else {
            std::cin.ignore(32767,'\n');
            return x;
        }
    }
}

int main() {
    int i, j, k;
    int n = getNumber();
    auto *array = new int [n + 1];

    for (i = 0; i < n; i++) {
        int x = getArray();
        array[i] = x;
    }

    for (i = 0; i < n; i++) {
        std::cout << array[i] << " ";
    }

    std::cout << std::endl;

    for (i = 0; i < n; i++) {
        for (j = i + 1; j < n; j = j + 0) {
            if (array[i] == array[j]) {
                for(k = j; k < (n - 1); k++) {
                    array[k] = array[k + 1];
                }
                n = n - 1;
            } else {
                j = j + 1;
            }
        }
    }

    for (i = 0; i < n; i++) {
        std::cout << array[i] << " ";
    }

    std::cout << std::endl << n << " --- " << "New size of array";

    delete []array;

    return 0;
}
