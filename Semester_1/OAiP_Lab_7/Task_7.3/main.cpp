#include <iostream>

std::string ConvertNum1(std::string num1, std::string add_num1) {
    if (num1[0] == '0') {
        add_num1 = num1;
    } else {
        add_num1 = num1;
        for (int j = 1; j < (int)add_num1.size(); j++) {
            if (add_num1[j] == '0') {
                add_num1[j] = '1';
            } else {
                add_num1[j] = '0';
            }
        }

        int i = (int)add_num1.size() - 1;
        while (add_num1[i] != '0') {
            add_num1[i] = '0';
            i--;
        }
        add_num1[i] = '1';
    }
    return add_num1;
}

std::string ConvertNum2(std::string num2, std::string add_num2) {
    if (num2[0] == '0') {
        add_num2 = num2;
    } else {
        add_num2 = num2;
        for (int j = 1; j < (int)add_num2.size(); j++) {
            if (add_num2[j] == '0') {
                add_num2[j] = '1';
            } else {
                add_num2[j] = '0';
            }
        }

        int i = (int)add_num2.size() - 1;
        while (add_num2[i] != '0') {
            add_num2[i] = '0';
            i--;
        }
        add_num2[i] = '1';
    }
    return add_num2;
}

std::string Summary(std::string add_num1, std::string add_num2, std::string sum) {
    int len1 = (int)add_num1.size();
    int len2 = (int)add_num2.size();
    int carry = 0;

    if (len1 >= len2) {
        int delta = len1 - len2 - 1;
        while (delta >= 0) {
            add_num2 = '0' + add_num2;
            delta--;
        }
    } else {
        int delta = len2 - len1 - 1;
        while (delta >= 0) {
            add_num1 = '0' + add_num1;
            delta--;
        }
    }

    int len = (int)add_num1.size();
    std::cout << len << "\n";

    for (int i = len - 1; i >= 0; i--) {
        int bit1 = add_num1[i] - '0';
        int bit2 = add_num2[i] - '0';
        char digit = (bit1 ^ bit2 ^ carry) + '0'; // ^ = xor
        sum = digit + sum;
        carry = (bit1 & carry) | (bit2 & carry) | (bit1 & bit2);
    }
    if (carry) {
        sum = '1' + sum;
    }

    return sum;
}

std::string ConvertSum(std::string sum, std::string result) {
    if (sum[0] == '0') {
        result = sum;
    } else {
        result = sum;
        int i = (int)result.size() - 1;
        while (result[i] != '1') {
            result[i] = '1';
            i--;
        }
        result[i] = '0';

        for (int j = 1; j < (int)result.size(); j++) {
            if (result[j] == '0') {
                result[j] = '1';
            } else {
                result[j] = '0';
            }
        }
    }
    return result;
}

int main() {
    std::string num1, num2, add_num1, add_num2, sum, result;
    std::cout << "Enter the first binary number in natural form: ";
    std::cin >> num1;
    std::cout << "Enter the second binary number in natural form: ";
    std::cin >> num2;

    add_num1 = ConvertNum1(num1, add_num1);
    add_num2 = ConvertNum2(num2, add_num2);
    std::cout << "The first binary number in additional form:" << "\n";
    std::cout << add_num1 << "\n";
    std::cout << "The second binary number in additional form:" << "\n";
    std::cout << add_num2 << "\n";

    sum = Summary(add_num1, add_num2, sum);
    std::cout << "The summary of two binary numbers in additional form:" << "\n";
    std::cout << sum << "\n";

    result = ConvertSum(sum, result);
    std::cout << "The summary of two binary numbers in natural form:" << "\n";
    std::cout << result;
    return 0;
}
