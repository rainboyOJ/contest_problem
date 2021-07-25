#include<stdio.h>
#include<string.h>
#include<algorithm>
using namespace std;
int main()
{
	int T,n,i,j,step;
	int a[1010];
	{
		step=0;
		memset(a,0,sizeof(a));
		scanf("%d",&n);
		for(i=0;i<n;i++)
			scanf("%d",&a[i]);
		sort(a,a+n);
		for(i=n-1;i>2;i-=2)
			step+=min(a[0]+a[1]*2+a[i],a[0]*2+a[i]+a[i-1]);	
		//例：1、2、4、8、9首先1、2过去 然后1回来 8、9过去 2回来 即完成8、9过河	
		//或者是，1、9过去 1回来 1、8过去 1回来 即完成8、9过河 取二者较小值 
		if(i==1)
			step+=a[1];
		else 
			step+=a[0]+a[1]+a[2];
		printf("%d\n",step);
	}
	return 0;
}
