#include <iostream>
#include <string>

int getNumber() {
    while (true) {
        std::cout << "Enter a natural number n: " << std::endl;
        int n;
        std::cin >> n;

        if (std::cin.fail()) {
            std::cin.clear();
            std::cin.ignore(32767,'\n');
            std::cout << "Please try again" << std::endl;
        }
        else {
            if (n <= 0) {
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

int getDigit() {
    while (true) {
        std::cout << "Enter a natural digit x: " << std::endl;
        int x;
        std::cin >> x;

        if (std::cin.fail()) {
            std::cin.clear();
            std::cin.ignore(32767,'\n');
            std::cout << "Please try again" << std::endl;
        }
        else {
            if (x < 0) {
                std::cin.clear();
                std::cin.ignore(32767,'\n');
                std::cout << "Please try again" << std::endl;
            } else {
                std::cin.ignore(32767,'\n');
                return x;
            }
        }
    }
}

int main() {
    int i, N;
    int n = getNumber();
    int x = getDigit();
    std::string str = std::to_string(n);
    N = str.length();
    char array[N];

    if (x > N) {
        std::cin.clear();
        std::cin.ignore(32767,'\n');
        std::cout << "Please try again" << std::endl;
    }

    std::cout << std::endl;
    std::cout << "The number of digits" << " --- " << N << std::endl;

    for (i = N - 1; i >= 0; i--) {
        array[i] = str[i];
    }

    for (i = 0; i < N; i++) {
        if (i == N - x - 1) {
            std::cout << "In digit " << x << " the numeral" << " --- " << array[i];
        }
    }

    return 0;
}
