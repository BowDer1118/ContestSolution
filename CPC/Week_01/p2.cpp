#include <algorithm>
#include <iostream>
#include <vector>
using namespace std;

/*
    棋譜是從chessBorad[1][1]chessBoard[8][8]
    放置皇后的陣列表達方法是palce_queen[c]=r 
    代表index值c是代表第c個Column上 皇后在第r個Row

    使用dfs搜尋所有放置可能
    使用backtracking 提早從不可能的選項中離開 (剪枝)
*/

int chessBoard[9][9];
int place_queens[9];
int cases;
int maxTotal, eachTotal;  //紀錄最大權重與每種可能的權重

//檢查 是否可以在chessBoard[c][r]放皇后
bool conflict(int c, int r) {
    for (int i = 1; i < c; i++) {    //掃描place_queen陣列 檢查皇后是否衝突
        if (place_queens[i] == r) {  //左右衝突
            return true;
        }
        if (abs(c - i) == abs(place_queens[i] - r)) {  //左上或左下斜對角
            return true;
        }
    }
    return false;
}

void dfs(int c) {
    if (c == 9) {  //每個Col都放置皇后--->找到其中一種可能
        eachTotal = 0;
        for (int i = 1; i <= 8; i++) {
            //將皇后權重相加
            eachTotal += chessBoard[i][place_queens[i]];
        }
        //決定 最大權重
        maxTotal = max(maxTotal, eachTotal);
        return;
    }

    //Backtracking+Recursive
    for (int r = 1; r <= 8; r++) {  //掃描當前Col中的所有Row 是否可以放置皇后
        //剪枝條件--->如果當前不可能在放得下皇后--->不往下Col搜尋
        if (!conflict(c, r)) {  //如果當前Col可以放置皇后
            place_queens[c] = r;
            dfs(c + 1);  //往下一個Col dfs直到conflict
        }
    }
}

int main() {
    scanf("%d", &cases);
    while (cases--) {
        for (int i = 1; i <= 8; i++) {
            for (int j = 1; j <= 8; j++) {
                scanf("%d", &chessBoard[i][j]);
            }
        }

        maxTotal = 0;

        for (int i = 1; i <= 8; i++) {
            place_queens[i] = -1;
        }

        //找所有可能放置皇后的可能 並找大最大可能
        dfs(1);  //從Col 1 開始嘗試

        printf("%5d\n", maxTotal);
    }
    return 0;
}