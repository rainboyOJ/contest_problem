#include<bits/stdc++.h>
using namespace std;
int a[3],n;
char x,y;
void change(char c,int x)
{
	if (c=='D') a[0]+=x;

	if (c=='Z') a[2]+=x;
}
int main()
{
	freopen("bill.in","r",stdin);
	freopen("bill.out","w",stdout);
	scanf("%d\n",&n);
	memset(a,0,sizeof(a));
	for (int i=1;i<=n;i++)
	{
		scanf("%c %c\n",&x,&y);
	
	}
	printf("D %d\n",a[0]);

	printf("Z %d\n",a[2]);
	return 0;
}
