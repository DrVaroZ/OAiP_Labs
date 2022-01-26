#include <iostream>

int getNumber() {
    while (true) {
        std::cout << "Enter a natural n of extenders: " << std::endl;
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

int getSockets() {
    while (true) {
        std::cout << "Enter a natural n of sockets in extender: " << std::endl;
        int k;
        std::cin >> k;

        if (k <= 0) {
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
                return k;
            }
        }
    }
}

int main() {
    int i, x, sum, sockets;
    int n = getNumber();
    auto *array = new int [n];

    sum = 0;

    for (x = 0; x < n; x++) {
        int k = getSockets();
        array[x] = k;
    }

    for (i = 0; i < n; i++) {
        std::cout << array[i] << " ";
    }

    for (i = 0; i < n; i++) {
        sum = sum + array[i];
    }

    sockets = sum - (n - 1);
    std::cout << std::endl << sockets << " --- " << "The number of sockets";

    delete []array;

    return 0;
}
