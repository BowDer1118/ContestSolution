#include <bits/stdc++.h>
using namespace std;

class MinStack {
public:
    deque<int> d;
    multiset<int> s;
    MinStack() {
        d.clear();
    }

    void push(int val) {
        d.push_back(val);
        s.insert(val);
    }

    void pop() {
        auto it = s.find(d.back());
        s.erase(it);
        d.pop_back();
    }

    int top() {
        return d.back();
    }

    int getMin() {
        return *s.begin();
    }
};

/**
 * Your MinStack object will be instantiated and called as such:
 * MinStack* obj = new MinStack();
 * obj->push(val);
 * obj->pop();
 * int param_3 = obj->top();
 * int param_4 = obj->getMin();
 */

int main() {
    MinStack m;
    m.push(0);
    m.push(1);
    m.push(0);
    cout << m.getMin() << "\n";
    m.pop();
    m.top();
    cout << m.getMin() << "\n";
    return 0;
}