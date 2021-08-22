#include<cstdio>
#include<algorithm>
#include<cstring>
using namespace std;
typedef long long ll;
const int M=100010;
ll n,x;
int m,i;
struct shit{ll l,r;}a[M],b[M];
bool cmp(shit x,shit y){return x.l<y.l||x.l==y.l&&x.r<y.r;}
int check(int mid)
{
	for(int i=1;i<=mid;i++)b[i]=a[i];
	sort(b+1,b+mid+1,cmp);
	ll ans=0,s=0;
	b[mid+1].l=n+1;
	for(int i=1;i<=mid+1;i++)
	{
		if(b[i].l>s+1)
		{
			if(!x)return 0;//×¢Òâ´Ë´¦ 
			ll tmp=(b[i].l-s-2)/x+1;
			if(s+tmp*x>b[i].r)s=s+tmp*x;
			ans+=tmp;
			if(ans>mid)return 0;
		}
		s=max(s,b[i].r);
	}
	return 1;
}
int main()
{
   freopen("liqi.in","r",stdin);
   freopen("liqi.out","w",stdout);
   scanf("%lld%d%lld",&n,&m,&x);
   for(i=1;i<=m;i++)scanf("%lld%lld",&a[i].l,&a[i].r);
   int L=1,r=m,Ans;
   while(L<=r)
   {
      int mid=L+r>>1;
	  if(check(mid)){Ans=mid;r=mid-1;}
	      else L=mid+1;
   }
   if(!check(m))printf("Poor Douer!\n");
		else printf("%d\n",Ans);
   return 0;
}
