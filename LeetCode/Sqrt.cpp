#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    //�ϥΤG���j��Ĥ@��mid*mid<x����
    int mySqrt(int x) {
        //�ư�1
        if (x <= 1) {
            return x;
        }
        long l = 1;
        long r = x;
        long mid = (l + r) / 2;
        while (l != mid) {
            if (mid * mid == x) {
                break;
            }
            if (mid * mid > x) {
                r = mid;
            } else {
                l = mid;
            }
            mid = (l + r) / 2;
        }
        return mid;
    }
};

int main() {
    Solution s;
    cout << s.mySqrt(10);
    return 0;
}