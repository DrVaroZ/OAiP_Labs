#include <iostream>

bool EqualChars(std::string str) {
    for (int i = 0; i < str.length(); i++) {
        if (str[i] != str[0]) {
            return false;
        }
    }
    return true;
}

bool NotPalindrome(std::string str) {
    for (int i = 0; i < str.length() / 2; i++) {
        if (str[i] != str[str.length() - i - 1]) {
            return false;
        }
    }
    return true;
}

int main() {
    std::string str;
    std::cout << "Enter a string: ";
    std::cin >> str;

    if (EqualChars(str)) {
        std::cout << "0" << " --- " << "the length of the longest not palindrome";
    } else {
        if (!NotPalindrome(str)) {
            std::cout << str.length() << " --- " << "the length of the longest not palindrome";
        } else {
            std::cout << str.length() - 1 << " --- " << "the length of the longest not palindrome";
        }
    }

    return 0;
}
