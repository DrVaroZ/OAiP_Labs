#include <iostream>
#include <algorithm>
#include <cmath>

std::string ConvertThird(long long num_10th, std::string num_3rd) {
    long long residue;
    while (num_10th != 0) {
        residue = num_10th % 3;
        num_3rd += std::to_string(residue);
        num_10th /= 3;
    }
    return num_3rd;
}

int main() {
    std::string num_3rd;
    long long num_10th;

    while (true) {
        std::cout << "Enter a number to convert:\n";
        std::cin >> num_10th;
        if (std::cin.fail() || num_10th < 1 || (double)num_10th > 2 * pow(10, 9)) {
            std::cin.clear();
            std::cin.ignore(32767, '\n');
            std::cout << "Try again\n";
        }
        else {
            break;
        }
    }

    num_3rd = ConvertThird(num_10th, num_3rd);
    std::reverse(num_3rd.begin(), num_3rd.end());

    for (int i = 0; i < (int)num_3rd.size(); i++) {
        if (num_3rd[i] == '0') {
            num_3rd[i] = '3';
        }
    }

    std::cout << num_3rd;
    return 0;
}
