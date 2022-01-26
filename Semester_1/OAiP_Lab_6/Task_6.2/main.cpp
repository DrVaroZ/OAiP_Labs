#include <iostream>
#include <algorithm>
#include <vector>

int main() {
    std::vector <int> str1, str2;
    char* str = new char[80];
    int word_num = 0, answer = 0, max = 0;
    bool b;

    std::cout << "Enter a string: " << "\n";
    gets(str);

    int i = 0;
    while (str[i] != '\0') {
        i++;
    }

    int length = i;
    for (i = 0; i < length; i++) {
        if (str[i] == ' ') {
            word_num++;
        }
    }
    word_num++;

    int** arr_num = new int*[word_num];
    for (i = 0; i < word_num; i++) {
        arr_num[i] = new int[2];
    }

    char** arr_el = new char*[word_num];
    for (i = 0; i < word_num; i++) {
        arr_el[i] = new char[2];
    }

    int j = 0;
    for (i = 0; i < length; i++) {
        if (str[i] == ' ' || i == length - 1) {
            if (i == length - 1) {
                i++;
            }
            arr_num[answer][0] = j;
            arr_num[answer][1] = i - 1;

            arr_el[answer][0] = str[j];
            arr_el[answer][1] = str[i - 1];

            j = i + 1;
            answer++;
        }
    }

    for (i = 0; i < word_num; i++) {
        str1.clear();
        str1.push_back(i);
        int k = i;
        while (true) {
            b = true;
            for (j = 0; j < word_num && b; j++) {
                if (arr_el[k][1] == arr_el[j][0] && std::find(str1.begin(), str1.end(), j) == str1.end()) {
                    str1.push_back(j);
                    k = j;
                    b = false;
                }
            }
            if (!b) {
                continue;
            }
            else {
                if (str1.size() > max) {
                    str2 = str1;
                    max = (int)str1.size();
                }
                break;
            }
        }
    }

    std::cout << "This is your string: " << "\n";
    for (i = 0; i < length; i++) {
        std::cout << str[i];
    }
    std::cout << "\n";

    std::cout << "This is the longest chain of the words of your string: " << "\n";
    for (i = 0; i < str2.size(); i++) {
        int l = arr_num[str2[i]][0];
        int r = arr_num[str2[i]][1];
        for (j = l; j <= r; j++) {
            std::cout << str[j];
        }
        std::cout << ' ';
    }
    std::cout << "\n";

    for (i = 0; i < word_num; i++) {
        delete[] arr_num[i];
        delete[] arr_el[i];
    }

    delete[] arr_num;
    delete[] arr_el;
    delete[] str;

    return 0;
}
