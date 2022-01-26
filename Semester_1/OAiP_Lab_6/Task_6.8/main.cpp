#include <iostream>

int main() {
    int set_num;

    while (true) {
        std::cout << "Enter the number of sets: " << "\n";
        std::cin >> set_num;
        if (std::cin.fail() || set_num > 500 || set_num < 1) {
            std::cin.clear();
            std::cin.ignore(32767, '\n');
            std::cout << "Try again" << "\n";
        } else {
            break;
        }
    }

    while (set_num--) {
        std::string str1, str2;
        std::cout << "Enter the first string: " << "\n";
        std::cin >> str1;
        std::cout << "Enter the second string: " << "\n";
        std::cin >> str2;

        bool f = false;
        int len_str1 = int(str1.length());
        int len_str2 = int(str2.length());

        for (int i = 0; i < len_str1 && !f; i++) {
            for (int right = 0; right < std::min(len_str2, len_str1 - i); right++) {
                int left = std::min(len_str2 - right, len_str1 - i);
                std::string result;
                int k = i;

                for (int j = 0; j < right; j++, k++) {
                    result += str1[k];
                }
                for (int j = 0; j < left; j++, k--) {
                    result += str1[k];
                }

                if (result == str2) {
                    f = true;
                    break;
                }
            }
        }

        if (f) {
            std::cout << "Yes" << "\n";
        } else {
            std::cout << "No" << "\n";
        }
    }

    return 0;
}
