#include <bits/stdc++.h>
using namespace std;

/*
    利用Binary Search找 
    右邊界:小於num的第一個質數
    左邊界:第一個質數
    從左和從右 湊出Pair

    C++ STL
    (1)lower_bound(container::begin,container::end,val):找第一個不小於val的位置
    (2)upper_bound(container::begin,container::end,val):找第一個大於val的位置

    詳細演算過程:信宏上課PPT
*/
const int MAXN = 32768 + 5;  //2^15=32768
bool primes[MAXN];

vector<int> p;

//質數篩法sieve of Eratosthenes
inline void findPrimes() {
    for (int i = 0; i < MAXN; i++) {
        primes[i] = true;
    }
    primes[0] = false;
    primes[1] = false;
    //將2的倍數全部刪掉(偶數不會是質數)
    for (int i = 4; i < MAXN; i += 2) {
        primes[i] = false;
    }
    //開始逐個檢查--->小心i*i會有overflow問題--->使用long long
    for (long long i = 3; i < MAXN; i += 2) {
        if (primes[i]) {                                   //如果之前還未被刪掉 才做篩法
            for (long long j = i * i; j < MAXN; j += i) {  //從i*i開始(因為i*2,i*3...都被前面處理完了)
                primes[j] = false;
            }
        }
    }
    //蒐集所有質數
    for (int i = 0; i < MAXN; i++) {
        if (primes[i]) {
            p.emplace_back(i);
        }
    }
}

int main() {
    findPrimes();
    int num;
    int lowerIndex, upperIndex;  //左邊界右邊界
    int count;                   //紀錄找到多少組(p1,p2)使得p1+p2=num
    int sum;                     //紀錄左右端點兩個數字相加的和
    while (true) {
        scanf("%d", &num);
        if (num == 0) {
            break;
        }
        if (num % 2 != 0 || num < 4) {  //排除奇數與小於4
            continue;
        }
        count = 0;
        //找小於等於num的第一個位置(也就是大於num的位置-1)--->(lower_bound位置-1)
        upperIndex = distance(p.begin(), lower_bound(p.begin(), p.end(), num));
        if (upperIndex > 0) {
            upperIndex--;
        }
        lowerIndex = 0;
        while (lowerIndex <= upperIndex) {  //還沒交錯(還有組合的方式)
            sum = p[lowerIndex] + p[upperIndex];
            if (sum == num) {  //相等
                count++;
                //左右邊界往中間走 找下一種可能
                lowerIndex++;
                upperIndex--;
            } else if (sum > num) {  //右邊界+左邊界>sum 代表右邊界太大了--->右邊界向左 縮小右邊界
                upperIndex--;        //右邊界往左移動
            } else {                 //如果當前右邊界+左邊界<sum代表繼續尋找適合的左邊界 代表左邊界太小 左邊界增加
                lowerIndex++;
            }
        }
        printf("%d\n", count);
    }
    return 0;
}