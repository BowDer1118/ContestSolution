#include <algorithm>
#include <iostream>
using namespace std;

int main() {
    int n, m;
    while (cin >> n >> m) {
        int total = 0;
        int count = 0;
        while (total <= m) {
            total += n;
            n++;
            count++;
        }
        if (count == 0) {
            cout << 1 << endl;
        } else {
            cout << count << endl;
        }
    }
    return 0;
}