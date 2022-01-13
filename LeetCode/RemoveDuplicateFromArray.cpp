#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    int removeDuplicates(vector<int>& nums) {
        int len = distance(nums.begin(), unique(nums.begin(), nums.end()));
        return len;
    }
};

int main() {
    Solution s;
    vector<int> v = {0, 0, 1, 1, 1, 2, 2, 3, 3, 4};
    cout << s.removeDuplicates(v);
    return 0;
}