#include <iostream>
#include <cmath>
using namespace std;

int main() {
    double k, x, y, r_in_1, r_in_2, r_in_3, r_in_4,
           r_out_1, r_out_2, r_out_3, r_out_4,
           r_out_5, r_out_6, r_out_7, r_out_8;
    cin >> k >> x >> y;

    if (k > 0) {
        if ((x > 0 && x < k) && (y > 0 && y < k)) {

            r_in_1 = x;
            r_in_2 = k - x;
            r_in_3 = y;
            r_in_4 = k - y;

            if ((r_in_1 <= r_in_2 && r_in_1 <= r_in_3) && r_in_1 <= r_in_4) {
                cout << r_in_1;
            } else if ((r_in_2 <= r_in_1 && r_in_2 <= r_in_3) && r_in_2 <= r_in_4) {
                cout << r_in_2;
            } else if ((r_in_3 <= r_in_1 && r_in_3 <= r_in_2) && r_in_3 <= r_in_4) {
                cout << r_in_3;
            } else if ((r_in_4 <= r_in_2 && r_in_4 <= r_in_3) && r_in_4 <= r_in_1) {
                cout << r_in_4;
            }
            cout << " In square";
        } else {

            r_out_1 = x - k;
            r_out_2 = y - k;
            r_out_3 = abs(x);
            r_out_4 = abs(y);
            r_out_5 = sqrt(pow(x - k, 2) + pow(y - k, 2));
            r_out_6 = sqrt(pow(x, 2) + pow(y - k, 2));
            r_out_7 = sqrt(pow(x, 2) + pow(y, 2));
            r_out_8 = sqrt(pow(x - k, 2) + pow(y, 2));

            if (x >= k && (y >= 0 && y <= k)) {
                cout << r_out_1;
            } else if ((x >= 0 && x <= k) && y >= k) {
                cout << r_out_2;
            } else if (x <= 0 && (y >= 0 && y <= k)) {
                cout << r_out_3;
            } else if ((x >= 0 && x <= k) && y <= 0) {
                cout << r_out_4;
            } else if (x >= k && y >= k) {
                cout << r_out_5;
            } else if (x <= 0 && y >= k) {
                cout << r_out_6;
            } else if (x <= 0 && y <= 0) {
                cout << r_out_7;
            } else if (x >= k && y <= 0) {
                cout << r_out_8;
            }
            cout << " Out";
        }
    } else {
        if ((x < 0 && x > k) && (y < 0 && y > k)) {

            r_in_1 = -x;
            r_in_2 = x - k;
            r_in_3 = -y;
            r_in_4 = y - k;

            if ((r_in_1 <= r_in_2 && r_in_1 <= r_in_3) && r_in_1 <= r_in_4) {
                cout << r_in_1;
            } else if ((r_in_2 <= r_in_1 && r_in_2 <= r_in_3) && r_in_2 <= r_in_4) {
                cout << r_in_2;
            } else if ((r_in_3 <= r_in_1 && r_in_3 <= r_in_2) && r_in_3 <= r_in_4) {
                cout << r_in_3;
            } else if ((r_in_4 <= r_in_2 && r_in_4 <= r_in_3) && r_in_4 <= r_in_1) {
                cout << r_in_4;
            }
            cout << " In square";
        } else {

            r_out_1 = k - x; //
            r_out_2 = k - y; //
            r_out_3 = abs(x); //
            r_out_4 = abs(y); //
            r_out_5 = sqrt(pow(x - k, 2) + pow(y - k, 2)); //
            r_out_6 = sqrt(pow(x, 2) + pow(y - k, 2)); //
            r_out_7 = sqrt(pow(x, 2) + pow(y, 2)); //
            r_out_8 = sqrt(pow(x - k, 2) + pow(y, 2)); //

            if (x <= k && (y <= 0 && y >= k)) {
                cout << r_out_1;
            } else if ((x <= 0 && x >= k) && y <= k) {
                cout << r_out_2;
            } else if (x >= 0 && (y <= 0 && y >= k)) {
                cout << r_out_3;
            } else if ((x <= 0 && x >= k) && y >= 0) {
                cout << r_out_4;
            } else if (x <= k && y <= k) {
                cout << r_out_5;
            } else if (x >= 0 && y <= k) {
                cout << r_out_6;
            } else if (x >= 0 && y >= 0) {
                cout << r_out_7;
            } else if (x <= k && y >= 0) {
                cout << r_out_8;
            }
            cout << " Out";
        }
    }
    return 0;
}
