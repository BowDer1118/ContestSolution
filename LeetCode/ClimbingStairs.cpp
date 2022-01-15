#include <bits/stdc++.h>
using namespace std;
class Solution {
public:
    //經典DP
    int climbStairs(int n) {
        //爬1階 只有1種可能
        //爬2階 有兩種可能 爬1階*2 or 爬2階
        //爬3階 就是(爬2階可能性)在+1階
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