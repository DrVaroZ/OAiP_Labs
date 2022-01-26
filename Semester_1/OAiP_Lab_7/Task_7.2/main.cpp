#include <iostream>

std::string Convert(std::string additional, std::string direct) {
    if (additional[0] == '0') {
        direct = additional;
    } else {
        direct = additional;
        int i = (int)direct.size() - 1;
        while (direct[i] != '1') {
            direct[i] = '1';
            i--;
        }
        direct[i] = '0';

        for (int j = 1; j < (int)direct.size(); j++) {
            if (direct[j] == '0') {
                direct[j] = '1';
            } else {
                direct[j] = '0';
            }
        }
    }
    return direct;
}

int main() {
    std::string additional, direct;
    std::cout << "Enter a binary number in additional code: ";
    std::cin >> additional;

    direct = Convert(additional, direct);
    std::cout << direct << " --- " << "This is your number in direct code";
    return 0;
}
