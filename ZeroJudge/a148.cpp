#include <algorithm>
#include <iostream>
using namespace std;

int main() {
    int n, total, temp;
    while (cin >> n) {
        total = 0;
        for (int i = 0; i < n; i++) {
            cin >> temp;
            total += temp;
        }
        if ((total / n - 59) < 0) {
            cout << "yes" << endl;
        } else {
            cout << "no" << endl;
        }
    }
    return 0;
}