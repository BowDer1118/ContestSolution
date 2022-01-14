#include <bits/stdc++.h>
using namespace std;

class Solution {
   public:
    vector<int> plusOne(vector<int>& digits) {
        bool carry = false;
        for (int i = digits.size() - 1; i >= 0; i--) {
            if ((digits[i] + 1) == 10) {
                carry = true;
                digits[i] = 0;
            } else {
                digits[i]++;
                carry = false;
                break;
            }
        }
        if (carry) {
            digits.insert(digits.begin(), 1);
        }
        // for (int i = 0; i < digits.size(); i++) {
        //     printf("%d ", digits[i]);
        // }
        return digits;
    }
};

int main() {
    vector<int> d = {1, 2, 3};
    Solution s;
    s.plusOne(d);
    return 0;
}