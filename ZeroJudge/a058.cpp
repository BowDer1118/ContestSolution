#include <iostream>
using namespace std;

int main() {
    int arr[3] = {0};
    int n;
    cin >> n;
    while (n--) {
        int num;
        cin >> num;
        arr[num % 3] += 1;
    }
    cout << arr[0] << " " << arr[1] << " " << arr[2] << endl;
    return 0;
}