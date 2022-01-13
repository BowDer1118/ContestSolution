#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    //從外層往內層檢查
    bool isPalindrome(int x) {
        char input[1000];
        memset(input, 0, sizeof(input));
        sprintf(input, "%d", x);
        int l = 0;
        int r = strlen(input) - 1;
        while (l < r) {
            if (input[l] != input[r]) {
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
    cout << s.isPalindrome(121);
    return 0;
}