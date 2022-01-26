#include <iostream>

using namespace std;

int main() {
    int h1, min1, h2, min2, t_h, t_min, t_1, t_2, t0;
    cin >> h1 >> min1 >> h2 >> min2;
    t_1 = h1 * 60 + min1;
    t_2 = h2 * 60 + min2;
    t0 = t_2 - t_1;
    if (t0 >= 0) {
        t_h = t0 / 60;
        t_min = t0 % 60;
        cout << t_h << " h " << t_min << " min " << endl;
    }
    else {
        t0 = t0 + 24 * 60; // if after midnight
        t_h = t0 / 60;
        t_min = t0 % 60;
        cout << t_h << " h " << t_min << " min " << endl;
    }
    return 0;
}
