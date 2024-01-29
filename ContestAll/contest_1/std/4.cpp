#include<cstdio>
#include<cmath>
#include<iostream>
using namespace std; 
int a[505][505],c[505][505],f[505][505];
int main()
{
	int m,n;
	scanf("%d%d",&m,&n);//m个村，n个小学
	for(int i = 1; i < m; ++i)
		scanf("%d",&a[i][i+1]);//相邻两个村之间的距离
	for(int i = 1; i <= m; ++i)//i,j两地的距离 
	{
		for(int  j = i+1; j <= m; ++j)
		{
			a[i][j] = a[j-1][j] + a[i][j-1];
			a[j][i] = a[i][j];
		}
	} 
	int mid;
	for(int i = 1; i <= m; ++i)
	{
		for(int j = i+1; j <= m; ++j)
		{
			mid=(i+j)/2;//`在两地中间建小学时，距离最短 
			c[i][j] = 0;//c[i][j]表示两地到最近学校的距离和 
			for(int k = i; k <= j; ++k)
				c[i][j] += a[k][mid]; 
		}
	} 
	//f[i][j]表示从i个村庄中建立j个学校，村庄到学校的最短距离和 
	for(int i = 1; i <= m; ++i)
		f[i][1] = c[1][i];
	int s = 0x7fffffff; 
	for(int i = 1; i <= m; ++i)
	{
		for(int j = 2; j <= n; ++j)
		{
			f[i][j] = s;
			for(int k  = j-1; k <= i; ++k)
				f[i][j] = min(f[i][j],f[k][j-1]+c[k+1][i]);
		}
	 } 
	printf("%d\n",f[m][n]);
	return 0;
}
