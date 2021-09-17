#include <algorithm>
#include <iostream>
using namespace std;

int main() {
    int n;
    while (cin >> n) {
        if (n > 40) {
            cout << 100;
        } else if (n > 20) {
            cout << (80 + (n - 20) * 1);
        } else if (n > 10) {
            cout << (60 + (n - 10) * 2);
        } else {
            cout << 6 * n;
        }
        cout << endl;
    }
    return 0;
}