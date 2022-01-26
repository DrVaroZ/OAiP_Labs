#include <iostream>

int main() {
    char str[80];
    int letters = 0;

    std::cout << "Enter a word: ";
    std::cin >> str;
    std::cout << "The word: " << str << "\n";

    while (str[letters] != '\0') {
        letters++;
    }

    for (int i = 0; i < letters; i++) {
        for (int j = i + 1; j < letters; j = j + 0) {
            if (str[i] == str[j]) {
                for(int k = j; k < letters - 1; k++) {
                    str[k] = str[k + 1];
                }
                letters--;
            } else {
                j++;
            }
        }
    }

    std::cout << "The word consists of these symbols: ";
    for (int i = 0; i < letters; i++) {
        std::cout << str[i] << " ";
    }

    return 0;
}
