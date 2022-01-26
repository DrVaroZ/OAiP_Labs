#include <iostream>
#include <cstdio>
#include <cstring>

int main() {
    char str[80];
    char space[] = " ";
    int word_num = 0;
    int max_len = 0;
    int max_index = 0;
    int count_space = 0;
    int len = 0;
    int a = 0;
    int b = 0;

    std::cout << "Enter a string: ";
    gets(str);

    for (int i = 0; i < strlen(str); i++) {
        if (str[i] == space[0]) {
            a = i;
            break;
        }
        max_len += 1;
    }

    for (int i = a + 1; i < strlen(str); i++) {
        if (str[i] == space[0]) {
            int j = i - 1;
            while (str[j] != space[0]) {
                len += 1;
                j--;
            }
            if (len > max_len) {
                max_len = len;
                max_index = j + 1;
            }
        }
        len = 0;
    }

    for (int i = int(strlen(str)) - 1; i >= 0; i--) {
        if (str[i] == space[0]) {
            b = i;
            break;
        }
        len += 1;
    }

    if (len > max_len) {
        max_len = len;
        max_index = b + 1;
    }

    for (int i = max_index; i >= 0; i--) {
        if (str[i] == space[0]) {
            count_space++;
        }
    }

    word_num = count_space + 1;

    if (strlen(str) == 0) {
        word_num = 0;
        max_index = 0;
    }

    std::cout << "It is your string: ";
    std::cout << str << "\n";
    std::cout << word_num << " --- " << "Serial number of max word" << "\n";
    std::cout << max_len << " --- " << "Length of max word" << "\n";
    std::cout << max_index << " --- " << "Index of the first symbol of max word";

    return 0;
}
