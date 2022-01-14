#include <bits/stdc++.h>
using namespace std;

class Solution {
   public:
    //程计拜肈--->Kadane's Algorithm--->O(n)
    int maxSubArray(vector<int>& nums) {
        //矪瞶场常琌璽计篈
        int maxValue = *max_element(nums.begin(), nums.end());
        if (maxValue <= 0) {
            return maxValue;
        }
        //Kadane's 簍衡猭
        vector<int> record;
        record.push_back(nums[0]);
        for (int i = 1; i < nums.size(); i++) {
            if (record[i - 1] < 0) {  //玡篈 璽计 --->ㄏノ讽玡计蠢(讽秨﹍)
                record.push_back(nums[i]);
            } else {  //讽玡篈
                record.push_back(record[i - 1] + nums[i]);
            }
        }
        maxValue = *max_element(record.begin(), record.end());
        return maxValue;
    }
};

int main() {
    Solution s;
    vector<int> v = {-2, 1, -3, 4, -1, 2, 1, -5, 4};
    cout << s.maxSubArray(v);
    return 0;
}