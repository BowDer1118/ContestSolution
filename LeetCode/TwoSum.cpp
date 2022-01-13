#include <bits/stdc++.h>

using namespace std;

class Solution {
public:
    //Time complexity O(n*1)
    vector<int> twoSum(vector<int>& nums, int target) {
        vector<int> ans;
        unordered_map<int, int> m;  //nums[i],i
        for (int i = 0; i < nums.size(); i++) {
            m.insert({nums[i], i});
        }
        unordered_map<int, int>::iterator it;
        for (int i = 0; i < nums.size(); i++) {
            it = m.find(target - nums[i]);
            if (it != m.end() && i != it->second) {  //Each element is distinct
                ans.push_back(i);
                ans.push_back(it->second);
                break;
            }
        }
        return ans;
    }
};

int main() {
    Solution s;
    vector<int> v = {3, 2, 4};
    s.twoSum(v, 6);
    return 0;
}