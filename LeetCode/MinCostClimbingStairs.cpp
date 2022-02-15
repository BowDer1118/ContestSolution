#include <bits/stdc++.h>
using namespace std;
class Solution {
public:
    //DP: dp[i]代表到第i個樓梯所需的最短花費 是min(dp[i-2],dp[i-1])+cost[i]
    int minCostClimbingStairs(vector<int>& cost) {
        vector<int> dp(cost.size() + 1);
        dp[0] = cost[0];
        dp[1] = cost[1];
        for (int i = 2; i < cost.size(); i++) {
            dp[i] = min(dp[i - 2], dp[i - 1]) + cost[i];
        }
        return min(dp[cost.size() - 1], dp[cost.size() - 2]);
    }
};
int main() {
    vector<int> v = {10, 15, 20};
    Solution s;
    cout << s.minCostClimbingStairs(v);
    return 0;
}