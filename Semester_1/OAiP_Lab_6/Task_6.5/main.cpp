#include <iostream>
#include <cmath>

int main() {
    int set_num;
    std::string str1, str2;
    long long length;
    double mod;
    int n;

    while (true) {
        std::cout << "Enter the number of sets: " << "\n";
        std::cin >> set_num;
        if (std::cin.fail() || set_num > 100 || set_num < 1) {
            std::cin.clear();
            std::cin.ignore(32767, '\n');
            std::cout << "Try again" << "\n";
        } else {
            break;
        }
    }

    while (set_num--) {

        while (true) {
            std::cout << "Enter the length of the whole string: " << "\n";
            std::cin >> length;
            if (std::cin.fail() || length > pow(10, 9) || length < 1) {
                std::cin.clear();
                std::cin.ignore(32767, '\n');
                std::cout << "Try again" << "\n";
            } else {
                break;
            }
        }

        while (true) {
            std::cout << "Enter the module: " << "\n";
            std::cin >> mod;
            if (std::cin.fail() || mod > pow(10, 4) || mod < 1) {
                std::cin.clear();
                std::cin.ignore(32767, '\n');
                std::cout << "Try again" << "\n";
            } else {
                break;
            }
        }

        std::cout << "Enter the first string: " << "\n";
        std::cin >> str1;
        std::cout << "Enter the second string: " << "\n";
        std::cin >> str2;

        int len_str1 = str1.length();
        int len_str2 = str2.length();

        if (length >= len_str1 + len_str2) {
            n = ((int)pow(26, length - len_str1 - len_str2) % (int)mod) * 2;
        } else {
            if (2 * length < len_str1 + len_str2) {
                n = 0;
                std::cout << n << " --- " << "The number of possible strings with mod" << "\n";
                break;
            }

            int delta = len_str1 + len_str2 - length;

            if (str1.substr(len_str1 - delta, delta) == str2.substr(0, delta) ||
                str2.substr(len_str2 - delta, delta) == str1.substr(0, delta)) {
                n = 1;
            } else {
                n = 0;
            }
        }

        std::cout << n << " --- " << "The number of possible strings with mod" << "\n";
    }

    return 0;
}
