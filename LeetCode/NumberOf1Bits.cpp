#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    int hammingWeight(uint32_t n) {
        int ccount = 0;
        int bit;
        while (n) {
            bit = n % 2;
            if (bit == 1) {
                ccount++;
            }
            n /= 2;
        }
        return ccount;
    }
};

int main() {
    Solution s;
    return 0;
}