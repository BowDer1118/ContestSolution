#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    bool isPowerOfTwo(int n) {
        if (n <= 0) {
            return false;
        }
        int ccount = 0;
        const int one = 1;
        for (int i = 0; i < 32; i++) {
            if (n & one == 1) {
                ccount++;
            }
            n >>= 1;
            if (ccount > 1) {
                break;
            }
        }
        return ccount == 1;
    }
};

int main() {
    Solution s;
    cout << s.isPowerOfTwo(20);
    return 0;
}