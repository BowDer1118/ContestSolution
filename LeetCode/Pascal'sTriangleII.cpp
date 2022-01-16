#include <bits/stdc++.h>
using namespace std;

class Solution {
   public:
    vector<int> getRow(int rowIndex) {
        vector<int> prev = {1};
        if (rowIndex == 0) {
            return prev;
        }
        vector<int> current;
        for (int i = 1; i < rowIndex + 1; i++) {
            current.push_back(1);
            for (int i = 0; i < prev.size() - 1; i++) {
                current.push_back(prev[i] + prev[i + 1]);
            }
            current.push_back(1);
            prev = current;
            current.clear();
        }
        return prev;
    }
};

int main() {
    Solution s;
    vector<int> r = s.getRow(3);
    for (int i = 0; i < r.size(); i++) {
        printf("%d ", r[i]);
    }
    return 0;
}