#include <algorithm>
#include <deque>
#include <iostream>
#include <stack>
using namespace std;

/*
    Infix to Postfix
    1.準備stack與queue

    2.設定權重(大壓小)
        (   ---> -1
        + - --->  5
        * / --->  9 
    3.運算規則
        1.遇到左括號 直接push入stack
        2.遇到右括號 從stack一直pop到queue直到 遇到左括號(並丟棄左括號)
    3.運算元(數字)
        直接放到queue
    4.運算子(符號)
        查看權重
        1.壓得住 push入stack
        2.壓不住 一直pop出stack到queue中 直到壓得住
*/

int main() {
    string str;
    deque<string> infix;
    stack<string> s;
    deque<string> postfix;
    int result;
    while (cin >> str) {
    }
    return 0;
}