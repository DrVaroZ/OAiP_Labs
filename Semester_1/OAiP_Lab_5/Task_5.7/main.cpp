#include <iostream>

unsigned long long Mod(unsigned long long k, unsigned long long n,
                           unsigned long long m) {
    if (!n) {
        return 1;
    }

    unsigned long long p = Mod(k, n / 2, m);

    if (n % 2 == 0) {
        return (p * p) % m;
    }

    return (k * p * p) % m;
}

int main() {
    int count = 0;

    while (true) {
        unsigned long long k, n;
        int t;
        unsigned long long m = 1;

        std::cout << "Enter k, n, t or 0, 0, 0 to exit: ";
        std::cin >> k >> n >> t;

        while (std::cin.fail() || k < 0 || n < 0 || t > 9) {
            std::cin.clear();
            std::cin.ignore(32767, '\n');
            std::cout << "Enter k, n, t or 0, 0, 0 to exit: ";
        }

        if (k == 0 && n == 0 && t == 0) {
            break;
        }

        for (int i = 0; i < t; i++) {
            m *= 10;
        }

        k %= m;

        count++;

        std::cout << "Case #" << count << ": " << Mod(k, n, m) << "\n";
    }

    return 0;
}
