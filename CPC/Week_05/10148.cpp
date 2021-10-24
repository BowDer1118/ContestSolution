#include <stdio.h>
#include <string.h>

#include <algorithm>
using namespace std;

int t;
int k, n, billboard[20005];
int adv[20005], advnum;
struct People {
    int start;
    int end;
    int numadvseen;
} jogger[1005];

int cmp(People a, People b) {
    if (a.end != b.end)
        return a.end < b.end;
    return a.start > b.start;
}
int main() {
    freopen("10148.in", "r", stdin);
    freopen("10148.out", "w", stdout);
    scanf("%d", &t);
    while (t--) {
        advnum = 0;
        memset(jogger, 0, sizeof(jogger));
        memset(billboard, 0, sizeof(billboard));
        scanf("%d%d", &k, &n);
        for (int i = 0; i < n; i++) {
            scanf("%d%d", &jogger[i].start, &jogger[i].end);
            if (jogger[i].start > jogger[i].end)
                swap(jogger[i].start, jogger[i].end);
        }
        sort(jogger, jogger + n, cmp);
        for (int i = 0; i < n; i++) {
            for (int j = jogger[i].end; j >= jogger[i].start; j--) {
                if (billboard[j + 10000])
                    jogger[i].numadvseen++;
                if (jogger[i].numadvseen == k)
                    break;
            }
            for (int j = jogger[i].end; j >= jogger[i].start; j--) {
                if (jogger[i].numadvseen == k)
                    break;
                if (!billboard[j + 10000]) {
                    jogger[i].numadvseen++;
                    adv[advnum++] = j;
                    billboard[j + 10000] = 1;
                }
            }
        }
        sort(adv, adv + advnum);
        printf("%d\n", advnum);
        for (int i = 0; i < advnum; i++)
            printf("%d\n", adv[i]);
        if (t)
            printf("\n");
    }
    return 0;
}
