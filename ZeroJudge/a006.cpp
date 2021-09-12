#include <algorithm>
#include <cmath>
#include <iostream>
using namespace std;

int main() {
    int a, b, c;
    cin >> a >> b >> c;
    int d = (b * b) - (4 * a * c);
    int root = sqrt(d);
    int value1 = (-b + root) / 2 * a;
    int value2 = (-b - root) / 2 * a;
    if (d < 0) {
        cout << "No real root" << endl;
    }
    if (d == 0 && value1 == value2) {
        cout << "Two same roots x=" << -b / (2 * a);
    }
    if (d > 0) {
        if (value1 > value2) {
            cout << "Two different roots x1=" << value1 << " , x2=" << value2 << endl;
        } else {
            cout << "Two different roots x1=" << value2 << " , x2=" << value1 << endl;
        }
    }
    return 0;
}