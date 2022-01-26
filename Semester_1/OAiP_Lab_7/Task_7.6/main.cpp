#include <iostream>
#include <cmath>

int main() {
    int set_num;
    unsigned long num;

    while (true) {
        std::cout << "Enter the number of sets: " << "\n";
        std::cin >> set_num;
        if (std::cin.fail() || set_num > 1000 || set_num < 1) {
            std::cin.clear();
            std::cin.ignore(32767, '\n');
            std::cout << "Try again" << "\n";
        } else {
            break;
        }
    }

    while (set_num--) {
        unsigned long count;

        while (true) {
            std::cout << "Enter the number (maximum): " << "\n";
            std::cin >> num;
            if (std::cin.fail() || num > pow(10, 9) || num < 1) {
                std::cin.clear();
                std::cin.ignore(32767, '\n');
                std::cout << "Try again" << "\n";
            } else {
                break;
            }
        }

        count = (num + 1) / 10;
        std::cout << count << " --- " << "The number of interesting numbers\n";
    }

    return 0;
}
