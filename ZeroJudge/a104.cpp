#include <algorithm>
#include <iostream>
#include <vector>
using namespace std;

int main() {
    int num, input;
    vector<int> v;
    while (cin >> num) {
        v.clear();
        for (int i = 0; i < num; i++) {
            cin >> input;
            v.emplace_back(input);
        }
        sort(v.begin(), v.end());
        for (int i = 0; i < v.size(); i++) {
            if (i != v.size() - 1) {
                cout << v[i] << " ";
            } else {
                cout << v[i] << endl;
            }
        }
    }
    return 0;
}