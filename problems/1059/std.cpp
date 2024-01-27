#include<iostream>
#include<cstdio>
#include<cstring>
#include<cstdlib>
#include<algorithm>
#include<cmath>
#include<vector>
#include<queue>
#define ll long long
using namespace std;
inline int read()
{
	int x=0,f=1;char ch=getchar();
	while(ch<'0'||ch>'9'){if(ch=='-')f=-1;ch=getchar();}
	while(ch>='0'&&ch<='9'){x=x*10+ch-'0';ch=getchar();}
	return x*f;
}
int n,m;
int a[1000005];
priority_queue<int> q;
ll mx,mn;
int main()
{
    n=read();m=read();
	for(int i=1;i<=n;i++)a[i]=read(),q.push(a[i]);
	sort(a+1,a+n+1);
	int now=1;
	for(int i=1;i<=m;i++)
	{
		int t=q.top();q.pop();
		mx+=t;
		q.push(t-1);
		while(!a[now])now++;
		mn+=a[now];a[now]--;
	}
	printf("%lld %lld",mx,mn);
	return 0;
}
