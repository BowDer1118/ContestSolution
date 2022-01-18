#include <bits/stdc++.h>
using namespace std;
class Solution {
public:
    uint32_t reverseBits(uint32_t n) {
        stack<int> s;
        int bit;
        while (n) {
            bit = n % 2;
            n /= 2;
            s.push(bit);
            printf("%d", bit);
        }
        uint32_t sum = 0;
        int times = 0;
        while (!s.empty()) {
            sum += s.top() * uint32_t(pow(2, times));
            s.pop();
            times++;
        }
        return sum;
    }
};
int main() {
    Solution s;
    cout << s.reverseBits(11);
    return 0;
}