#include <algorithm>
#include <iostream>
using namespace std;

/*
    判斷平閏年
    [閏年]
    1.year%4==0 &&year%100!=0
    2.year%400==0
*/

int main() {
    int year;
    while (cin >> year) {
        if (year % 400 == 0 || (year % 4 == 0 && year % 100 != 0)) {
            cout << "閏年";
        } else {
            cout << "平年";
        }
        cout << endl;
    }
    return 0;
}