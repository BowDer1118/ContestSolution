#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    int strStr(string haystack, string needle) {
        size_t index = haystack.find(needle);
        if (index == haystack.npos) {
            return -1;
        } else {
            return index;
        }
    }
};

int main() {
    Solution s;
    cout << s.strStr("aaaa", "ll");
    return 0;
}