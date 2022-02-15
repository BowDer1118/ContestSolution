#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    int missingNumber(vector<int>& nums) {
        int sum = 0;
        for (int i = 1; i <= nums.size(); i++) {
            sum += i;
        }
        for (int i : nums) {
            sum -= i;
        }
        return sum;
    }
};

int main() {
    Solution s;
    return 0;
}