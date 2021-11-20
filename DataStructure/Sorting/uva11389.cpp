#include <bits/stdc++.h>
using namespace std;

/*
    將 早上最小+晚上最大 的班排給司機 就可以組合成最低的小時數
*/

const int MAXN = 105;
int moring[MAXN];
int evening[MAXN];
int n, d, r;
int payment;  //紀錄要多付的錢
int sum;      //計算每位司機的工作時間
int main() {
    // freopen("test.txt", "r", stdin);
    // freopen("result.txt", "w", stdout);

    while (scanf("%d %d %d", &n, &d, &r)) {
        if (n == 0 && d == 0 && r == 0) {
            break;
        }

        for (int i = 0; i < n; i++) {
            scanf("%d", &moring[i]);
        }

        for (int i = 0; i < n; i++) {
            scanf("%d", &evening[i]);
        }

        payment = 0;
        sort(moring, moring + n);                    //從小排到大
        sort(evening, evening + n, greater<int>());  //從大排到小

        for (int i = 0; i < n; i++) {
            sum = moring[i] + evening[i];  //司機的工作時數
            if (sum > d) {                 //超時
                payment += (sum - d) * r;  //額外需要支付的錢
            }
        }
        printf("%d\n", payment);
    }
    return 0;
}