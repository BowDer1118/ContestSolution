#include <bits/stdc++.h>
using namespace std;

int main() {
    vector<int> v = {1, 3, 5, 7};
    cout << *lower_bound(v.begin(), v.end(), 5);
    return 0;
}