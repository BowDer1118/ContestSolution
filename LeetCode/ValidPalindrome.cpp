#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    bool isPalindrome(string s) {
        vector<char> v;
        //只留 英文字母 並全部轉小寫
        for (int i = 0; i < s.size(); i++) {
            if (isalnum(s[i])) {
                v.push_back(tolower(s[i]));
            }
        }

        int l = 0;
        int r = v.size() - 1;
        while (l < r) {
            if (v[l] != v[r]) {
                return false;
            }
            l++;
            r--;
        }
        return true;
    }
};

int main() {
    Solution s;
    cout << s.isPalindrome("0P");
    return 0;
}