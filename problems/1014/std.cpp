#include <bits/stdc++.h>
#define mkp(a,b) make_pair((a),(b))

using namespace std;

typedef pair<int,int> PII;
typedef long long LL;

int R,C;
char g[1111][1111];
int vis[1111][1111],d[1111][1111];
PII q[1111*1111];
int head,tail;

inline int expand(int r,int c,int dist){
	if(r<0||c<0||r>=R||c>=C)	return 0;
	
	
	
	
	
	return 0;
}

int run(){
	cin >> R >> C;
	for(int i=0;i<R;i++)
		cin >> g[i];
	
	
	
	
	
	q[tail++]=mkp(0,0);
	d[0][0]=1;
	vis[0][0]=1;
	while(head<tail){
		PII cur=q[head++];
		int r=cur.first;
		int c=cur.second;
		int dist=d[r][c];
		if(g[r][c]=='+'){
			
			
			
			
			
		}
		else if(g[r][c]=='|'){
			expand(r-1,c,dist);
			expand(r+1,c,dist);
		}
		else if(g[r][c]=='-'){
		
		
		
		
	}
	if(!vis[R-1][C-1])
		d[R-1][C-1]=-1;
	printf("%d\n",d[R-1][C-1]);
	return 0;
}

int main(){
	freopen("bgmap.in","r",stdin);
	freopen("bgmap.out","w",stdout);
	
//	ios::sync_with_stdio(false);
	int T;
	cin >> T;
	
	
	
	
	return 0;
}





