/* author: Rainboy email: rainboylvx@qq.com  time: 2021年 08月 27日 星期五 08:51:50 CST */
#include <bits/stdc++.h>
using namespace std;
#define inf 0x3f3f3f3f
int a[11000];
int b[11000];
int n;
int main() {
    scanf("%d",&n);
    n*=2;
    for(int i=1;i<=n;++i) scanf("%d",&a[i]);
    int ans = inf;
    sort(a+1,a+1+n);
    for(int i=1;i<=n;++i){
        for(int j=i+1;j<=n;++j){ //枚举两个人 i，j 坐单人
            vector<int> v;
            for(int k=1;k<=n;++k){
                if( i != k && j != k)
                    v.push_back(a[k]);
            }
            int t = 0;
            for(int k=1;k<v.size();k+=2){
                t += v[k] - v[k-1];
            }

            //for(int k=0;k<v.size();++k){
                ////t += a[k] - a[k-1];
                //printf("%d ",v[k]);
            //}
            ans = min(t,ans);
            //printf("->%d\n",t);
        }
    }
    printf("%d",ans);
    return 0;
}
