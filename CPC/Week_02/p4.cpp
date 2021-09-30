#include <bits\stdc++.h>
using namespace std;

vector<int> maxV;
vector<int> eachV;

bool arr[101][101];
int row, col;
int tr, tc;

//座標轉數字
inline int getNum(int r, int c) {
    return (r - 1) * col + c;
}

int main() {
    while (true) {
        scanf("%d %d", &row, &col);
        if (row == col && row == -1) {
            break;
        }

        //初始化要使用的空間
        for (int i = 1; i <= row; i++) {
            for (int j = 1; j <= col; j++) {
                arr[i][j] = false;
            }
        }

        while (true) {
            scanf("%d %d", &tr, &tc);
            if (tr == tc && tr == 0) {
                break;
            }
            arr[tr][tc] = true;
        }

        //初始化紀錄的vector
        maxV.clear();
        eachV.clear();
        //開始找所有可能
    }
    return 0;
}