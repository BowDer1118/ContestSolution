#include <bits/stdc++.h>
using namespace std;

/*
    暴力搜索:但省去不可能的選項

    marked陣列用存放 當前被標記的人的 編號
    ex: 3 1 9 4 //{3,1,9}一組
        marked[3]=1;
        marked[1]=1;
        marked[9]=1;

    如果marked[index]=1 則 編號index的人 已被選中過
*/

int a[100],b[100],c[100],s[100],marked[10];

int main(){
    int n,cas,total,maxT;
    cas=1;
    while(true){
        scanf("%d",&n);
        if(n==0){
            break;
        }

        //陣列索引範圍[i,n]
        for(int i=1;i<=n;i++){
            scanf("%d %d %d %d",&a[i],&b[i],&c[i],&s[i]);
        }

        maxT=-1; //初始化最大總分(-1代表沒有可能組合出合理隊伍)
        total=0;
        for(int i=1;i<=n;i++){ //固定第一組
            marked[a[i]]=marked[b[i]]=marked[c[i]]=1; //標記第一組成員
            total+=s[i];//加上第一組分數
            
            for(int j=(i+1);j<=n;j++){ //固定第二組(從第一組的下一種組合嘗試)
                //如果第二組有任一人被選中過--->排除此次可能
                if(marked[a[j]]||marked[b[j]]||marked[c[j]]){ 
                    continue;
                }
                marked[a[j]]=marked[b[j]]=marked[c[j]]=1;
                total+=s[j];

                for(int k=(j+1);k<=n;k++){  //(從第二組的下一種組合嘗試)
                    //如果第三組有任一人被選中過--->排除此次可能
                    if(marked[a[k]]||marked[b[k]]||marked[c[k]]){ 
                        continue;
                    }
                    maxT=max(total+s[k],maxT);
                }

                marked[a[j]]=marked[b[j]]=marked[c[j]]=0;
                total-=s[j];
            }

            marked[a[i]]=marked[b[i]]=marked[c[i]]=0; //移除標記
            total-=s[i];//移除第一組分數
        }

        printf("Case %d: %d\n",cas++,maxT);
    }
    return 0;
}