#include <bits/stdc++.h>
using namespace std;

class Solution {
   public:
    //�̤j�l�ƦC���D--->Kadane's Algorithm--->O(n)
    int maxSubArray(vector<int>& nums) {
        //�B�z�������O�t�ƪ����A
        int maxValue = *max_element(nums.begin(), nums.end());
        if (maxValue <= 0) {
            return maxValue;
        }
        //Kadane's �t��k
        vector<int> record;
        record.push_back(nums[0]);
        for (int i = 1; i < nums.size(); i++) {
            if (record[i - 1] < 0) {  //�e�@���A ���t�� --->�ϥη�e�ƭȴ��N(��@�}�l)
                record.push_back(nums[i]);
            } else {  //�[�J��e���A
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