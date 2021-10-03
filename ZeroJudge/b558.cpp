#include <iostream>
using namespace std;

int arr[501];

int main() {
    arr[1] = 1;
    for (int i = 2; i <= 500; i++) {
        arr[i] = arr[i - 1] + (i - 1);
    }
    int n;
    while (scanf("%d", &n) != EOF) {
        printf("%d\n", arr[n]);
    }
    return 0;
}