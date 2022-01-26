#include "task2.h"

#include <iostream>

int main() {
    int i;
    int n = recursion::getNumber();
    auto *array = new int [n];

    for (i = 0; i < n; i++) {
        int a = recursion::getArray();
        array[i] = a;
    }

    for (i = 0; i < n; i++) {
        std::cout << array[i] << " ";
    }

    std::cout << "\n" << recursion::Compare(array, 0, n - 1);

    delete []array;

    return 0;
}
