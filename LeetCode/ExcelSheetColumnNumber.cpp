#include <bits/stdc++.h>
using namespace std;
class Solution {
public:
    int titleToNumber(string columnTitle) {
        reverse(columnTitle.begin(), columnTitle.end());
        int sum = 0;
        for (int i = 0; i < columnTitle.size(); i++) {
            sum += (int(columnTitle[i]) - 64) * (int)pow(26, i);
        }
        return sum;
    }
};
int main() {
    vector<string> v = {"A", "AB", "ZY"};
    Solution s;
    for (string str : v) {
        cout << s.titleToNumber(str) << "\n";
    }
    return 0;
}