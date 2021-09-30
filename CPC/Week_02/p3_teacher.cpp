#include <bits\stdc++.h>
using namespace std;

/*
    查表法
    arr[n][0~9]

    0 1 2 3 4 5 6 7 8 9 n
    0 0 0 0 0 0 0 0 0 0 0
    0 1 0 0 0 0 0 0 0 0 1=0+1
    0 1 1 0 0 0 0 0 0 0 12=1+2
    0 1 1 1 0 0 0 0 0 0 123=12+3
    0 1 1 1 1 0 0 0 0 0 1234=123+4
    ....
*/
int arr[100000][10];  // 0~9999的digit統計
int cases, temp, ask;

int main() {
    for (int i = 0; i < 10; i++) {
        arr[0][i] = 0;  //0
    }
    for (int i = 1; i < 100000; i++) {
        //上一次統計的值
        for (int j = 0; j < 10; j++) {
            arr[i][j] = arr[i - 1][j];
        }
        //新加入的值
        temp = i;
        while (temp != 0) {
            arr[i][temp % 10]++;
            temp /= 10;
        }
    }
    scanf("%d", &cases);
    while (cases--) {
        scanf("%d", &ask);  //直接查表
        for (int i = 0; i < 9; i++) {
            printf("%d ", arr[ask][i]);
        }
        printf("%d\n", arr[ask][9]);
    }
    return 0;
}