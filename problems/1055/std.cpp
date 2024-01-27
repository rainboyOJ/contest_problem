#include<bits/stdc++.h>
using namespace std;
int n,sum[100005],q[100005],h[100005];
struct node{
	int pl,jl;
}a[100005];
bool cmp(node x,node y){
	return x.pl>y.pl;
}
int main(){
	//freopen("salesman.in","r",stdin);
	//freopen("salesman.out","w",stdout); 
	cin>>n;
	for(int i=1;i<=n;i++){
		cin>>a[i].jl;
	}
	for(int i=1;i<=n;i++){
		cin>>a[i].pl;
	}
	sort(a+1,a+n+1,cmp);
	for(int i=1;i<=n;i++)sum[i]=sum[i-1]+a[i].pl;
	for(int i=1;i<=n;i++)q[i]=max(q[i-1],2*a[i].jl);
	for(int i=n;i>=1;i--)h[i]=max(h[i+1],2*a[i].jl+a[i].pl);
	for(int i=1;i<=n;i++)
		cout<<max(sum[i]+q[i],sum[i-1]+h[i])<<endl;
	return 0;
}
