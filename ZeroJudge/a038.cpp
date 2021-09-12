#include <algorithm>
#include <iostream>
#include <string>
using namespace std;

int main() {
    string str;
    cin >> str;
    reverse(str.begin(), str.end());
    cout << stoi(str) << endl;
    return 0;
}