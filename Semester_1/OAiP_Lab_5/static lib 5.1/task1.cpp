#include "task1.h"

#include <iostream>

int check::getSize() {
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

int check::getMatrix_B() {
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

int check::getMatrix_C() {
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
