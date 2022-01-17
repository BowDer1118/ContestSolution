#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    //利用DP概念
    int maxProfit(vector<int>& prices) {
        const int n = prices.size();
        //第n天最低的價格
        vector<int> low_prices(n);
        //第n天賣掉的收益
        vector<int> profix(n);
        low_prices[0] = prices[0];
        profix[0] = 0;
        //計算第0~i天最低的價位
        for (int i = 1; i < n; i++) {
            low_prices[i] = min(prices[i], low_prices[i - 1]);
        }
        // for (int i = 0; i < n; i++) {
        //     printf("%d ", low_prices[i]);
        // }
        // printf("\n");
        //計算假設第i天賣掉的收益
        for (int i = 1; i < n; i++) {
            profix[i] = prices[i] - low_prices[i];
        }
        return *max_element(profix.begin(), profix.end());
    }
};

int main() {
    Solution s;
    vector<int> v = {2, 4, 1};
    cout << s.maxProfit(v);
    return 0;
}