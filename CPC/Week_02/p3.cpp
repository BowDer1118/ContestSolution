#include <bits\stdc++.h>
using namespace std;

int arr[10];
int cases, num, temp;

int main() {
    scanf("%d", &cases);
    while (cases--) {
        memset(arr, 0, sizeof(arr));
        scanf("%d", &num);
        for (int i = 1; i <= num; ++i) {
            temp = i;
            while (temp != 0) {
                arr[temp % 10] += 1;
                temp /= 10;
            }
        }
        for (int i = 0; i < 10; i++) {
            if (i != 9) {
                printf("%d ", arr[i]);
            } else {
                printf("%d\n", arr[i]);
            }
        }
    }
    return 0;
}