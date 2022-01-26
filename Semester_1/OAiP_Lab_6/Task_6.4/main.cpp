#include <iostream>
#include <cstdio>
#include <cstring>

int main() {
    char str[101];

    std::cout << "Enter the text: ";
    gets(str);

    int letters = int(strlen(str));

    for (int i = 0; i < letters; i++) {
        if ((str[i] == 'c' || str[i] == 'C') && (str[i + 1] == 'e' || str[i + 1] == 'i' || str[i + 1] == 'y')) {
            if (str[i] == 'c') {
                str[i] = 's';
            } else {
                str[i] = 'S';
            }
        } else if (str[i] == 'c' || str[i] == 'C') {
            if (str[i] == 'c') {
                str[i] = 'k';
            } else {
                str[i] = 'K';
            }
        }

        if ((str[i] == 'q' || str[i] == 'Q') && str[i + 1] == 'u') {
            if (str[i] == 'q') {
                str[i] = 'k';
                str[i + 1] = 'v';
            } else {
                str[i] = 'K';
                str[i + 1] = 'v';
            }
        } else if (str[i] == 'q' || str[i] == 'Q') {
            str[i] = 'K';
        }

        if (str[i] == 'w' || str[i] == 'W') {
            if (str[i] == 'w') {
                str[i] = 'v';
            } else {
                str[i] = 'V';
            }
        }

        if ((str[i] == 'p' || str[i] == 'P') && str[i + 1] == 'h') {
            if (str[i] == 'p') {
                str[i] = 'f';
                str[i + 1] = 'f';
            } else {
                str[i] = 'F';
                str[i + 1] = 'F';
            }
        }

        if ((str[i] == 'o' || str[i] == 'O') && str[i + 1] == 'o') {
            if (str[i] == 'o') {
                str[i] = 'u';
                str[i + 1] = 'u';
            } else {
                str[i] = 'U';
                str[i + 1] = 'U';
            }
        }

        if ((str[i] == 'e' || str[i] == 'E') && str[i + 1] == 'e') {
            if (str[i] == 'e') {
                str[i] = 'i';
                str[i + 1] = 'i';
            } else {
                str[i] = 'I';
                str[i + 1] = 'I';
            }
        }

        if ((str[i] == 't' || str[i] == 'T') && str[i + 1] == 'h') {
            if (str[i] == 't') {
                str[i] = 'z';
                str[i + 1] = 'z';
            } else {
                str[i] = 'Z';
                str[i + 1] = 'Z';
            }
        }

        if (str[i] == 'x' || str[i] == 'X') {
            int j;
            if (str[i] == 'x') {
                str[i] = 'k';
            } else {
                str[i] = 'K';
            }
            letters++;
            for (j = letters; j > i; j--) {
                str[j] = str[j - 1];
            }
            str[j + 1] = 's';
        }
    }

    std::cout << "This is your modified text: ";
    for (int i = 0; i < letters; i++) {
        if (str[i] != str[i - 1]) {
            std::cout << str[i];
        }
    }

    return 0;
}
