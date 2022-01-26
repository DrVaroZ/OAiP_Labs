#include <iostream>
#include <algorithm>

std::string ConvertBinary(long long num_10th, std::string num_2d) {
    long long residue;
    while (num_10th != 0) {
        residue = num_10th % 2;
        num_2d += std::to_string(residue);
        num_10th /= 2;
    }
    return num_2d;
}

int main() {
    int n;

    while (true) {
        std::cout << "Enter the position of the smallest bindecimal number:\n";
        std::cin >> n;
        if (std::cin.fail() || n < 1 || n > 10000) {
            std::cin.clear();
            std::cin.ignore(32767, '\n');
            std::cout << "Try again\n";
        }
        else {
            break;
        }
    }

    long long num_10th = 0;
    std::string num_2d, str_10th;
    while (n) {
        num_10th++;
        num_2d = "";
        num_2d = ConvertBinary(num_10th, num_2d);
        std::reverse(num_2d.begin(), num_2d.end());
        str_10th = std::to_string(num_10th);
        if (num_2d.substr(0, (int)str_10th.size()) == str_10th || num_2d.substr(num_2d.size() - (int)str_10th.size()) == str_10th) {
            n--;
            if (n == 0) {
                std::cout << num_10th << " --- " << "The smallest bindecimal number on this position in 10th calculus system" << "\n";
                std::cout << num_2d << " --- " << "A bindecimal number in 2d calculus system" << "\n";
            }
        }
    }

    return 0;
}
