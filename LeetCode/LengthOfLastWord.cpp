#include <bits/stdc++.h>
using namespace std;
class Solution {
   public:
    int lengthOfLastWord(string s) {
        //¨Ï¥Îstringstream¦r¦ê¤Á³Î
        stringstream ss;
        string str;
        ss << s;
        while (ss >> str) {
        }

        return str.size();
    }
};
int main() {
    Solution s;
    cout << s.lengthOfLastWord("   fly me   to   the moon  ");
    return 0;
}