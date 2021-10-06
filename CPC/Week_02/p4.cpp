#include <bits\stdc++.h>
using namespace std;

/*
    Longest Increase Sequence

    index 0  1  2  3  4  5  6  7
    arr   2  4 11 13 25 28 41 42
    lis   1  2  3  4  4  5  5  6
    num   1  1  1  1  1  2  2  4
    path -1  0  1  2  2  3  3  5

    利用col的數值判斷在左邊還是右邊(是否可以到達) 
*/

const int maxNum = 105;
int r, c, x, y, pos;
int arr[maxNum], lis[maxNum], num[maxNum], path[maxNum];
bool hasG;

void show_path(int i) {
    if (i == -1) {
        return;
    }
    show_path(path[i]);
    printf(" %d", arr[i]);
}

int main() {
    int cases = 1;
    while (true) {
        scanf("%d %d", &r, &c);
        if (r == -1 && c == -1) {
            break;
        }
        //陣列終點arr[0,pos)
        pos = 0;
        while (true) {
            scanf("%d %d", &x, &y);
            if (x == 0 && y == 0) {
                break;
            }
            if (x == r && y == c) {
                hasG = true;
            } else {
                hasG = false;
            }
            arr[pos++] = (x - 1) * c + y;
        }
        //假設最右下角的位置有垃圾(因為都要走到)
        if (!hasG) {
            arr[pos++] = r * c;
        }

        //對arr[1,pos)
        for (int i = 0; i < pos; i++) {
            lis[i] = 1;
            num[i] = 1;
            path[i] = -1;
            for (int j = 0; j < i; j++) {
                //讓arr[index]-1 避免arr[index]%c時 位置錯誤(最右邊卻因為%c==0變成最左邊)
                if (((arr[j] - 1) % c) <= ((arr[i] - 1) % c)) {  //arr[j]在自己的頭上或左上

                    //可以先經過arr[j]在到arr[i]
                    // lis[i] = lis[j] + 1;
                    // num[i] = num[j];
                    // path[i] = j;
                    // if (j != 0) {  //lis[i]==lis[j]
                    //     if (lis[j] == lis[j - 1]) {
                    //         num[i] += num[j - 1];
                    //         path[i] = j - 1;
                    //     }
                    // }

                    //可以先經過arr[j]在到arr[i]
                    if (lis[i] == lis[j] + 1) {
                        num[i] += num[j];
                    } else if (lis[i] < lis[j] + 1) {
                        lis[i] = lis[j] + 1;
                        num[i] = num[j];
                        path[i] = j;
                    }
                }
            }
        }

        if (!hasG) {
            lis[pos - 1]--;  //扣掉多算的垃圾
        }

        printf("CASE#%d: %d %d", cases++, lis[pos - 1], num[pos - 1]);

        show_path(path[pos - 1]);

        if (hasG) {
            //最後一個值
            printf(" %d", arr[pos - 1]);
        }
        printf("\n");
    }
    return 0;
}