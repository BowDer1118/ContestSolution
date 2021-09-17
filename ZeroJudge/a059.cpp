#include <cmath>
#include <iostream>
using namespace std;

int main() {
    int cases;
    cin >> cases;
    int total;
    for (int i = 0; i < cases; i++) {
        int begin, end;
        cin >> begin >> end;
        total = 0;
        for (int j = begin; j <= end; j++) {
            int temp = sqrt(j);
            if (temp * temp == j) {
                total += j;
            }
        }
        cout << "Case " << (i + 1) << ": " << total << endl;
    }
    return 0;
}