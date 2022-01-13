#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    //���X�{��ǰt--->�ϥ�stack
    bool isValid(string s) {
        if (s.size() % 2 != 0) {
            return false;
        }
        stack<char> st;
        for (int i = 0; i < s.size(); i++) {
            //���b��--->���Jstack
            if (s[i] == '{' || s[i] == '[' || s[i] == '(') {
                st.push(s[i]);
                continue;
            }
            //�p�G�X�{�k�b�� ���S�����b��--->���X�k�榡
            if (!st.size()) {
                return false;
            }
            //���դǰt--->���\�ᱼ ���ѥN���X�k�榡
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