#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    int removeElement(vector<int>& nums, int val) {
        auto pred = [val](int v) -> bool { return v == val; };
        return distance(nums.begin(), remove_if(nums.begin(), nums.end(), pred));
    }
};

int main() {
    vector<int> v = {0, 1, 2, 2, 3, 0, 4, 2};
    Solution s;
    cout << s.removeElement(v, 2);
    return 0;
}