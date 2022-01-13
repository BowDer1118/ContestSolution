#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    //先出現後匹配--->使用stack
    bool isValid(string s) {
        if (s.size() % 2 != 0) {
            return false;
        }
        stack<char> st;
        for (int i = 0; i < s.size(); i++) {
            //左半邊--->推入stack
            if (s[i] == '{' || s[i] == '[' || s[i] == '(') {
                st.push(s[i]);
                continue;
            }
            //如果出現右半邊 但沒有左半邊--->不合法格式
            if (!st.size()) {
                return false;
            }
            //嘗試匹配--->成功丟掉 失敗代表不合法格式
            if (s[i] == '}') {
                if (st.top() == '{') {
                    st.pop();
                } else {
                    return false;
                }
            }
            if (s[i] == ']') {
                if (st.top() == '[') {
                    st.pop();
                } else {
                    return false;
                }
            }
            if (s[i] == ')') {
                if (st.top() == '(') {
                    st.pop();
                } else {
                    return false;
                }
            }
        }
        if (st.size()) {
            return false;
        } else {
            return true;
        }
    }
};

int main() {
    Solution s;
    cout << s.isValid("()[]{}");
    return 0;
}