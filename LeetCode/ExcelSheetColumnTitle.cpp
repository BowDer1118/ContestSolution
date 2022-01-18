#include <bits/stdc++.h>
using namespace std;
class Solution {
public:
    string convertToTitle(int columnNumber) {
        string result;
        int n;
        while (columnNumber) {
            n = columnNumber % 26;
            if (n == 0) {
                result += 'Z';
                columnNumber /= 26;
                columnNumber--;
            } else {
                columnNumber /= 26;
                result += (char)(64 + n);
            }
        }
        reverse(result.begin(), result.end());
        return result;
    }
};
int main() {
    Solution s;
    cout << s.convertToTitle(26);
    return 0;
}