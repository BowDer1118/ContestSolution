#include <algorithm>
#include <cstring>
#include <iostream>
using namespace std;

/*
    [算法]
    將每個老鼠據點 依照炸彈範圍 標記在地圖上
    每個座標上都會標記出 可以打到老鼠的數量

    因此標記完老鼠據點後 直接掃描整個地圖 就能決定炸彈要丟在哪

    [複雜度]
    老鼠據點數*(炸彈範圍)*(掃描地圖)
    20000*(range*range)+(1026*1026)=51052676
*/

int arr[1026][1026];              //存整個地圖
int cases, range, posNum;         //存case數量、炸彈範圍、老鼠據點數量
int resultX, resultY, resultNum;  //存炸到最多老鼠的座標與老鼠數量
int tempX, tempY, tempNum;        //存老鼠據點資料(x,y,數量)

int main() {
    scanf("%d", &cases);
    while (cases--) {
        //初始化陣列
        for (int i = 0; i < 1026; i++) {
            memset(arr[i], 0, sizeof(arr[i]));
        }

        scanf("%d", &range);
        scanf("%d", &posNum);

        //標記每個據點在地圖上的位置
        for (int i = 0; i < posNum; i++) {
            scanf("%d %d %d", &tempX, &tempY, &tempNum);
            for (int x = max(0, tempX - range), upperX = min(tempX + range, 1025); x <= upperX; x++) {
                for (int y = max(0, tempY - range), upperY = min(tempY + range, 1025); y <= upperY; y++) {
                    arr[x][y] += tempNum;  //紀錄位置上能炸到的老鼠數量
                }
            }
        }
        resultNum = 0;

        //掃描整張地圖 找最大值
        for (int x = 0; x < 1026; x++) {
            for (int y = 0; y < 1026; y++) {
                if (arr[x][y] > resultNum) {
                    resultNum = arr[x][y];
                    resultX = x;
                    resultY = y;
                }
            }
        }

        printf("%d %d %d\n", resultX, resultY, resultNum);
    }
    return 0;
}