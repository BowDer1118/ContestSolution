#include <bits/stdc++.h>
using namespace std;
class Solution {
public:
    //DP 砏:v[i]1计 v[i/2] or v[i/2]+1计
    //EX: 6 -->0110 13-->1101
    vector<int> countBits(int n) {
        vector<int> v(n + 1);
        //0-->0000-->01
        v[0] = 0;
        if (n == 0) {
            return v;
        }
        //1-->0001-->11
        v[1] = 1;
        if (n == 1) {
            return v;
        }
        for (int i = 2; i <= n; i++) {
            //案计
            if (i % 2 == 0) {
                v[i] = v[i / 2];
            } else {
                v[i] = v[i / 2] + 1;
            }
        }
        return v;
    }
};
int main() {
    Solution s;
    return 0;
}