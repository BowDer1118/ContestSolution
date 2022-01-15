#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    void merge(vector<int>& nums1, int m, vector<int>& nums2, int n) {
        vector<int> result;
        for (int i = m - 1; i >= 0; i--) {
            result.push_back(nums1[i]);
        }
        for (int i = n - 1; i >= 0; i--) {
            result.push_back(nums2[i]);
        }
        sort(result.begin(), result.end());
        nums1 = result;
    }
};

int main() {
    vector<int> v1 = {1, 2, 3, 0, 0, 0};
    vector<int> v2 = {2, 5, 6};
    Solution s;
    s.merge(v1, 3, v2, 3);
    return 0;
}