#include <bits/stdc++.h>
using namespace std;
class Solution {
public:
    bool isUgly(int n) {
        if (n <= 0) {
            return false;
        }
        int arr[3] = {2, 3, 5};
        int Index = 0;
        while (n > 1) {
            while (n % arr[Index] == 0) {
                n /= arr[Index];
            }
            if (n == 1) {
                break;
            }
            Index++;
            if (Index > 2) {
                return false;
            }
        }
        return true;
    }
};
int main() {
    Solution s;
    cout << s.isUgly(14);
    return 0;
}