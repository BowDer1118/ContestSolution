#include <algorithm>
#include <iostream>
#include <map>
#include <string>
using namespace std;

int main() {
    string str;
    cin >> str;
    map<char, int> map;
    map.emplace('A', 10);
    map.emplace('B', 11);
    map.emplace('C', 12);
    map.emplace('D', 13);
    map.emplace('E', 14);
    map.emplace('F', 15);
    map.emplace('G', 16);
    map.emplace('H', 17);
    map.emplace('I', 34);
    map.emplace('J', 18);
    map.emplace('K', 19);
    map.emplace('L', 20);
    map.emplace('M', 21);
    map.emplace('N', 22);
    map.emplace('O', 35);
    map.emplace('P', 23);
    map.emplace('Q', 24);
    map.emplace('R', 25);
    map.emplace('S', 26);
    map.emplace('T', 27);
    map.emplace('U', 28);
    map.emplace('V', 29);
    map.emplace('W', 32);
    map.emplace('X', 30);
    map.emplace('Y', 31);
    map.emplace('Z', 33);

    int weight[] = {0, 8, 7, 6, 5, 4, 3, 2, 1, 1};
    int total = 0;
    for (int i = 0; i < str.length(); i++) {
        if (i == 0) {
            int value = map[str[0]];
            total += value / 10;
            total += (value % 10) * 9;
        }
        total += (str[i] - '0') * weight[i];
    }
    if (total % 10 == 0) {
        cout << "real";
    } else {
        cout << "fake";
    }
    cout << endl;
    return 0;
}