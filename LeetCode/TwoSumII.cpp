#include <bits/stdc++.h>
using namespace std;
class Solution {
public:
    vector<int> twoSum(vector<int>& numbers, int target) {
        const int offset = 1000;
        //-1000~1000 ¹w³]³£-1
        vector<int> table(2005, -1);  //numbers[i]=value --->table[value]=i
        for (int i = 0; i < numbers.size(); i++) {
            table[numbers[i] + offset] = i;
        }
        for (int i = 0; i < numbers.size(); i++) {
            if (table[target - numbers[i] + offset] != -1) {
                return {i + 1, table[target - numbers[i] + offset] + 1};
            }
        }
        return {};
    }
};
int main() {
    Solution s;
    return 0;
}