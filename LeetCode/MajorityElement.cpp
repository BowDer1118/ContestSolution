#include <bits/stdc++.h>
using namespace std;
class Solution {
public:
    int majorityElement(vector<int>& nums) {
        const int n = nums.size();
        if (n == 1) {
            return nums[0];
        }
        unordered_map<int, int> m;
        for (int i = 0; i < n; i++) {
            if (m.find(nums[i]) == m.end()) {
                m[nums[i]] = 1;
            } else {
                if (m[nums[i]] + 1 >= n / 2 + 1) {
                    return nums[i];
                } else {
                    m[nums[i]]++;
                }
            }
        }
        return -1;
    }
};
int main() {
    Solution s;
    return 0;
}