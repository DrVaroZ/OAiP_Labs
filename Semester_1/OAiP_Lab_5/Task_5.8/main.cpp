#include <iostream>
#include <cmath>

int getNumber() {
    while (true) {
        std::cout << "Enter a natural number n: " << std::endl;
        int n;
        std::cin >> n;

        if (n <= 0 || n > pow(10, 9)) {
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

int UnevenDivider(int n, int max_uneven_divider) {
    if (n % 2 == 1) {
        max_uneven_divider = n;
        return max_uneven_divider;
    } else {
        return UnevenDivider(n / 2, max_uneven_divider);
    }
}

int Summary(int divider, int sum) {
    sum += divider;
    return sum;
}

int main() {
    int i;
    int divider;
    int n = getNumber();
    int max_uneven_divider = 1;
    int sum = 0;

    int max = UnevenDivider(n, max_uneven_divider);
    std::cout <<  max << " --- " << "The max even divider of number n" << "\n";

    for (i = max; i > 0; i--) {
        divider = UnevenDivider(i, max_uneven_divider);
        sum = Summary(divider, sum);
    }

    std::cout << sum << " --- " << "The summary of the sequence";

    return 0;
}
