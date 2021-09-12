#include <algorithm>
#include <iostream>
using namespace std;

int gcd(int m, int n) {
    if (n == 0) {
        return m;
    }
    return gcd(n, m % n);
}

int main() {
    int m, n;
    cin >> m >> n;
    if (m > n) {
        cout << gcd(m, n);
    } else {
        cout << gcd(m, n);
    }
    cout << endl;
    return 0;
}