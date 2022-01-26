#include <iostream>

std::string GetDigit(int i, int len, std::string num, std::string roman) {
    switch (len - i - 1) {
        case 3:
            switch (num[i] - '0') {
                case 1:
                    roman += "M";
                    break;
                case 2:
                    roman += "MM";
                    break;
                case 3:
                    roman += "MMM";
                    break;
                default:
                    break;
            }
            break;
        case 2:
            switch (num[i] - '0') {
                case 1:
                    roman += "C";
                    break;
                case 2:
                    roman += "CC";
                    break;
                case 3:
                    roman += "CCC";
                    break;
                case 4:
                    roman += "CD";
                    break;
                case 5:
                    roman += "D";
                    break;
                case 6:
                    roman += "DC";
                    break;
                case 7:
                    roman += "DCC";
                    break;
                case 8:
                    roman += "DCCC";
                    break;
                case 9:
                    roman += "CM";
                    break;
                default:
                    break;
            }
            break;
        case 1:
            switch (num[i] - '0') {
                case 1:
                    roman += "X";
                    break;
                case 2:
                    roman += "XX";
                    break;
                case 3:
                    roman += "XXX";
                    break;
                case 4:
                    roman += "XL";
                    break;
                case 5:
                    roman += "L";
                    break;
                case 6:
                    roman += "LX";
                    break;
                case 7:
                    roman += "LXX";
                    break;
                case 8:
                    roman += "LXXX";
                    break;
                case 9:
                    roman += "XC";
                    break;
                default:
                    break;
            }
            break;
        case 0:
            switch (num[i] - '0') {
                case 1:
                    roman += "I";
                    break;
                case 2:
                    roman += "II";
                    break;
                case 3:
                    roman += "III";
                    break;
                case 4:
                    roman += "IV";
                    break;
                case 5:
                    roman += "V";
                    break;
                case 6:
                    roman += "VI";
                    break;
                case 7:
                    roman += "VII";
                    break;
                case 8:
                    roman += "VIII";
                    break;
                case 9:
                    roman += "IX";
                    break;
                default:
                    break;
            }
        default:
            break;
    }
    return roman;
}

int main() {
    std::string num, roman;
    std::cout << "Enter a number < 3999: " << "\n";
    std::cin >> num;
    int len = (int)num.size();

    for (int i = 0; i < len; i++) {
       roman = GetDigit(i, len, num, roman);
    }

    std::cout << roman << " --- " << "This is your number in roman calculus system";

    return 0;
}
