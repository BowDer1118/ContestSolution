#include <algorithm>
#include <iostream>
#include <stack>
using namespace std;

int main() {
    stack<int> s;
    int n, ask, temp;
    scanf("%d", &n);
    while (n--) {
        scanf("%d", &ask);
        if (ask == 1) {
            s.pop();
        } else if (ask == 2) {
            printf("%d\n", s.top());
        } else {
            scanf("%d", &temp);
            s.push(temp);
        }
    }
    return 0;
}