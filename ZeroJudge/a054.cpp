#include <algorithm>
#include <iostream>
#include <set>
#include <unordered_map>
using namespace std;

int main() {
    unordered_multimap<int, char> map;
    map.emplace(1, 'A');
    map.emplace(0, 'B');
    map.emplace(9, 'C');
    map.emplace(8, 'D');
    map.emplace(7, 'E');
    map.emplace(6, 'F');
    map.emplace(5, 'G');
    map.emplace(4, 'H');
    map.emplace(7, 'I');
    map.emplace(3, 'J');
    map.emplace(2, 'K');
    map.emplace(2, 'L');
    map.emplace(1, 'M');
    map.emplace(0, 'N');
    map.emplace(8, 'O');
    map.emplace(9, 'P');
    map.emplace(8, 'Q');
    map.emplace(7, 'R');
    map.emplace(6, 'S');
    map.emplace(5, 'T');
    map.emplace(4, 'U');
    map.emplace(3, 'V');
    map.emplace(1, 'W');
    map.emplace(3, 'X');
    map.emplace(2, 'Y');
    map.emplace(0, 'Z');
    int weight[8] = {8, 7, 6, 5, 4, 3, 2, 1};
    set<char> s;

    string str;
    cin >> str;
    int total = 0;
    for (int i = 0; i < str.length(); i++) {
        if (i != str.length() - 1) {
            total += i * weight[i];
        }
    }

    total %= 10;
    int last = str[8] - '0';

    //total+target=last
    int target = 10 - total;

    //target==?

    auto it = map.equal_range(target);
    for (auto i = it.first; i != it.second; i++) {
        s.emplace(i->second);
    }

    for (auto c : s) {
        cout << c;
    }

    return 0;
}