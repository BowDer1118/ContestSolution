#include <bits/stdc++.h>
using namespace std;

/*
    要能夠成立方體則必須符合以下條件
    x y
    x y
    x z
    x z
    y z
    y z
*/

pair<int,int> edge[10];
int ta,tb;

int main(){
    while(scanf("%d %d",&ta,&tb)!=EOF){
        if(ta>tb){
            edge[1]={tb,ta};
        }else{
            edge[1]={ta,tb};
        }
        for(int i=2;i<=6;i++){
            scanf("%d %d",&ta,&tb);
            if(ta>tb){
                edge[i]={tb,ta};
            }else{
                edge[i]={ta,tb};
            }
        }
        sort(edge+1,edge+1+6);
        
        if(edge[1]!=edge[2]||edge[3]!=edge[4]||edge[5]!=edge[6]){
            puts("IMPOSSIBLE");
        }else{
            if(edge[1].first!=edge[3].first){
                puts("IMPOSSIBLE"); 
            }else if(edge[3].second!=edge[5].second){
                puts("IMPOSSIBLE");
            }else if(edge[5].first!=edge[1].second){
                puts("IMPOSSIBLE");
            }else{
                puts("POSSIBLE");
            }
        }
    }
    return 0;
}