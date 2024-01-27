#include<bits/stdc++.h>
using namespace std;
int prt[100010],ans[100010],M,N;
char col[100010];
int GetFather(int u){
	if(u==prt[u])	
		return u;
	prt[u]=GetFather(prt[u]);
	return prt[u];
}
void Merge(int x,int y){
	int f1,f2;
	f1=GetFather(x),f2=GetFather(y);
	if(f1!=f2)prt[f2]=f1;
	
}
int main(){
	//freopen("candy.in","r",stdin);
	//freopen("candy.out","w",stdout);
	int cnt=0;
	cin>>N>>M;
	for(int i=1;i<=N;i++){
		prt[i]=i;
		cin>>col[i];
	}	
	for(int i=1;i<=N-1;i++){
		int u,v;
		cin>>u>>v;
		if(col[u]==col[v])
			Merge(u,v);
	}
	for(int i=1;i<=M;i++){
		int a,b;	
		cin>>a>>b;
		char c;		
		cin>>c;
		if(GetFather(a)==GetFather(b)&&col[a]!=c)		
			ans[++cnt]=0;//判断路径上是否有偏好的牛奶
		else	
			ans[++cnt]=1;
	}
	for(int i=1;i<=cnt;i++)	cout<<ans[i];
	return 0;
}
