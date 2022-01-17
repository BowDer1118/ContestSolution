#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    //�Q��DP����
    int maxProfit(vector<int>& prices) {
        const int n = prices.size();
        //��n�ѳ̧C������
        vector<int> low_prices(n);
        //��n�ѽ汼�����q
        vector<int> profix(n);
        low_prices[0] = prices[0];
        profix[0] = 0;
        //�p���0~i�ѳ̧C������
        for (int i = 1; i < n; i++) {
            low_prices[i] = min(prices[i], low_prices[i - 1]);
        }
        // for (int i = 0; i < n; i++) {
        //     printf("%d ", low_prices[i]);
        // }
        // printf("\n");
        //�p�ⰲ�]��i�ѽ汼�����q
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