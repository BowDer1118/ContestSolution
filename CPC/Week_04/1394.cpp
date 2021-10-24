#include<cstdio>
#include<cstring>
#include<iostream>
#include<algorithm>
using namespace std;

const int MAXN = 10010;
int n , m , k , f[MAXN];

int main(){
	freopen("1394.in","r",stdin);
	freopen("1394.out","w",stdout);
    while(scanf("%d%d%d" , &n,&k,&m) && n+m+k){
         f[1] = 0;
         for(int i = 2 ; i < n ; i++)
             f[i] = (f[i-1]+k)%i; 
         f[n] = (f[n-1]+m)%n;
         printf("%d\n" , f[n]+1);
    }
    return 0;
}
