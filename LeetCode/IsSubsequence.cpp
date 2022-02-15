#include <bits/stdc++.h>
using namespace std;
class Solution {
public:
    bool isSubsequence(string s, string t) {
        if (s.size() == 0) {
            return true;
        }
        auto it1 = s.begin();
        auto it2 = t.begin();
        while (it2 != t.end()) {
            if (*it1 == *it2) {
                it1++;
            }
            if (it1 == s.end()) {
                return true;
            }
            it2++;
        }
        return false;
    }
};
int main() {
    Solution s;
    cout << s.isSubsequence("abc", "ahbgdc");
    return 0;
}