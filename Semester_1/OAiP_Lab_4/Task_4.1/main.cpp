#include <iostream>
#include <cstdlib>

using namespace std;

int main() {
    int size, i, sum, num;
    double average;
    size = 10;
    sum = 0;
    num = 0;
    int array[size];

    for (i = 0; i < size; i++) {
        array[i] = rand() % 100;
        sum = sum + array[i];
    }

    average = sum / size;

    for (i = 0; i < size; i++) {
        if (array[i] > average) {
            num = num + 1;
        }
    }

    for (i = 0; i < size; i++) {
        cout << array[i] << " ";
    }

    cout << endl;
    cout << average << endl;
    cout << num << " --- " << "The number of elements which are greater than average";
    return 0;
}
