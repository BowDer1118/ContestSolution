#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    int romanToInt(string s) {
        map<char, int> m;
        m.insert({'I', 1});
        m.insert({'V', 5});
        m.insert({'X', 10});
        m.insert({'L', 50});
        m.insert({'C', 100});
        m.insert({'D', 500});
        m.insert({'M', 1000});
        int result = 0;
        int pos = s.size() - 1;
        result += m[s[pos]];
        pos--;

        while (pos >= 0) {
            if (m[s[pos]] >= m[s[pos + 1]]) {
                result += m[s[pos]];
            } else {
                result -= m[s[pos]];
            }
            pos--;
        }
        return result;
    }
};

int main() {
    Solution s;
    cout << s.romanToInt("MCMXCIV");

    return 0;
}