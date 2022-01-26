#include <iostream>

int getNumber() {
    while (true) {
        std::cout << "Enter an integer n: " << std::endl;
        int n;
        std::cin >> n;

        if (n <= 0) {
            std::cin.clear();
            std::cin.ignore(32767,'\n');
            std::cout << "Please try again" << std::endl;
        } else {
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
}

int getArray() {
    while (true) {
        std::cout << "Enter an integer a --- element of the array: " << std::endl;
        int a;
        std::cin >> a;

        if (std::cin.fail()) {
            std::cin.clear();
            std::cin.ignore(32767,'\n');
            std::cout << "Please try again" << std::endl;
        }
        else {
            std::cin.ignore(32767,'\n');
            return a;
        }
    }
}

bool Compare(int *array, int first, int second) {
    if (first == second) {
        int x = array[first];
        return (x <= first * first);
    }
    int middle = (second + first) / 2;
    return Compare(array, first, middle) || Compare(array, middle + 1, second);
}

int main() {
    int i;
    int n = getNumber();
    auto *array = new int [n];

    for (i = 0; i < n; i++) {
        int a = getArray();
        array[i] = a;
    }

    for (i = 0; i < n; i++) {
        std::cout << array[i] << " ";
    }

    std::cout << "\n" << Compare(array, 0, n - 1);

    delete []array;

    return 0;
}
