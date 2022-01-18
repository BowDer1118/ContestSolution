#include <bits/stdc++.h>

#include <unordered_set>
using namespace std;

class Solution {
public:
    bool isHappy(int n) {
        unordered_set<int> s;
        s.insert(n);
        int newN;
        int d;
        while (true) {
            newN = 0;
            while (n) {
                d = n % 10;
                newN += d * d;
                n /= 10;
            }
            if (newN == 1) {
                break;
            }
            //重複出現或未出現
            if (s.find(newN) != s.end()) {
                return false;
            } else {
                s.insert(newN);
                n = newN;
            }
        }
        return true;
    }
};

int main() {
    Solution s;
    cout << s.isHappy(19);
    return 0;
}