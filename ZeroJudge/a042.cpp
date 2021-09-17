#include <algorithm>
#include <iostream>
using namespace std;

/*
    circle 0 1 2 3 4  5
    area   1 2 4 8 14 22
    除了0和1 
    其他圓都是 第k個圓的區塊=k*(k-1)+2
*/

int main() {
    int n;
    while (cin >> n) {
        if (n == 0) {
            cout << 1 << endl;
        }
        if (n == 1) {
            cout << 2 << endl;
        }
        if (n > 1) {
            cout << n * (n - 1) + 2 << endl;
        }
    }
    return 0;
}