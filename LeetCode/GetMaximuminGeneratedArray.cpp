#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    int getMaximumGenerated(int n) {
        if (n == 0) {
            return 0;
        }
        if (n <= 2) {
            return 1;
        }
        vector<int> v(n + 1);
        v[0] = 0;
        v[1] = 1;
        int maxValue = v[1];
        for (int i = 2; i <= n; i++) {
            if (i % 2 == 0) {
                v[i] = v[i / 2];
            } else {
                v[i] = v[i / 2] + v[i / 2 + 1];
            }
            maxValue = max(maxValue, v[i]);
        }
        return maxValue;
    }
};

int main() {
    Solution s;
    cout << s.getMaximumGenerated(7);
    return 0;
}