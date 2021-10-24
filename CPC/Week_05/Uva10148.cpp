#include <bits/stdc++.h>
using namespace std;

struct Runner {
    int begin, end;
    Runner() {}
    Runner(int a, int b) : begin(a), end(b) {}
    bool operator<(const Runner &r) {
        //
        if (end < r.end) {
            return true;
        } else if (end == r.end) {
            if (begin < r.begin) {
                return false;
            } else {
                return true;
            }
        } else {
            return false;
        }
    }
};

Runner runners[1005];
bool marked[20010];        //標記[-10000~10000]是否放廣告
const int offset = 10000;  //讓[-10000~10000]偏移到[0~20000]
int cas, k, n;             //測資、最低廣告數、跑者數
int ta, tb;                //跑者起點、終點
int countK;                //計算當前跑者看到多少廣告
int countMark;             //計算總共投放了多少廣告
bool format = false;

int main() {
    // freopen("test.txt", "r", stdin);
    // freopen("result.txt", "w", stdout);
    scanf("%d", &cas);
    format = false;
    while (cas--) {
        scanf("%d %d", &k, &n);
        for (int i = 0; i < n; i++) {
            scanf("%d %d", &ta, &tb);
            if (ta > tb) {
                runners[i].begin = tb;
                runners[i].end = ta;
            } else {
                runners[i].begin = ta;
                runners[i].end = tb;
            }
            //加上座標偏移量
            runners[i].begin += offset;
            runners[i].end += offset;
        }

        sort(runners, runners + n);
        memset(marked, 0, sizeof(marked));
        countMark = 0;

        for (int i = 0; i < n; i++) {
            countK = k;

            //檢查看到的廣告數量
            for (int j = runners[i].end; runners[i].begin <= j && countK > 0; j--) {
                if (marked[j]) {
                    countK--;
                }
            }
            //補足還要看的數量
            for (int j = runners[i].end; runners[i].begin <= j && countK > 0; j--) {
                if (!marked[j]) {
                    marked[j] = true;
                    countMark++;
                    countK--;
                }
            }
        }

        if (format) {
            printf("\n");
        }

        printf("%d\n", countMark);
        for (int i = 0; i < 20010; i++) {
            if (marked[i]) {
                printf("%d\n", i - offset);
            }
        }
        format = true;
    }
    return 0;
}