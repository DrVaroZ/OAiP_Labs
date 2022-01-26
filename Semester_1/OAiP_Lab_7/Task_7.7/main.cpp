#include<iostream>

int Addition(int num1, int num2) { // bitwise addition
    int result = num1 ^ num2;
    int rank = (num1 & num2) << 1;

    while (rank) {
        int temp = result;
        result ^= rank;
        rank = (temp & rank) << 1;
    }

    return result;
}

int Subtraction(int num1, int num2) { // bitwise subtraction
    num2 = Addition(~num2, 1);

    return Addition(num1, num2);
}

int Multiplication(int num1, int num2) { // bitwise multiplication
    int result = 0;

    while (num2) {
        if (num2 & 1) {
            result = Addition(result, num1);
        }
        num1 <<= 1;
        num2 >>= 1;
    }

    return result;
}

int Division(int num1, int num2) { // bitwise division
    int result = 0;

    while (num1 >= num2) {
        result = Addition(result, 1);
        num1 = Subtraction(num1, num2);
    }

    return result;
}

int Module(int num1, int num2) { // bitwise taking the remainder of the division
    int result = Subtraction(num1, Multiplication(Division(num1, num2), num2));

    return result;
}

int main() {
    int number;
    int dividers[] = {3, 23, 107};

    while (true) {
        std::cout << "Enter a number to mod 3, 23, 107:\n";
        std::cin >> number;

        if (std::cin.fail() || number <= 0) {
            std::cin.clear();
            std::cin.ignore(32767, '\n');
            std::cout << "Try again\n";
        }
        else {
            break;
        }
    }

    for (int i = 0; i < 3; ) {
        std::cout << Module(number, dividers[i])<< " --- " << "The remainder of the number and " << dividers[i] << "\n";
        i = Addition(i, 1);
    }

    return 0;
}
