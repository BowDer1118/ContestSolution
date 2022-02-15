#include <bits/stdc++.h>
using namespace std;
class Solution {
public:
    bool isPowerOfThree(int n) {
        if (n <= 0) {
            return false;
        }
        int ccount = 0;
        while (n) {
            if (n % 3 == 2) {
                return false;
            } else if (n % 3 == 1) {
                ccount++;
            }
            if (ccount > 1) {
                return false;
            }
            n /= 3;
        }
        return true;
    }
};
int main() {
    Solution s;
    cout << s.isPowerOfThree(1);
    return 0;
}