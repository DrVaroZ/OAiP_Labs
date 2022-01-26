#include <iostream>
#include <string>

int getRaw() {
    while (true) {
        std::cout << "Enter a natural n: " << std::endl;
        int n;
        std::cin >> n;

        if (n <= 0) {
            std::cin.clear();
            std::cin.ignore(32767,'\n');
            std::cout << "Please try again" << std::endl;
        }  else {
            if (std::cin.fail()) {
                std::cin.clear();
                std::cin.ignore(32767,'\n');
                std::cout << "Please try again" << std::endl;
            } else {
                std::cin.ignore(32767,'\n');
                return n;
            }
        }
    }
}

int getColumn() {
    while (true) {
        std::cout << "Enter a natural m: " << std::endl;
        int n;
        std::cin >> n;

        if (n <= 0) {
            std::cin.clear();
            std::cin.ignore(32767,'\n');
            std::cout << "Please try again" << std::endl;
        }  else {
            if (std::cin.fail()) {
                std::cin.clear();
                std::cin.ignore(32767,'\n');
                std::cout << "Please try again" << std::endl;
            } else {
                std::cin.ignore(32767,'\n');
                return n;
            }
        }
    }
}

char getField() {
    while (true) {
        std::cout << "Enter * -- for bomb or . -- for safe place on the field: " << std::endl;
        char x;
        std::cin >> x;

        if (x != '*' && x != '.') {
            std::cin.clear();
            std::cin.ignore(32767,'\n');
            std::cout << "Please try again" << std::endl;
        }  else {
            if (std::cin.fail()) {
                std::cin.clear();
                std::cin.ignore(32767,'\n');
                std::cout << "Please try again" << std::endl;
            } else {
                std::cin.ignore(32767,'\n');
                return x;
            }
        }
    }
}

void starLine() {
    for (int i = 0; i < 50; i++) {
        std::cout << '*';
    }
}

int main() {
    int i, j;
    int n = getRaw();
    int m = getColumn();
    char **field = new char* [n + 2];
    char **smooth = new char* [n + 2];

    for (i = 0; i < n + 2; i++) {
        field[i] = new char [m + 2];
        smooth[i] = new char [m + 2];
    }

    for (i = 1; i < n + 1; i++) {
        for (j = 1; j < m + 1; j++) {
            char x = getField();
            field[i][j] = x;
        }
    }

    starLine();
    std::cout << std::endl;

    for (i = 1; i < n + 1; i++) {
        for (j = 1; j < m + 1; j++) {
            std::cout << field[i][j] << " " << "\t";
        }
        std::cout << "\n";
    }

    for (i = 1; i < n + 1; i++) {
        for (j = 1; j < m + 1; j++) {
            int bomb_counter = 0;
            if (field[i][j] == '.') {
                for (int p = i - 1; p < i + 2; p++) {
                    for (int q = j - 1; q < j + 2; q++) {
                        if (field[p][q] == '*') {
                            bomb_counter = bomb_counter + 1;
                            smooth[i][j] = bomb_counter + '0';
                        }
                    }
                }
            } else {
                smooth[i][j] = field[i][j];
            }
        }
    }

    starLine();
    std::cout << std::endl;

    for (i = 1; i < n + 1; i++) {
        for (j = 1; j < m + 1; j++) {
            std::cout << smooth[i][j] << " " << "\t";
        }
        std::cout << "\n";
    }

    for (i = 0; i < n + 2; i++) {
        delete []field[i];
    }

    delete []field;

    for (i = 0; i < n + 2; i++) {
        delete []smooth[i];
    }

    delete []smooth;

    return 0;
}
