#include <algorithm>
#include <iostream>
using namespace std;

int main() {
    int cases;
    cin >> cases;
    int arr[5];
    while (cases--) {
        for (int i = 0; i < 4; i++) {
            cin >> arr[i];
        }
        int diff = arr[1] - arr[0];
        if (diff == arr[2] - arr[1]) {
            arr[4] = arr[3] + diff;
        } else {
            arr[4] = arr[3] * (arr[3] / arr[2]);
        }

        for (int i = 0; i < 5; i++) {
            cout << arr[i];
            if (i != 4) {
                cout << " ";
            } else {
                cout << endl;
            }
        }
    }
    return 0;
}