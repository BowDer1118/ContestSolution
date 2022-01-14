#include <bits/stdc++.h>
using namespace std;

class Solution {
   public:
    //Require O(nlogn)--->given sorted array ---> binary search
    int searchInsert(vector<int>& nums, int target) {
        auto it = lower_bound(nums.begin(), nums.end(), target);
        return distance(nums.begin(), it);
    }
};

int main() {
    vector<int> v = {1, 3, 5, 6};
    Solution s;
    cout << s.searchInsert(v, 7);
    return 0;
}