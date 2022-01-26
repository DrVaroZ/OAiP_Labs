#include <iostream>
#include <algorithm>

std::string Addition(std::string num1, std::string num2, std::string sum) {
    int len1 = (int)num1.size();
    int len2 = (int)num2.size();
    int carry = 0;

    if (len1 > len2) {
        int delta = len1 - len2 - 1;
        while (delta >= 0) {
            num2 = '0' + num2;
            delta--;
        }
    } else {
        int delta = len2 - len1 - 1;
        while (delta >= 0) {
            num1 = '0' + num1;
            delta--;
        }
    }

    int len = (int)num1.size();

    for (int i = len - 1; i >= 0; i--) {
        int digit1, digit2, new_digit;

        if (num1[i] == 'A') {
            digit1 = 10;
        } else if (num1[i] == 'B') {
            digit1 = 11;
        } else if (num1[i] == 'C') {
            digit1 = 12;
        } else if (num1[i] == 'D') {
            digit1 = 13;
        } else if (num1[i] == 'E') {
            digit1 = 14;
        } else if (num1[i] == 'F') {
            digit1 = 15;
        } else if (num1[i] == 'G') {
            digit1 = 16;
        } else if (num1[i] == 'H') {
            digit1 = 17;
        } else if (num1[i] == 'I') {
            digit1 = 18;
        } else {
            digit1 = num1[i] - '0';
        }

        if (num2[i] == 'A') {
            digit2 = 10;
        } else if (num2[i] == 'B') {
            digit2 = 11;
        } else if (num2[i] == 'C') {
            digit2 = 12;
        } else if (num2[i] == 'D') {
            digit2 = 13;
        } else if (num2[i] == 'E') {
            digit2 = 14;
        } else if (num2[i] == 'F') {
            digit2 = 15;
        } else if (num2[i] == 'G') {
            digit2 = 16;
        } else if (num2[i] == 'H') {
            digit2 = 17;
        } else if (num2[i] == 'I') {
            digit2 = 18;
        } else {
            digit2 = num2[i] - '0';
        }

        new_digit = digit1 + digit2;

        if (carry == 1) {
            new_digit++;
            carry = 0;
        }

        if (new_digit >= 19) {
            new_digit -= 19;
            carry++;
            if (new_digit == 10) {
                sum.insert(0, 1, 'A');
            } else if (new_digit == 11) {
                sum.insert(0, 1, 'B');
            } else if (new_digit == 12) {
                sum.insert(0, 1, 'C');
            } else if (new_digit == 13) {
                sum.insert(0, 1, 'D');
            } else if (new_digit == 14) {
                sum.insert(0, 1, 'E');
            } else if (new_digit == 15) {
                sum.insert(0, 1, 'F');
            } else if (new_digit == 16) {
                sum.insert(0, 1, 'G');
            } else if (new_digit == 17) {
                sum.insert(0, 1, 'H');
            } else if (new_digit == 18) {
                sum.insert(0, 1, 'I');
            } else {
                sum.insert(0, 1, new_digit + '0');
            }
        } else if (new_digit >= 10 && new_digit < 19) {
            if (new_digit == 10) {
                sum.insert(0, 1, 'A');
            } else if (new_digit == 11) {
                sum.insert(0, 1, 'B');
            } else if (new_digit == 12) {
                sum.insert(0, 1, 'C');
            } else if (new_digit == 13) {
                sum.insert(0, 1, 'D');
            } else if (new_digit == 14) {
                sum.insert(0, 1, 'E');
            } else if (new_digit == 15) {
                sum.insert(0, 1, 'F');
            } else if (new_digit == 16) {
                sum.insert(0, 1, 'G');
            } else if (new_digit == 17) {
                sum.insert(0, 1, 'H');
            } else if (new_digit == 18) {
                sum.insert(0, 1, 'I');
            }
        } else {
            sum.insert(0, 1, new_digit + '0');
        }
    }

    if (carry == 1) {
        sum = "1" + sum;
    }

    return sum;
}

