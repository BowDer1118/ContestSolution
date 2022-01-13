#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    string longestCommonPrefix(vector<string>& strs) {
        int pos = 0;
        bool stop = false;
        while (!stop) {
            for (int i = 0; i < strs.size(); i++) {
                if (pos >= strs[i].size()) {
                    stop = true;
                    break;
                }
                if (strs[i][pos] != strs[0][pos]) {
                    stop = true;
                    break;
                }
            }
            if (!stop) {
                pos++;
            }
        }
        return strs[0].substr(0, pos);
    }
};

int main() {
    Solution s;
    vector<string> v = {"flower", "flow", "flight"};
    cout << s.longestCommonPrefix(v);
    return 0;
}