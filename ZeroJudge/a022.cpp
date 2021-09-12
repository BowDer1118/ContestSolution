#include <algorithm>
#include <iostream>
using namespace std;

int main() {
    string str1;
    cin >> str1;
    string str2(str1);
    reverse(str2.begin(), str2.end());
    if (str1 == str2) {
        cout << "yes";
    } else {
        cout << "no";
    }
    cout << endl;
    return 0;
}