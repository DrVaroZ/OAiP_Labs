#include <iostream>
#include <cstring>

unsigned long long Factorial(int letters) {
    if (letters == 0 || letters == 1) {
        return 1;
    }
    return letters * Factorial(letters - 1);
}

int main() {
    char str[15];

    std::cout << "Enter a word: ";
    std::cin >> str;
    std::cout << "The word: " << str << "\n";

    int letters = int(strlen(str));

    unsigned long long fact_letters = Factorial(letters);
    unsigned long long anagrams = fact_letters;

    for (int i = 0; i < letters; i++) {
        int count_rep = 1;
        for (int j = i + 1; j < letters; j++) {
            if (str[i] == str[j]) {
                count_rep++;
            }
        }
        for (int m = i + 1; m < letters; m = m + 0) {
            if (str[i] == str[m]) {
                for(int k = m; k < letters - 1; k++) {
                    str[k] = str[k + 1];
                }
                letters--;
            } else {
                m++;
            }
        }
        unsigned long long group_fact = Factorial(count_rep);
        anagrams = anagrams / group_fact;
    }

    std::cout << anagrams << " --- " << "The number of anagrams of the word ";
    return 0;
}
