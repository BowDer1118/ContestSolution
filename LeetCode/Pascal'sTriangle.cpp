#include <bits/stdc++.h>
using namespace std;
class Solution {
   public:
    vector<vector<int>> generate(int numRows) {
        vector<vector<int>> v;
        for (int i = 0; i < numRows; i++) {
            v.push_back(vector<int>());
        }
        v[0].push_back(1);
        for (int i = 1; i < numRows; i++) {
            v[i].push_back(1);
            for (int j = 0; j < v[i - 1].size() - 1; j++) {
                v[i].push_back(v[i - 1][j] + v[i - 1][j + 1]);
            }
            v[i].push_back(1);
        }
        return v;
    }
};
int main() {
    Solution s;
    return 0;
}