std::string Subtraction(std::string num1, std::string num2, std::string sub) {
    int len1 = (int)num1.size();
    int len2 = (int)num2.size();
    int carry = 0, count = 0;

    if (len1 > len2) {
        int delta = len1 - len2 - 1;
        while (delta >= 0) {
            num2 = '0' + num2;
            delta--;
        }
    } else {
        int delta = len2 - len1 - 1;
        while (delta >= 0) {
            num1 = '0' + num1;
            delta--;
            count++;
        }
        std::swap(num1, num2);
    }

    int len = (int)num1.size();

    for (int i = len - 1; i >= 0; i--) {
        int digit1, digit2, new_digit;

        if (num1[i] == 'A') {
            digit1 = 10;
        } else if (num1[i] == 'B') {
            digit1 = 11;
        } else if (num1[i] == 'C') {
            digit1 = 12;
        } else if (num1[i] == 'D') {
            digit1 = 13;
        } else if (num1[i] == 'E') {
            digit1 = 14;
        } else if (num1[i] == 'F') {
            digit1 = 15;
        } else if (num1[i] == 'G') {
            digit1 = 16;
        } else if (num1[i] == 'H') {
            digit1 = 17;
        } else if (num1[i] == 'I') {
            digit1 = 18;
        } else {
            digit1 = num1[i] - '0';
        }

        if (num2[i] == 'A') {
            digit2 = 10;
        } else if (num2[i] == 'B') {
            digit2 = 11;
        } else if (num2[i] == 'C') {
            digit2 = 12;
        } else if (num2[i] == 'D') {
            digit2 = 13;
        } else if (num2[i] == 'E') {
            digit2 = 14;
        } else if (num2[i] == 'F') {
            digit2 = 15;
        } else if (num2[i] == 'G') {
            digit2 = 16;
        } else if (num2[i] == 'H') {
            digit2 = 17;
        } else if (num2[i] == 'I') {
            digit2 = 18;
        } else {
            digit2 = num2[i] - '0';
        }

        if (carry == 1) {
            digit1--;
            carry = 0;
        }

        if (digit1 < digit2) {
            carry++;
            digit1 += 19;
        }

        new_digit = digit1 - digit2;

        if (new_digit >= 10 && new_digit < 19) {
            if (new_digit == 10) {
                sub.insert(0, 1, 'A');
            } else if (new_digit == 11) {
                sub.insert(0, 1, 'B');
            } else if (new_digit == 12) {
                sub.insert(0, 1, 'C');
            } else if (new_digit == 13) {
                sub.insert(0, 1, 'D');
            } else if (new_digit == 14) {
                sub.insert(0, 1, 'E');
            } else if (new_digit == 15) {
                sub.insert(0, 1, 'F');
            } else if (new_digit == 16) {
                sub.insert(0, 1, 'G');
            } else if (new_digit == 17) {
                sub.insert(0, 1, 'H');
            } else if (new_digit == 18) {
                sub.insert(0, 1, 'I');
            } else {
                sub.insert(0, 1, new_digit + '0');
            }
        } else {
            sub.insert(0, 1, new_digit + '0');
        }
    }

    if (count) {
        return "-" + sub;
    } else {
        return sub;
    }
}

int main() {
    std::string num1, num2, sum, sub;
    std::cout << "Enter the first number in 19th calculus system (only digits and letters from A to I):\n";
    std::cin >> num1;
    std::cout << "Enter the second number in 19th calculus system (only digits and letters from A to I):\n";
    std::cin >> num2;

    if (num1[0] == '-' && num2[0] == '-') {
        num1.erase(0, 1);
        num2.erase(0, 1);
        sum = "-" + Addition(num1, num2, sum);
        sub = Subtraction(num2, num1, sub);
    } else if (num1[0] == '-' && num2[0] != '-') {
        num1.erase(0, 1);
        sum = Subtraction(num2, num1, sum);
        sub = "-" + Addition(num1, num2, sub);
    } else if (num1[0] != '-' && num2[0] == '-') {
        num2.erase(0, 1);
        sum = Subtraction(num1, num2, sum);
        sub = Addition(num1, num2, sub);
    } else {
        sum = Addition(num1, num2, sum);
        sub = Subtraction(num1, num2, sub);
    }

    std::cout << sum << " --- " << "The summary of these numbers\n";
    std::cout << sub << " --- " << "The subtraction of these numbers\n";

    return 0;
}
