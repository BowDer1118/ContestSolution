#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    //使用二分搜找第一個mid*mid<x的值
    int mySqrt(int x) {
        //排除1
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