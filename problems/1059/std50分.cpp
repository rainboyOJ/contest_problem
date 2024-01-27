#include<iostream>
#include<cstdio>
#include<cstring>
#include<cstdlib>
#include<algorithm>
#include<cmath>
#include<vector>
using namespace std;
inline int read()
{
    int x=0,f=1;char ch=getchar();
    while(ch<'0'||ch>'9'){if(ch=='-')f=-1;ch=getchar();}
    while(ch>='0'&&ch<='9'){x=x*10+ch-'0';ch=getchar();}
    return x*f;
}
int n,m;
int a[1000005],t[1000005];
long long mn,mx;
int main()
{
    m=read();n=read();
    for(int i=1;i<=m;i++)a[i]=read();
    sort(a+1,a+m+1);
    for(int i=1;i<=m;i++)t[i]=a[i];
    int now=1;
    for(int i=1;i<=n;i++)
    {
        mn+=t[now];
        t[now]--;if(!t[now])now++;
    }
    for(int i=1;i<=m;i++)
        t[i]=a[i];
    for(int i=1;i<=n;i++)
    {
        mx+=t[m];
        t[m]--;
        int k=m;
        while(t[k]<t[k-1])swap(t[k],t[k-1]),k--;
    }
    printf("%lld %lld",mx,mn);
    return 0;
}
