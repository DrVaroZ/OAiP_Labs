#include <iostream>
#include <cmath>

int ConvertTenth(std::string str, int num_10th) {
    for (int i = 0; i < str.size(); i++) {
        if (str[i] == 'A') {
            num_10th = num_10th + 10 * pow(14, (int)str.size() - 1 - i);
        } else if (str[i] == 'B') {
            num_10th = num_10th + 11 * pow(14, (int)str.size() - 1 - i);
        } else if (str[i] == 'C') {
            num_10th = num_10th + 12 * pow(14, (int)str.size() - 1 - i);
        } else if (str[i] == 'D') {
            num_10th = num_10th + 13 * pow(14, (int)str.size() - 1 - i);
        } else if (isdigit(str[i])) {
            num_10th = num_10th + (str[i] - '0') * pow(14, (int)str.size() - 1 - i);
        }
    }
    return num_10th;
}

std::string ConvertThird(int num_10th, std::string num_3th) {
    int residue;
    while (num_10th != 0) {
        residue = num_10th % 3;
        num_3th += std::to_string(residue);
        num_10th /= 3;
    }
    return num_3th;
}

int main() {
    int num_10th = 0;
    std::string num_14th, num_3th;
    std::cout << "Enter a number in 14th calculus system (only digits and A, B, C, D): ";
    std::cin >> num_14th;

    num_10th = ConvertTenth(num_14th, num_10th);
    std::cout << "The number in 10th calculus system:" << "\n";
    std::cout << num_10th << "\n";

    num_3th = ConvertThird(num_10th, num_3th);
    std::cout << "The number in 3th calculus system:" << "\n";
    for (int i = (int)num_3th.size() - 1; i >= 0; i--) {
        std::cout << num_3th[i];
    }
    return 0;
}
