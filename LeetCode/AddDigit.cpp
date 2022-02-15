#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    int addDigits(int num) {
        if (num % 9 == 0 && num) {
            return 9;
        } else {
            return num % 9;
        }
    }
};

int main() {
    Solution s;
    return 0;
}