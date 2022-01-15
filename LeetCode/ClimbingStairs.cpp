#include <bits/stdc++.h>
using namespace std;
class Solution {
public:
    //�g��DP
    int climbStairs(int n) {
        //��1�� �u��1�إi��
        //��2�� ����إi�� ��1��*2 or ��2��
        //��3�� �N�O(��2���i���)�b+1��
        int dp[50];  //1<=n<=50
        memset(dp, 0, sizeof(dp));
        dp[0] = 0;
        dp[1] = 1;
        dp[2] = 2;
        for (int i = 3; i <= 45; i++) {
            dp[i] = dp[i - 2] + dp[i - 1];
        }
        return dp[n];
    }
};
int main() {
    Solution s;
    cout << s.climbStairs(3);
    return 0;
}