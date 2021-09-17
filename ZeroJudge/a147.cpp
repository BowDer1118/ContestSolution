#include <algorithm>
#include <cstdio>
#include <iostream>
using namespace std;

int main() {
    int n;
    while (scanf("%d", &n) && n != 0) {
        for (int i = 1; i < n; i++) {
            if (i % 7 != 0) {
                if (i != n - 1) {
                    printf("%d ", i);
                } else {
                    printf("%d\n", i);
                }
            }
        }
    }
    return 0;
}