#include <algorithm>
#include <iostream>
using namespace std;

int main() {
    int n;
    cin >> n;
    for (int i = 0; i < n; i++) {
        string str;
        cin >> str;
        int total = 1;
        for (int i = 0; i < str.size(); i++) {
            total *= (str[i] - '0');
        }
        cout << total << endl;
    }
    return 0;
}