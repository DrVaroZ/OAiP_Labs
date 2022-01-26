#include <iostream>
#include <cmath>

using namespace std;

int getNumber() {
    while (true) {
        cout << "Enter an integer number of members of sequence" << endl;
        int n;
        cin >> n;

        if (cin.fail()) {
            cin.clear();
            cin.ignore(32767,'\n');
            cout << "Please try again" << endl;
        }
        else {
            cin.ignore(32767,'\n');
            return n;
        }
    }
}

int main() {
    while (true) {
        int n = getNumber();
        int arr[n];
        int i, sum;

        sum = 0;

        for (i = 0; i < n; i++) {
            cout << "Enter the member" << endl;
            cin >> arr[i];
            if (cin.fail()) {
                cin.clear();
                cin.ignore(32767,'\n');
                cout << "This member is not OK, we do not count it" << endl;
            }
            else {
                cin.ignore(32767, '\n');
                sum = sum + pow(2, i) * pow(-1, i) * arr[i];
            }
        }
        cout << "The summary of sequence: " << sum;
        return 0;
    }
}
