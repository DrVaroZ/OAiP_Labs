#include <iostream>
#include <cmath>

using namespace std;

int main() {
    double x1, y1, x2, y2, x3, y3, a1, a2, a3,
          h1, h2, h3, m1, m2, m3, b1, b2, b3,
          g1, g2, g3, r1, r2, r3, r, R, s_r, L_r,
          s_R, L_R, S1, S2, S3, P, y;
    y = 2;
    cin >> x1 >>y1 >> x2 >> y2 >> x3 >> y3;
    a1 = sqrt(pow((x2 - x1), y) + pow((y2 - y1), y));
    a2 = sqrt(pow((x3 - x2), y) + pow((y3 - y2), y));
    a3 = sqrt(pow((x1 - x3), y) + pow((y1 - y3), y));

    P = a1 + a2 + a3;

    S1 = sqrt((P/2) * (P/2 - a1) * (P/2 - a2) * (P/2 - a3));

    h1 = (2 * S1) / a1;
    h2 = (2 * S1) / a2;
    h3 = (2 * S1) / a3;

    m1 = sqrt(2 * (pow(a3, y) + pow(a2, y)) - pow(a1, y)) / 2;
    m2 = sqrt(2 * (pow(a1, y) + pow(a3, y)) - pow(a2, y)) / 2;
    m3 = sqrt(2 * (pow(a1, y) + pow(a2, y)) - pow(a3, y)) / 2;

    b1 = sqrt(a2 * a3 * (a2 + a3 + a1) * (a2 + a3 - a1)) / (a2 + a3);
    b2 = sqrt(a1 * a3 * (a1 + a3 + a2) * (a1 + a3 - a2)) / (a1 + a3);
    b3 = sqrt(a2 * a1 * (a2 + a1 + a3) * (a2 + a1 - a3)) / (a2 + a1);

    r1 = asin((2 * S1) / (a1 * a2));
    r2 = asin((2 * S1) / (a3 * a2));
    r3 = asin((2 * S1) / (a1 * a3));

    g1 = fabs((180 * r1) / 3.14);
    g2 = fabs((180 * r2) / 3.14);
    g3 = fabs((180 * r3) / 3.14);

    r = (2 * S1) / P;

    R = (a1 * a2 * a3) / (4 * S1);

    S2 = 0.5 * a1 * h1;
    S3 = 0.5 * P * r;

    s_r = 3.14 * pow(r, y);
    s_R = 3.14 * pow(R, y);

    L_r = 2 * 3.14 * r;
    L_R = 2 * 3.14 * R;

    cout << a1 << " " << "side 1" << endl
         << a2 << " " << "side 2" << endl
         << a3 << " " << "side 3" << endl
         << h1 << " " << "height 1" << endl
         << h2 << " " << "height 2" << endl
         << h3 << " " << "height 3" << endl
         << m1 << " " << "median 1" << endl
         << m2 << " " << "median 2" << endl
         << m3 << " " << "median 3" << endl
         << b1 << " " << "bisectrix 1" << endl
         << b2 << " " << "bisectrix 2" << endl
         << b3 << " " << "bisectrix 3" << endl
         << g1 << " " << "deg angle 1" << endl
         << g2 << " " << "deg angle 2" << endl
         << g3 << " " << "deg angle 3" << endl
         << r1 << " " << "radian angle 1" << endl
         << r2 << " " << "radian angle 2" << endl
         << r3 << " " << "radian angle 3" << endl
         << r << " " << "radius escribed" << endl
         << R << " " << "radius circumscribed" << endl
         << s_r << " " << "area escribed" << endl
         << L_r << " " << "length escribed" << endl
         << s_R << " " << "area circumscribed" << endl
         << L_R << " " << "length circumscribed" << endl
         << P << " " << "perimeter" << endl
         << S1 << " " << "area Geron" << endl
         << S2 << " " << "area as a half of the product of height and side" << endl
         << S3 << " " << "area as product of half of a perimeter and radius escribed" << endl;
    return 0;
}
