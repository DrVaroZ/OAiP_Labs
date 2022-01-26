#include <iostream>
#include <cctype>

int main() {
    std::string str;
    std::cout << "Enter a string: " << "\n";
    std::getline(std::cin, str);
    std::cout << str << "\n";

    int sum = 0;
    int digit;

    for (int i = 0; i < str.length(); i++) {
        digit = 0;
        while (isdigit(str[i]) && i < str.length()) {
            digit *= 10;
            digit += str[i] - '0';
            i++;
        }
        sum += digit;
    }

    std::cout << sum << " --- " << "The summary of the numbers of this string";

    return 0;
}
