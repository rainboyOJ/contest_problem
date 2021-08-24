#include<iostream>
#include<cstring>
using namespace std;
int min(int x,int y)//比较函数
{
    if(x>y)
        return y;
    else
        return x;
} 
int dp[1010][12010];
int main()
{
    int n,top[1001],under[1001];
    int sum[1001],result;
    int i,j;
    
    cin>>n;//输入牌数
    for(i=1;i<=n;i++)	
    {
        cin>>top[i]>>under[i];//输入上方、下方点数
    	sum[i]=top[i]-under[i];//每一组牌的上下差值
    }
    memset(dp,1,sizeof(dp));//将dp数组全部赋1值
    dp[0][5000]=0;
    for(i=1;i<=n;i++)//从第一组牌开始比较
        for(j=-5000;j<=5000;j++)//最小情况为上方1000张全为1，下方1000全为6；最大情况为上方1000张全为6，下方1000全为1
            dp[i][j+5000]=min(dp[i-1][j+5000-sum[i]] , dp[i-1][j+5000+sum[i]]+1);//比较每一次是翻转还是不翻转得到的值最小
 
    for(i=0;i<=5000;i++)
    {
        result=min(dp[n][i+5000],dp[n][-i+5000]);//比较每次是翻转或不翻转小
        if(result<=1000)//因为最多有1000张牌，因此最多移动1000次
        {
            cout<<result<<endl;
            break;
        }
    }
    return 0;
}
