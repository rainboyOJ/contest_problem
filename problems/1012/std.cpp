/* author: Rainboy email: rainboylvx@qq.com  time: 2021年 07月 29日 星期四 19:13:56 CST */
// 核心思想 尽量 两个装起来
// 
#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
const int maxn = 1e6+5,maxe = 1e6+5; //点与边的数量

int n,m;
/* 定义全局变量 */

int a[maxn];
int main(){
    int w;
    scanf("%d",&w);
    scanf("%d",&n);
    for(int i=1;i<=n;++i){
        scanf("%d",&a[i]);
    }
    sort(a+1,a+1+n,greater<int>());
    //for(int i=1;i<=n;++i){
        //printf("%d ",a[i]);
    //}
    //printf("\n");
    int start = 1;
    int end = n;
    int ans=0;
    for( ;1;){
        if( start == end ){  // only one
            ans++;
            break;
        }
        // 至少两个物品
        if(a[start] + a[end]<= w) end--;
        start++;
        ans++;
        if( start > end) break;
        //printf("%d %d\n",start,end);
    }
    printf("%d",ans);
    return 0;
}
