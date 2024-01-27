//https://www.luogu.com.cn/problem/P2848
//简单的DP,用dp[i][j][2]表示，dp[i][j]表示第一组匹配到了第i个，第二组匹配到了第j个，

//[0]表示停在第一组，[1]表示停在第二组；转移方程详见代码
#include <cstdio>
#include <cstring>
#define ll long long 
#define inf 2000000000
int const N=1000+5;
struct node{
    int x,y;
}a[N<<1];
int n,m,d[N<<1][N<<1];
ll dp[N][N][2];
ll min(ll x,ll y){return x<y?x:y;}
int main(){
//    freopen("a.in","r",stdin);
    scanf("%d%d",&n,&m);
    for(int i=1;i<=n+m;++i) scanf("%d%d",&a[i].x,&a[i].y);
    for(int i=1;i<=n+m;++i)
        for(int j=i+1;j<=n+m;++j)
            d[i][j]=(a[i].x-a[j].x)*(a[i].x-a[j].x)+(a[i].y-a[j].y)*(a[i].y-a[j].y);
    for(int i=0;i<=n;++i)
        for(int j=0;j<=m;++j)
            for(int k=0;k<=1;++k)
                dp[i][j][k]=inf;
    dp[1][0][0]=0;
    for(int i=1;i<=n;++i)
        for(int j=0;j<=m;++j){
            dp[i][j][0]=min(dp[i][j][0],min(dp[i-1][j][0]+d[i-1][i],dp[i-1][j][1]+d[i][n+j]));
            if(j) dp[i][j][1]=min(dp[i][j][1],min(dp[i][j-1][0]+d[i][n+j],dp[i][j-1][1]+d[n+j-1][n+j]));
        }    
    printf("%lld",dp[n][m][0]);
    return 0;
}
