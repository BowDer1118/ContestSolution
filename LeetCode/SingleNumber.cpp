#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    //利用XOR運算
    //https://www.youtube.com/watch?v=Hy1hE0HBR3U
    int singleNumber(vector<int>& nums) {
        //Time:O(1)
        //SpaceO(n)
        // //處理只有一個元素
        // if (nums.size() == 1) {
        //     return nums[0];
        // }
        // //-3*10000~3*10000 --> 0~6*100000
        // int offset = 3 * 10000;
        // vector<int> v(2 * 3 * 10000 + 3, 0);
        // //統計該數字出現次數
        // for (int i = 0; i < nums.size(); i++) {
        //     v[nums[i] + offset]++;
        // }
        // for (int i = 0; i < v.size(); i++) {
        //     if (v[i] == 1) {
        //         return i - offset;
        //     }
        // }
        // return -1;

        //Time:O(n)
        //Space:O(1)
        int n = 0;
        for (int i = 0; i < nums.size(); i++) {
            n = n ^ nums[i];
        }
        return n;
    }
};

int main() {
    vector<int> v = {4, 1, 2, 1, 2};
    Solution s;
    cout << s.singleNumber(v);
    return 0;
}