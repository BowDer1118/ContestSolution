#include <algorithm>
#include <iostream>
#include <map>
using namespace std;

int main() {
    int input;
    cin >> input;
    map<int, int> map;
    for (int i = 2; i <= input; i++) {
        int count = 0;
        while (input % i == 0 && input != 0) {
            count++;
            input /= i;
        }
        if (count != 0) {
            map.insert({i, count});
        }
    }

    bool format = false;
    for (auto p : map) {
        if (format) {
            cout << " * ";
        }
        if (p.second == 1) {
            cout << p.first;
        } else {
            cout << p.first << "^" << p.second;
        }
        format = true;
    }

    return 0;
}