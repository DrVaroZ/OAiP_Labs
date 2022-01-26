#include <iostream>

int getStart() {
    while (true) {
        std::cout << "Enter a natural p --- the first number of sequence: " << std::endl;
        int p;
        std::cin >> p;

        if (p <= 0) {
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
                return p;
            }
        }
    }
}

int getFinal() {
    while (true) {
        std::cout << "Enter a natural q --- the last number of sequence: " << std::endl;
        int q;
        std::cin >> q;

        if (q <= 0) {
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
                return q;
            }
        }
    }
}

int Change(int n) {
    if (n % 10 > 0) {
        return (n % 10);
    } else if (n == 0) {
        return 0;
    } else {
        return Change(n / 10);
    }
}

int Summary(int n, int sum) {
    sum += n;
    return sum;
}

int main() {
    int i;
    int p = getStart();
    int q = getFinal();
    int n;
    int sum = 0;

    for (i = p; i < q + 1; i++) {
        n = Change(i);
        std::cout << n << "\t";
        sum = Summary(n, sum);
    }

    std::cout << "\n" << sum << " --- " << "The summary of the sequence";

    return 0;
}
