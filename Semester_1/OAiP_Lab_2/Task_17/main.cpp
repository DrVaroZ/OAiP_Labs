#include <iostream>
#include <cmath>

using namespace std;

int main() {
    int W, H, x1, y1, x2, y2, w, h, X, Y;
    double d1, d2, d3, d4, d5, d6;
    cin >> W >> H;
    cin >> x1 >> y1 >> x2 >> y2;
    cin >> w >> h;

    X = x2 - x1 + w;
    Y = y2 - y1 + h;
    d1 = h;
    d2 = h - y1;
    d3 = 0;
    d4 = w;
    d5 = w - x1;
    d6 = sqrt(pow(h - y1, 2) + pow(w - x1, 2));

    if (w <= W && h <= H && x1 <= W && x2 <= W && y1 <= H && y2 <= H) {
        if (Y <= H && X > W) {
            if (y2 <= h) {
                cout << d1;
            } else if (y1 < h && y2 > h) {
                cout << d2;
            } else if (y1 >= h) {
                cout << d3;
            }
        } else if (Y > H && X <= W) {
            if (x2 <= w) {
                cout << d4;
            } else if (x1 < w && x2 > w) {
                cout << d5;
            } else if (x1 >= w) {
                cout << d3;
            }
        } else if (Y > H && X > W) {
            if (x2 >= W || y2 >= H) {
                cout << "There is no space";
            } else {
                cout << d6;
            }
        } else if (Y <= H && X <= W) {
            if (d1 < d2 && d1 < d3 && d1 < d4 && d1 < d5 && d1 < d6) {
                cout << d1;
            } else if (d2 < d1 && d2 < d3 && d2 < d4 && d2 < d5 && d2 < d6) {
                cout << d2;
            }  else if (d3 < d1 && d3 < d2 && d3 < d4 && d3 < d5 && d3 < d6) {
                cout << d3;
            }  else if (d4 < d1 && d4 < d2 && d4 < d3 && d4 < d5 && d4 < d6) {
                cout << d4;
            }  else if (d5 < d1 && d5 < d2 && d5 < d3 && d5 < d4 && d5 < d6) {
                cout << d5;
            } else if (d6 < d1 && d6 < d2 && d6 < d3 && d6 < d4 && d6 < d5) {
                cout << d6;
            }
        } else {
            cout << "There is no space";
        }
    } else {
        cout << "There is no space";
    }
    return 0;
}
