#include <cstdio>
#include <cstring>
#include <cstdlib>
#include <algorithm>
#include <iostream>

using namespace std;

bool M[40][40];
bool B[40][40];
int dx[4]={1,0,-1,0};
int dy[4]={0,1,0,-1};
int cnt,n;
void dfs(int x,int y)
{
	if (B[x][y]) return;
//	printf("%d %d\n",x,y);
	B[x][y]=1;
	for (int i=0;i<4;i++)
	{
		
		
		
		else
			if (!B[x+dx[i]][y+dy[i]])	dfs(x+dx[i],y+dy[i]);
	}
}

int main()
{
	freopen("maze.in","r",stdin);
	freopen("maze.out","w",stdout);
	scanf("%d",&n);
	memset(M,0,sizeof(M));
	getchar();
	char ctmp;
	for (int i=1;i<=n;i++)
	{
		for (int j=1;j<=n;j++)
		{
			
			
			
		}
		getchar();
	}
	memset(B,0,sizeof B);
	cnt=-4;
	
	
	
	cout<<cnt*9<<endl;
}
