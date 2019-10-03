#include<iostream>

using namespace std;
const int maxn=1<<12;
long long dp[2][maxn];
int cur,n,m;

void add(int a,int b){
    if(b&(1<<m))
        dp[cur][b^(1<<m)]+=dp[cur^1][a];
}

int main(){
    while(scanf("%d%d",&n,&m)!=EOF){
        if(n<m)
            swap(n,m);
        int all=(1<<m)-1;
        memset(dp,0,sizeof(dp));
        dp[0][all]=1;
        cur=0;
        for(int i=0;i<n;i++)
            for(int j=0;j<m;j++){
                cur^=1,memset(dp[cur],0,sizeof(dp[cur]));
                for(int sta=0;sta<=all;sta++){
                    if(dp[cur^1][sta]==0)
                        continue;
                    add(sta,sta<<1);//这个点不放,sta<<1让sta的最后一位为0
                    if(i && !(sta & ( 1<<(m-1) ) ) )//竖着放,不是第一行,而且上面的位置没放
                        add(sta,(sta<<1)^(1<<m)^1);
                    if(j && !(sta & 1) )    //横着放
                        add(sta,(sta<<1)^3);
                }
            }
        printf("%lld\n",dp[cur][all]);
    }
    return 0;
}