#include <iostream>
#include <algorithm>
#include <cstdio>
#define REP(i,n) for (int i=1;i<=n;i++)

using namespace std;
int n;
struct demo{
	int x,y;
} s[50050];

bool cmp(demo x,demo y) {
	
	
	
	
	return 0;
}

int main() {
	freopen("queue.in","r",stdin);
	freopen("queue.out","w",stdout);
	scanf("%d",&n);
	REP(i,n) {
		int x,y;
		scanf("%d %d",&x,&y);
		s[i].x=x; s[i].y=y;
	}
	sort(s+1,s+n+1,cmp);




	}
	printf("%d\n",ans);
	return 0;
}
