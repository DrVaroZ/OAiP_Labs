#include <iostream>

using namespace std;

int main() {
    double x, y, z;
    cin >> x >> y >> z;

    if ((x + y > z) && (x + z > y) && (y + z > x)) {
        cout << "Triangle exists";
    } else {
        cout << "Triangle does not exist";
    }
    return 0;
}
