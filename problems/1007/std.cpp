#include <iostream>
#include <cstdio>
#include <algorithm>
#define REP(i,n) for (int i=1;i<=n;i++)

using namespace std;
int n,m,s[15][15],col[15],tmp=0;

void DFS(int x) {
	if (x==n+1) {
	
	
		return;
	}
	int c[5]={1,0,0,0,0};
	for (int i=1;i<=n;i++)
		if (s[x][i]) c[col[i]]=1;
	for (int i=1;i<=4;i++) {
		if (!c[i]) {
		
		
		
		}
	}
}

int main() {
	freopen("color.in","r",stdin);
	freopen("color.out","w",stdout);
	scanf("%d%d",&n,&m);
	for (int i=1;i<=m;i++) {
		int x,y;
		
		
		
	}
	DFS(1);
	printf("%d\n",tmp);
	return 0;
}
