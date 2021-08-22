#include<bits/stdc++.h>
using namespace std;
int n,m,f[105][105],ans;
int main(){
	//freopen("game.in","r",stdin);
	//freopen("game.out","w",stdout); 
	int x,y;
	cin>>n>>m;
	for(int i=1;i<=m;i++){
		cin>>x>>y;
		f[x][y]=1;
	}
	for(int k=1;k<=n;k++)
		for(int i=1;i<=n;i++)
			for(int j=1;j<=n;j++)
				f[i][j]=f[i][j]||f[i][k]&&f[k][j];
	for(int i=1;i<=n;i++){
		int cnt=1;
		for(int j=1;j<=n;j++){
			if(i==j)continue;
			else
				cnt=cnt&&(f[i][j]||f[j][i]);
		}
		ans+=cnt;
	}
	cout<<ans<<endl;
	return 0;	
} 
