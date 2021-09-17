#include <algorithm>
#include <cmath>
#include <iostream>
#include <stack>
using namespace std;

int main() {
    int n, m;
    cin >> n >> m;
    stack<int> s;
    bool format = false;
    for (int i = n; i <= m; i++) {
        int temp = i;
        int powTimes = 0;
        while (temp != 0) {
            powTimes++;
            s.emplace(temp % 10);
            temp /= 10;
        }
        temp = i;
        // cout << powTimes << endl;
        while (!s.empty()) {
            temp -= pow(s.top(), powTimes);
            s.pop();
        }

        if (temp == 0) {
            if (format) {
                cout << " ";
            }
            cout << i;
            format = true;
        }
    }
    if (!format) {
        cout << "none";
    }
    cout << endl;
    return 0;
}