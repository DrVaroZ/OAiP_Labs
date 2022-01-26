#include <iostream>

int getNumber() {
    while (true) {
        std::cout << "Enter an integer n: " << std::endl;
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

int main() {
    int i, j, x, min, max, index_min, index_max, sum_0;
    int n = getNumber();
    auto *array = new int [n];

    for (x = 0; x < n; x++) {
        array[x] = rand() % 100;
    }

    min = array[0];
    max = array[0];
    index_min = 0;
    index_max = 0;
    sum_0 = 0;

    for (i = 0; i < n; i++) {
        std::cout << array[i] << " ";
    }

    for (i = 0; i < n; i++) {
        if (min >= array[i]) {
            min = array[i];
            index_min = i;
        }
    }

    for (i = 0; i < n; i++) {
        if (max <= array[i]) {
            max = array[i];
            index_max = i;
        }
    }

    std::cout << std::endl;

    for (i = index_min + 1; i < index_max; i++) {
        array[i] = 0;
        sum_0 = sum_0 + 1;
    }

    if (min == 0) {
        sum_0 = sum_0 + 1;
    }

    if (sum_0 > (n - sum_0)) {
        for(i = 0; i < n; i++) {
            if(array[i] == 0) {
                for(j = i; j < (n - 1); j++) {
                    array[j] = array[j + 1];
                }
                i--;
                n--;
            }
        }
    }

    for (i = 0; i < n; i++) {
        std::cout << array[i] << " ";
    }

    delete []array;

    std::cout << std::endl;
    std::cout << "The number of zeros" << " --- " << sum_0 << std::endl;
    std::cout << "Index of MIN " << " --- " << index_min << std::endl;
    std::cout << "Index of MAX " << " --- " << index_max << std::endl;
    std::cout << "MIN" << " --- " << min << std::endl;
    std::cout << "MAX" << " --- " << max;

    return 0;
}
